/*
 * XREFs of WPP_RECORDER_SF_dS @ 0x1C000CF98
 * Callers:
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x1C00783A4 (HUBFDO_MapDvsecUsb4Hosts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const wchar_t *a7)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  int v14; // [rsp+20h] [rbp-58h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    v12 = L"NULL";
    if ( a7 )
      v12 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_440221f57c503424f19abf9386554ba7_Traceguids,
      32LL,
      &a6,
      4LL,
      v12,
      v11,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
  }
  LOWORD(v14) = 32;
  return WppAutoLogTrace(a1, 4LL, 3LL, &WPP_440221f57c503424f19abf9386554ba7_Traceguids, v14, &a6);
}
