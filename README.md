# deep-learning-for-mobile

#### 1. mobilenet for iOS by ncnn

（1）新建一个 mobilefacenet 的项目

File -> New -> Project -> Single View App -> Next -> Create

（2）Frameworks 文件和模型文件的导入

- 建立一个 **Frameworks** 文件夹，导入**[ncnn.framework](https://github.com/Tencent/ncnn/releases/download/20190320/ncnn.framework.zip)**、**[opemp.framework](https://github.com/Tencent/ncnn/releases/download/20190320/openmp.framework.zip)**、**[opencv.framework](https://sourceforge.net/projects/opencvlibrary/files/opencv-ios/2.4.13/opencv-2.4.13.6-ios-framework.zip/download)** 三个文件
- 在主目录下面建一个 models 文件夹用来存放模型文件，导入8个模型文件。
- 在主目录下新建一个 img 存放一张测试图片，命名为 test.jpg

（3）创建四个文件 NCNNWrapper.mm、NCNNWrapper.h、PrefixHeader.pch、mobilefacenet-ios-Briding-Header.h 

（4） 复制ios相关三个文件：DetectionViewController.swift、MainViewController.swift、Main.storyboard 

（5） 配置文件修改

- 修改enable_bitcode 为 No 即可

- 在 info.plist 里面添加如下行，用以调用 相机

  ~~~xml
  <key>NSCameraUsageDescription</key>
  <string>Camera</string>
  ~~~

（6） 如果有语法错误，适当修改语法即可(本项目主要适配Xcode10.2/swift 5.0/iphone7)

**速度：iphone7上, mtcnn+facenet：25ms以内**







