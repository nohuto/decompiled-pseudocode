/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C00B50A0
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055904 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  struct RECORDER_LOG__ *v8; // r14
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  int v17; // [rsp+20h] [rbp-68h]

  v8 = gRimLog;
  v9 = a8;
  v10 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a8[v15] );
    }
    v16 = a8;
    if ( !a8 )
      v16 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v16);
  }
  v13 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
    v12 = 2 * v10 + 2;
    v13 = v9 == 0LL;
  }
  if ( v13 )
    v9 = L"NULL";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(
           v8,
           4LL,
           1LL,
           &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
           v17,
           &a6,
           8LL,
           &a7,
           8LL,
           v9,
           v12,
           0LL);
}
