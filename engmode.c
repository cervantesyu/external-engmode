#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int
read_file(char *path, char *buff, int bufflen)
{
  int fd = open(path, O_RDONLY);
  if (fd < 0) {
    return -1;
  }

  int rc =read (fd, buff, bufflen-1);
  if (rc <= 0) {
    buff[0] = '\0';
    return -1;
  }

  buff[rc] = '\0';
  close(fd);
  return 0;
}

int
write_file(char *path, char *buff, int bufflen)
{
  int fd = open(path, O_RDWR);
  if (fd < 0) {
    return -1;
  }

  int rc = write(fd, buff, bufflen);
  close(fd);
  return 0;
}
