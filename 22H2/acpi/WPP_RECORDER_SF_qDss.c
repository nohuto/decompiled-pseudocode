/*
 * XREFs of WPP_RECORDER_SF_qDss @ 0x1C006C648
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0093160 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-68h]

  v9 = a9;
  v10 = -1LL;
  v11 = a8;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(a9 + v13) );
    }
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a8 + v14) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3a81a75478543d9133d658d0ebd9234d_Traceguids,
      12LL,
      &a6,
      8LL,
      &a7);
  }
  if ( v9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v9 + v15) );
  }
  if ( v11 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v11 + v10) );
  }
  LOWORD(v17) = 12;
  return WppAutoLogTrace(a1, 2LL, 20LL, &WPP_3a81a75478543d9133d658d0ebd9234d_Traceguids, v17, &a6);
}
