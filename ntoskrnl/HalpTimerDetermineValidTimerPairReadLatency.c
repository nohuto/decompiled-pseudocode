/*
 * XREFs of HalpTimerDetermineValidTimerPairReadLatency @ 0x140377478
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x140376B78 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050A680 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerDetermineValidTimerPairReadLatency(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 InternalData; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v4 = -1;
  v5 = 25LL;
  do
  {
    v6 = __readcr2();
    __writecr2(v6);
    v7 = __rdtsc();
    v8 = __readcr2();
    __writecr2(v8);
    if ( a1 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a1);
      (*(void (__fastcall **)(__int64))(a1 + 112))(InternalData);
    }
    v10 = __readcr2();
    __writecr2(v10);
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v11 = HalpTimerGetInternalData(a2);
      (*(void (__fastcall **)(__int64))(a2 + 112))(v11);
    }
    v12 = __readcr2();
    __writecr2(v12);
    v13 = __rdtsc();
    v14 = __readcr2();
    __writecr2(v14);
    v15 = (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v7;
    if ( v15 >= v4 )
      LODWORD(v15) = v4;
    v4 = v15;
    --v5;
  }
  while ( v5 );
  return (unsigned int)(4 * v15);
}
