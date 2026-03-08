/*
 * XREFs of HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FC260
 * Callers:
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FC420 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FC550 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER *__fastcall HalpTimerCaptureCurrentAuxiliaryQpcPair(LARGE_INTEGER *a1, __int64 *a2, LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER v5; // rsi
  unsigned int v6; // ebp
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 InternalData; // rax
  __int64 v11; // r8
  __int64 v12; // r15
  LONGLONG QuadPart; // rax
  LARGE_INTEGER *result; // rax

  v3 = 0LL;
  v5.QuadPart = 0LL;
  v6 = 0;
  v7.QuadPart = -1LL;
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    InternalData = HalpTimerGetInternalData(HalpAuxiliaryCounter);
    v12 = (*(__int64 (__fastcall **)(__int64))(v11 + 112))(InternalData);
    QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
    if ( QuadPart <= (unsigned __int64)HalpTimerClosestAuxiliaryQpcPair )
      break;
    if ( v7.QuadPart <= (unsigned __int64)QuadPart )
    {
      QuadPart = v7.QuadPart;
    }
    else
    {
      v3 = v12;
      v5 = PerformanceCounter;
    }
    ++v6;
    v7.QuadPart = QuadPart;
    if ( v6 >= 0xA )
      goto LABEL_9;
  }
  v7.QuadPart = QuadPart;
  v3 = v12;
  v5 = PerformanceCounter;
LABEL_9:
  result = a1;
  *a1 = v5;
  *a2 = v3;
  *a3 = v7;
  return result;
}
