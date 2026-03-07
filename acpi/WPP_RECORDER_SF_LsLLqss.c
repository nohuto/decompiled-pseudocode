__int64 __fastcall WPP_RECORDER_SF_LsLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        __int64 a11,
        __int64 a12)
{
  const char *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  const char *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v25; // [rsp+20h] [rbp-98h]

  v12 = a7;
  v13 = -1LL;
  v14 = a11;
  v16 = a12;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a12 + v17) );
    }
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a11 + v18) );
    }
    if ( a7 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a7[v19] );
    }
    v20 = a7;
    if ( !a7 )
      v20 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
      21LL,
      &a6,
      4LL,
      v20);
  }
  if ( v16 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v16 + v21) );
  }
  if ( v14 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v14 + v22) );
  }
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
    v23 = v13 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v25) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           17LL,
           &WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
           v25,
           &a6,
           4LL,
           v12,
           v23,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10);
}
