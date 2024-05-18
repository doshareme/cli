# DoShare CLI
Native Command Line File Upload Utility

## How to use
Download the latest binary release for your OS and arch from [releases](https://github.com/doshareme/cli/releases).

1.Run the file in any location

```bash
doshare <filename> **<your_doshare_instance_url>
```
Note: Currently Slugs are saved in ```result.json```(we're looking to improve the experience)
If instance url is not provided it will default to doshare.me's official server and provide a slug.

2.Then your file will be availble at ```go.doshare.me/<slug>/<filename>```

From here you can simply 

```
wget -O go.doshare.me/<slug>/<filename>
```
 to download on another device.
 
*Please Note: Our Hosted Server has ```file_size``` limit as 200MB, for now.*

## How to Build
Build using command: 

```sh 
g++ main.cpp -o doshare
```


## Contribution Docs
<ul>
<li>Currently CLI is a wrapper on CURL. i.e It executes cURL to Upload File</li> 
<li>Code needs to be properly docummented for Pull Requests</li> 
<li>[ToDo][Feature] I would like it to be version compatible with all previous versions of server.</li>
<li>[ToDo][Feature] CLI will have it's own update command</li>
<li>[ToDo][Feature]</li>
</ul>
