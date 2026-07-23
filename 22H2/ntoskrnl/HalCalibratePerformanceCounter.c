/*
 * XREFs of HalCalibratePerformanceCounter @ 0x140384030
 * Callers:
 *     HalpTscFallback @ 0x1404C1550 (HalpTscFallback.c)
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     HalpSetVirtualRtc @ 0x14030D8CC (HalpSetVirtualRtc.c)
 *     HalpQueryVirtualRtc @ 0x1403840FC (HalpQueryVirtualRtc.c)
 *     HalpTimerResetProfileAdjustment @ 0x140395BA0 (HalpTimerResetProfileAdjustment.c)
 *     HalpTimerScaleCounter @ 0x140395BF0 (HalpTimerScaleCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5564 (HalpTimerCalibratePerformanceCounter.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, __int64 a2)
{
  unsigned int Number; // ebp
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  char v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  LARGE_INTEGER v13; // [rsp+40h] [rbp+8h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v3 = a2;
  v4 = HalpPerformanceCounter;
  v13.QuadPart = 0LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    v3 = HalpTimerScaleCounter(a2, 10000000LL, *(_QWORD *)(HalpPerformanceCounter + 192));
  if ( v4 != HalpOriginalPerformanceCounter )
  {
    v11 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v11 = 10000000LL;
    v3 = HalpTimerScaleCounter(v3, v11, *(_QWORD *)(v4 + 192));
  }
  if ( !Number )
  {
    v7 = HalpQueryVirtualRtc(&v13, 0LL);
    HalpTimerCalibratePerformanceCounter(v4, v3);
    v10 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      v12 = HalpTimerScaleCounter(v3, *(_QWORD *)(v4 + 192), *(_QWORD *)(HalpAlwaysOnCounter + 192));
      HalpTimerCalibratePerformanceCounter(v10, v12);
    }
    if ( v7 )
      HalpSetVirtualRtc(&v13, v8, v9);
  }
  HalpTimerResetProfileAdjustment();
  _InterlockedDecrement(a1);
  do
  {
    _mm_pause();
    result = *(unsigned int *)a1;
  }
  while ( (int)result > 0 );
  return result;
}
