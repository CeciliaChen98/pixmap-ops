# pixmap-ops

Image manipulation demos based on the PPM image format.

![avatar](/images/my_art_work.png)

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
pixmap-ops $ mkdir build
pixmap-ops $ cd build
pixmap-ops/build $ cmake -G "Visual Studio 17 2022" ..
pixmap-ops/build $ start pixmap-ops.sln
```

Your solution file should contain two projects: `pixmap_art` and `pixmap_test`.
To run from the git bash command shell, 

```
pixmap-ops/build $ ../bin/Debug/pixmap_test
pixmap-ops/build $ ../bin/Debug/pixmap_art
```

*macOS*

Open terminal to the directory containing this repository.

```
pixmap-ops $ mkdir build
pixmap-ops $ cd build
pixmap-ops/build $ cmake ..
pixmap-ops/build $ make
```

To run each program from build, you would type

```
pixmap-ops/build $ ../bin/pixmap_test
pixmap-ops/build $ ../bin/pixmap_art
```

## Image operators

![avatar](/images/earth-add-soup.png)
```
1. add
```


![avatar](/images/earth-substract-soup.png)
```
2. substract
```

![avatar](/images/earth-multiply-soup.png)
```
3. multiply
```

![avatar](/images/earth-invert.png)
```
4. invert
```

![avatar](/images/earth-lightest-soup.png)
```
5. lightest
```

![avatar](/images/earth-darkest-soup.png)
```
6. darkest
```

![avatar](/images/earth-difference-soup.png)
```
7. difference 
```

![avatar](/images/earth-swirl.png)
```
8. swirl
```


## Results

```
My artwork
```
![avatar](/images/my_art_work.png)
