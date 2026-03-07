__int64 __fastcall vswprintf_l(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  bool v5; // sf
  unsigned int v6; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( a2 && a1 )
  {
    File._base = a1;
    File._ptr = a1;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v4 = woutput_l(&File, a2, a3, a4);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
    {
      flsbuf(0, &File);
      ptr = File._ptr;
    }
    else
    {
      *File._ptr = 0;
      ptr = ++File._ptr;
    }
    if ( --File._cnt < 0 )
      flsbuf(0, &File);
    else
      *ptr = 0;
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
