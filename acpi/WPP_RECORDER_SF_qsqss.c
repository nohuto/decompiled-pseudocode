__int64 __fastcall WPP_RECORDER_SF_qsqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rbx
  const char *v12; // rsi
  const char *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+20h] [rbp-78h]

  v10 = a7;
  v11 = -1LL;
  v12 = a9;
  v14 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
    }
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
    }
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
    }
    v18 = a7;
    if ( !a7 )
      v18 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      26LL,
      &a6,
      8LL,
      v18);
  }
  if ( v14 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v14[v19] );
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v12[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v22 = v11 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v24) = 26;
  return WppAutoLogTrace(
           a1,
           4LL,
           17LL,
           &WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
           v24,
           &a6,
           8LL,
           v10,
           v22,
           &a8,
           8LL,
           v12,
           v21,
           v14);
}
