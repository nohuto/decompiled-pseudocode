/*
 * XREFs of HalpTimerMeasureProcessorsWorker @ 0x14050A680
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140376E70 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140377478 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpFindTimer @ 0x140377CA8 (HalpFindTimer.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 */

ULONG_PTR __fastcall HalpTimerMeasureProcessorsWorker(ULONG_PTR Argument)
{
  int v2; // ebx
  __int16 v3; // bp
  int v4; // ebp
  ULONG ActiveProcessorCount; // eax
  KPCR *Pcr; // r14
  ULONG v7; // esi
  ULONG_PTR *Timer; // rbx
  unsigned __int64 v9; // rcx
  unsigned int Latency; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp-8h]
  LARGE_INTEGER v18; // [rsp+80h] [rbp+8h] BYREF
  LARGE_INTEGER v19; // [rsp+88h] [rbp+10h] BYREF
  LARGE_INTEGER v20; // [rsp+90h] [rbp+18h] BYREF
  LARGE_INTEGER v21; // [rsp+98h] [rbp+20h] BYREF

  v18.QuadPart = 0LL;
  v20.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v19.QuadPart = 0LL;
  v21.QuadPart = 0LL;
  v2 = *(_DWORD *)(Argument + 16);
  v3 = v17;
  _disable();
  v4 = v3 & 0x200;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pcr = KeGetPcr();
  v7 = ActiveProcessorCount;
  Timer = HalpFindTimer(v2, 0, 0, 0, 1);
  v9 = __readcr2();
  __writecr2(v9);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) != 1 )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument );
  }
  if ( KeGetCurrentPrcb()->Number )
  {
    while ( *(_DWORD *)(Argument + 4) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    KeQueryPerformanceCounter(&PerformanceFrequency);
    Latency = HalpTimerDetermineValidTimerPairReadLatency((__int64)Timer, HalpPerformanceCounter);
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v19, &v21);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    while ( *(_DWORD *)(Argument + 8) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v18, &v20);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( !*(_DWORD *)(Argument + 12) );
    v11 = HalpTimerScaleCounter(v20.QuadPart - v21.QuadPart, PerformanceFrequency.QuadPart, 1000000LL);
    v13 = 1000000 * v12 / v11;
    *(_QWORD *)Pcr->HalReserved = 10000 * ((v13 + 5000) / 0x2710);
    v14 = 1000000 * ((v13 + 500000) / 0xF4240);
    Pcr->StallScaleFactor = v14 / 0xF4240;
    KeGetCurrentPrcb()->MHz = v14 / 0xF4240;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 4) != v7 );
    KeStallExecutionProcessor(0x1E848u);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 8) != v7 );
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 12));
  }
  if ( v4 )
    _enable();
  return 0LL;
}
