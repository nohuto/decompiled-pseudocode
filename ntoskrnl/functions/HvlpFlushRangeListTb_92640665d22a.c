__int64 __fastcall HvlpFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  char v7; // bl
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r10
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v7 = a4;
  v15 = 0LL;
  v14 = 0LL;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    HvlpPrepareFlushHeader(&v14, a1, a2, a4);
  }
  v8 = HvlpCountFlushVaList(a6, a7);
  if ( v8 > 0xB || (HvlEnlightenments & 0x80u) == 0 || v7 && (unsigned int)(v11 + 1) > 0xC )
  {
    LOBYTE(v10) = a5;
    LOBYTE(v9) = v7;
    return HvlpSlowFlushListTb((unsigned int)&v14, v9, v10, v11, v12, v8);
  }
  else
  {
    LOBYTE(v10) = a5;
    LOBYTE(v9) = v7;
    return HvlpFastFlushListTb((unsigned int)&v14, v9, v10, v11, v12, v8);
  }
}
