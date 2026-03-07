__int64 __fastcall swoutput_s(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  char *ptr; // rax
  int v10; // eax
  unsigned int v11; // ecx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( !a2 )
    goto LABEL_21;
  if ( a2 != -1LL )
  {
    if ( a2 <= 0x3FFFFFFF )
    {
      File._cnt = 2 * a2;
      goto LABEL_6;
    }
LABEL_21:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  File._cnt = 0x7FFFFFFF;
LABEL_6:
  File._base = a1;
  File._ptr = a1;
  File._flag = 66;
  v6 = woutput_s(&File, a3, a4);
  *(_WORD *)&a1[2 * a2 - 2] = 0;
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( File._cnt >= 0 )
    {
      if ( a1 )
        *(_WORD *)a1 = 0;
      return v7;
    }
    return 4294967294LL;
  }
  if ( --File._cnt < 0 )
  {
    if ( flsbuf(0, &File) == -1 )
      return 4294967294LL;
    ptr = File._ptr;
  }
  else
  {
    *File._ptr = 0;
    ptr = ++File._ptr;
  }
  if ( --File._cnt >= 0 )
  {
    *ptr = 0;
    return v7;
  }
  v10 = flsbuf(0, &File);
  v11 = -2;
  if ( v10 != -1 )
    return v7;
  return v11;
}
