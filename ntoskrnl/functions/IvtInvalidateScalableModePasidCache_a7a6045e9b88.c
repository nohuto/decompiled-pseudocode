__int64 __fastcall IvtInvalidateScalableModePasidCache(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        char a7)
{
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF

  v15 = 0LL;
  if ( a3 == 0x10000 )
  {
    v11 = 55LL;
  }
  else
  {
    v11 = ((unsigned __int64)(unsigned __int16)a3 << 16) | 7;
    *(_QWORD *)&v15 = v11;
    if ( a4 == -1 )
      goto LABEL_6;
    v11 |= ((unsigned __int64)(a4 & 0xFFFFF) << 32) | 0x10;
  }
  *(_QWORD *)&v15 = v11;
LABEL_6:
  IvtIommuSendCommand(a1, (unsigned __int64)&v15, a5);
  if ( a6 )
  {
    v12 = v11 & 0x30;
    *((_QWORD *)&v15 + 1) = 0LL;
    if ( v12 == 48 || !v12 )
    {
      *(_QWORD *)&v15 = 18LL;
      v13 = a4 & 0xFFFFF;
    }
    else
    {
      v13 = a4 & 0xFFFFF;
      *(_QWORD *)&v15 = (v13 << 32) | 0x26;
    }
    IvtIommuSendCommand(a1, (unsigned __int64)&v15, a5);
    if ( a7 )
    {
      if ( a4 == -1 )
      {
        *(_QWORD *)&v15 = ((unsigned __int64)a2 << 32) | 3;
        *((_QWORD *)&v15 + 1) = 0x7FFFFFFFFFFFF001LL;
      }
      else
      {
        *((_QWORD *)&v15 + 1) = 0x7FFFFFFFFFFFF800LL;
        *(_QWORD *)&v15 = ((a2 | (unsigned __int64)(v13 << 16)) << 16) | 8;
      }
      IvtIommuSendCommand(a1, (unsigned __int64)&v15, a5);
    }
  }
  return IvtIommuWaitCommand(a1, 0, a5);
}
