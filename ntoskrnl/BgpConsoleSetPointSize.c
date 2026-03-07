__int64 __fastcall BgpConsoleSetPointSize(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  char v10; // r14
  int v11; // ebp
  unsigned int v12; // esi
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v14 = 0LL;
  v6 = 5;
  v10 = 0;
  v11 = 32;
  while ( 1 )
  {
    v12 = (v11 + v6 + 1) >> 1;
    *(_DWORD *)(a5 + 16) = v12;
    result = BgpFoGetTextMetrics(a5, &v14);
    if ( (int)result < 0 )
      break;
    if ( a1 > a3 / HIDWORD(v14) || a2 > a4 / (unsigned int)v14 || HIDWORD(v14) > 0x3B || (unsigned int)v14 > 0x1A )
    {
      v11 = v12 - 1;
    }
    else
    {
      v10 = 1;
      v6 = (v11 + v6 + 1) >> 1;
    }
    if ( v6 == v11 )
    {
      if ( !v10 )
        return 3221225473LL;
      *(_DWORD *)(a5 + 16) = v6;
      return BgpFoGetTextMetrics(a5, a6);
    }
  }
  return result;
}
