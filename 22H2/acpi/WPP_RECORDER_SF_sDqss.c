/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x1C0030C70
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00A3290 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  const char *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  const char *v22; // rcx
  int v23; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a10 + v18) );
    }
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_BYTE *)(a9 + v19) );
    }
    if ( a6 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a6[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a6;
    if ( !a6 )
      v22 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
      31LL,
      v22,
      v21,
      &a7);
  }
  if ( v10 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v12 + v16) );
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
  }
  if ( !a6 )
    v14 = "NULL";
  LOWORD(v23) = 31;
  return WppAutoLogTrace(a1, 4LL, 12LL, &WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids, v23, v14);
}
