void __fastcall CcInitializeTelemetry(int a1)
{
  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage() )
  {
    if ( a1 == 1 )
    {
      memset(&CcTelemetryGlobalData, 0, 0x200uLL);
      KeQueryPerformanceCounter(&stru_140C5F4C8);
      qword_140C5F4D8 = MEMORY[0xFFFFF78000000014];
      qword_140C5F4D0 = MEMORY[0xFFFFF78000000014];
      qword_140C5F4F0 = 864000000000LL;
      *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
        byte_140C5F501 = CcDisableTelemetryRegKeyAtInit != 0;
      stru_140C5F6A0.List.Flink = 0LL;
      stru_140C5F6A0.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
      stru_140C5F6A0.Parameter = &stru_140C5F6A0;
      KeInitializeTimer(&Timer);
      KeInitializeDpc(&stru_140C5F620, (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc, 0LL);
      return;
    }
    TraceLoggingRegister_EtwRegister_EtwSetInformation((char *)&dword_140C03738);
    CcTelemetryGlobalData = 1;
  }
  else
  {
    memset(&CcTelemetryGlobalData, 0, 0x200uLL);
    KeQueryPerformanceCounter(&stru_140C5F4C8);
    stru_140C5F6A0.List.Flink = 0LL;
    qword_140C5F4D8 = MEMORY[0xFFFFF78000000014];
    qword_140C5F4D0 = MEMORY[0xFFFFF78000000014];
    qword_140C5F4F0 = 864000000000LL;
    stru_140C5F6A0.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
    stru_140C5F6A0.Parameter = &stru_140C5F6A0;
    CcTelemetryGlobalData = 1;
    *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&stru_140C5F620, (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc, 0LL);
  }
  if ( !byte_140C5F501 )
    CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
}
