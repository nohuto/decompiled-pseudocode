/*
 * XREFs of HalpTimerInitSystem @ 0x14037B080
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037AD70 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerInitializeProfiling @ 0x14037B310 (HalpTimerInitializeProfiling.c)
 *     HalpTimerSaveProcessorFrequency @ 0x14037B548 (HalpTimerSaveProcessorFrequency.c)
 *     HalpInitializePnTimers @ 0x14037B77C (HalpInitializePnTimers.c)
 *     HalpTimerInitializeClockPn @ 0x14037D70C (HalpTimerInitializeClockPn.c)
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitPowerManagement @ 0x1403953B8 (HalpTimerInitPowerManagement.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A38E4 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A39D4 (HalpInitializeTimers.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC050 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerInitializeClock @ 0x1403B1320 (HalpTimerInitializeClock.c)
 *     HalpTscReserveResources @ 0x1403B16B8 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B2A74 (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3414 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6070 (HalpTimerInitializeHypervisorTimer.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050A3C4 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x14050B64C (HalpTimerInitializeSystemWatchdog.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050C6EC (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerTraceTimingHardware @ 0x140861740 (HalpTimerTraceTimingHardware.c)
 *     HalpTscReportSyncStatus @ 0x140861BC4 (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x140866018 (HalpTimerWatchdogLogReset.c)
 */

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
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned __int8 v19; // cl
  const EVENT_DESCRIPTOR *v20; // rcx

  inited = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140C01B48 = (__int64 (__fastcall *)())HalpTimerNotifyProcessorFreeze;
    return inited;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v19 = byte_140C6216C;
    if ( !byte_140C6216C )
      v19 = 50;
    HalpCmosCenturyOffset = v19;
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
    HalpInitializeTimers(v17);
    ((void (*)(void))HalpTimerSaveProcessorFrequency)();
    HalpTimerInitializeClock();
    KiProfileIrql = 15;
    v18 = HalpTimerInitializeProfiling();
    inited = v18;
    if ( v18 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v18, 0LL, 0LL);
    HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter);
    return inited;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C62588 )
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
      v20 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
    }
    else
    {
      if ( !HalpTscProcessorFeatureFallback )
      {
LABEL_25:
        HalpTimerFinalizeAuxiliaryCounter();
        return inited;
      }
      v20 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
    }
    HalpTscFallbackToPlatformSource(v20);
    goto LABEL_25;
  }
  HalpTscReserveResources();
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v14, v13);
  HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v16, 8LL * MaximumProcessorCount);
  if ( HalpTimerSavedProcessorCounter )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer();
    return inited;
  }
  return 3221225626LL;
}
