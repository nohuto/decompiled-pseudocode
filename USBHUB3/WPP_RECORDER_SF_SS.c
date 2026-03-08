/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1C0042B30
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C004353C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // r14
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-58h]

  v7 = L"NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = L"NULL";
    if ( a7 )
      v14 = a7;
    v15 = L"NULL";
    if ( a6 )
      v15 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      32LL,
      v15,
      v13,
      v14,
      v11,
      0LL);
  }
  if ( a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a7[v16] );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v7 = a6;
  LOWORD(v18) = 32;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids, v18, v7);
}
