#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
  if (argc < 3) {
    std::cerr << "Usage: " << argv[0] << " <file_path> <server_url>" << std::endl;
    return 1;
  }

  std::string command = "curl -sfdTo /dev/null ";
  command += argv[1];
  command += " ";
  command += argv[2];
  command += " -o result.json";
  std::cout << "Executing: " << command << std::endl;

  int result = system(command.c_str());
  if (result == -1) {
    std::cerr << "Error executing curl command." << std::endl;
    return 1;
  } else if (result > 0) {
    std::cerr << "curl command failed with code: " << result << std::endl;
    return 1;
  }
  std::cout << "File upload successful!" <<  << std::endl;
  return 0;
}
