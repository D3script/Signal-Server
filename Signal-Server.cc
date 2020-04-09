include "main.hh";

/**
    *simple function to be export from this c++ code
   **/
void sd(char *argv[])
{

  char *key[] = {
      "signalserver",
      "-sdf", "/media/galal/Work/rf/Signal-Server/data/51_52_0_1.sdf",
      "-lat", "51.849",
      "-lon", "-2.2299",
      "-txh", "25",
      "-f", "900",
      "-erp", "5",
      "-rxh", "2",
      "-rt", "-90",
      "-dbm", "-m",
      "-o", "test1",
      "-R", "30",
      "-res", "1200",
      "-pm", "1"};

  int result = main(2, key);

 
}

void hd(char *argv[])
{

  char *key[] = {
      "signalserverHD",
      "-sdf", "/media/galal/Work/rf/Signal-Server/data/51_52_0_1.sdf",
      "-lat", "51.849",
      "-lon", "-2.2299",
      "-txh", "25",
      "-f", "900",
      "-erp", "5",
      "-rxh", "2",
      "-rt", "-90",
      "-dbm", "-m",
      "-o", "test1",
      "-R", "30",
      "-res", "1200",
      "-pm", "1"};

  int result = main(2, key);

 
}

void lidar(char *argv[])
{

  char *key[] = {
      "signalserverLIDAR",
      "-sdf", "/media/galal/Work/rf/Signal-Server/data/51_52_0_1.sdf",
      "-lat", "51.849",
      "-lon", "-2.2299",
      "-txh", "25",
      "-f", "900",
      "-erp", "5",
      "-rxh", "2",
      "-rt", "-90",
      "-dbm", "-m",
      "-o", "test1",
      "-R", "30",
      "-res", "1200",
      "-pm", "1"};

  int result = main(2, key);
 
}

 