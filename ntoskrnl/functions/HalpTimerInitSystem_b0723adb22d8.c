__int64 __fastcall HalpTimerInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int MaximumProcessorCount; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  unsigned __int8 v17; // cl
  const EVENT_DESCRIPTOR *v18; // rcx

  inited = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140C01B48[0] = (__int64 (__fastcall *)())HalpTimerNotifyProcessorFreeze;
    return inited;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v17 = byte_140C61D0C;
    if ( !byte_140C61D0C )
      v17 = 50;
    HalpCmosCenturyOffset = v17;
    return inited;
  }
  v6 = v5 - 6;
  if ( !v6 )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      off_140C01AC0[0] = HalpTscSynchronization;
    off_140C01C88[0] = HalpTimerClockActivate;
    off_140C01C90[0] = HalpTimerClockInitialize;
    off_140C01C98[0] = HalpTimerClockStop;
    off_140C01CA0[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
    off_140C01C80[0] = HalpTimerGetClockConfiguration;
    off_140C01CA8[0] = HalpTimerOnlyClockInterruptPending;
    off_140C01C00 = (__int64 (__fastcall *)())HalpTimerQueryCycleCounter;
    off_140C01E10 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
    off_140C01D38[0] = HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
    off_140C01D30[0] = HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
    off_140C01D40[0] = HalpTimerQueryAuxiliaryCounterFrequency;
    HalpInitializeTimers(v15);
    ((void (*)(void))HalpTimerSaveProcessorFrequency)();
    HalpTimerInitializeClock();
    KiProfileIrql = 15;
    v16 = HalpTimerInitializeProfiling();
    inited = v16;
    if ( v16 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v16, 0LL, 0LL);
    HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter);
    return inited;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C62128 )
      {
        v8 = 16LL;
        __writemsr(0x10u, 0LL);
      }
      HalpTimerSaveProcessorFrequency(v8);
      HalpInitializePnTimers();
      HalpTimerInitializeClockPn();
      return (unsigned int)HalpTimerInitializeProfiling();
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 4;
        if ( v11 )
        {
          if ( v11 == 3 )
          {
            off_140C01D58[0] = HalpTimerQueryAndResetRtcErrors;
            HalpTimerTraceTimingHardware();
            HalpTscReportSyncStatus();
          }
        }
        else
        {
          inited = HalpTimerInitPowerManagement();
          HalpTimerWatchdogLogReset();
        }
      }
      else if ( HalpWatchdogTimer )
      {
        HalpTimerInitializeSystemWatchdog();
      }
      return inited;
    }
    HalpTimerSchedulePeriodicQueries();
    HalpTimerConfigureQpcBypass();
    off_140C01DF0[0] = HalpTimerQueryHostPerformanceCounter;
    if ( (unsigned int)HalpInterruptModel() != 1 )
      goto LABEL_25;
    if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      HalpTimerMeasureAllProcessorFrequencies();
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      goto LABEL_25;
    if ( HalpTscSynchronizationFailureFallback )
    {
      v18 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
    }
    else
    {
      if ( !HalpTscProcessorFeatureFallback )
      {
LABEL_25:
        HalpTimerFinalizeAuxiliaryCounter();
        return inited;
      }
      v18 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
    }
    HalpTscFallbackToPlatformSource(v18);
    goto LABEL_25;
  }
  HalpTscReserveResources();
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v14, 8LL * MaximumProcessorCount);
  if ( HalpTimerSavedProcessorCounter )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer();
    return inited;
  }
  return 3221225626LL;
}
