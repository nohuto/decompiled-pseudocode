/*
 * XREFs of WPP_RECORDER_SF_qsqs @ 0x1C003B928
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AF8C (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        __int64 a9)
{
  struct RECORDER_LOG__ *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  v9 = gFullLog;
  v10 = -1LL;
  v11 = a9;
  v12 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a9 + v16) );
    }
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a7;
    if ( !a7 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
      10LL,
      &a6,
      8LL,
      v19,
      v18,
      &a8);
  }
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
  }
  if ( v12 )
  {
    do
      ++v10;
    while ( v12[v10] );
    v14 = v10 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v20) = 10;
  return WppAutoLogTrace(v9, 4LL, 2LL, &WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, v20, &a6, 8LL, v12, v14, &a8);
}
