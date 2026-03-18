/*
 * XREFs of CcInitializeTelemetry @ 0x140B35E14
 * Callers:
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     memset @ 0x140435400 (memset.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140875C44 (CcSetTelemetryPeriodicTimer.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933834 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

char __fastcall CcInitializeTelemetry(int a1)
{
  char result; // al

  if ( a1 == 1 )
  {
    memset(&CcTelemetryGlobalData, 0, 0x200uLL);
    KeQueryPerformanceCounter(&stru_140C5F928);
    qword_140C5F938 = MEMORY[0xFFFFF78000000014];
    qword_140C5F930 = MEMORY[0xFFFFF78000000014];
    qword_140C5F950 = 864000000000LL;
    result = 0;
    *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
      byte_140C5F961 = CcDisableTelemetryRegKeyAtInit != 0;
    *(_QWORD *)&Timer.Header.Lock = 8LL;
    stru_140C5FB00.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
    stru_140C5FB00.Parameter = &stru_140C5FB00;
    Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
    Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
    stru_140C5FA80.DeferredRoutine = (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc;
    stru_140C5FB00.List.Flink = 0LL;
    Timer.DueTime.QuadPart = 0LL;
    Timer.Period = 0;
    Timer.Processor = 0;
    stru_140C5FA80.TargetInfoAsUlong = 275;
    stru_140C5FA80.DeferredContext = 0LL;
    stru_140C5FA80.DpcData = 0LL;
    stru_140C5FA80.ProcessorHistory = 0LL;
  }
  else
  {
    TraceLoggingRegister_EtwRegister_EtwSetInformation((char *)&dword_140C02F08);
    result = 0;
    CcTelemetryGlobalData = 1;
    if ( !byte_140C5F961 )
      return CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
  }
  return result;
}
