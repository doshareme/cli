#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <file_path> **<server_url>" << std::endl;
    return 1;
  }
  
  // if (argv[1]=='-h' || argv[1]=='--help') {
  //   std::cout << "Usage: " << argv[0] << " <file_path> **<server_url>" << std::endl;
  //   return 0;
  // }
  // if (argv[1]=='-v' || argv[1]=='--version') {
  //   std::cout << "Version: 1.0" << std::endl;
  //   return 0;
  // }
  std::string command = "curl -sF 'file=@";
  command += argv[1];
  command += "'";
  if (argc > 3){
    command += " ";
    command += argv[3];
  } else{
    command += " ";
    command += "https://upload.doshare.me/upload";
  }
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
  std::cout << "File upload successful!" << std::endl;
  return 0;

}
