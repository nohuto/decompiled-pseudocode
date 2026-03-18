/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140A494E8
 * Callers:
 *     NtSetSystemPowerState @ 0x140A53010 (NtSetSystemPowerState.c)
 * Callees:
 *     ExFreePoolEx @ 0x140246BB0 (ExFreePoolEx.c)
 *     StringCchPrintfW @ 0x1402511F0 (StringCchPrintfW.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     KeSuspendThread @ 0x1402EE3D8 (KeSuspendThread.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PoSetUserPresent @ 0x140368E20 (PoSetUserPresent.c)
 *     PopThermalSxEntry @ 0x14038AA3C (PopThermalSxEntry.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 *     PopRunMaximumIrpWorkers @ 0x140396464 (PopRunMaximumIrpWorkers.c)
 *     ExWakeTimersResume @ 0x1403982A0 (ExWakeTimersResume.c)
 *     ExWakeTimersPause @ 0x1403983A0 (ExWakeTimersPause.c)
 *     PopActionRetrieveInitialState @ 0x1403987D0 (PopActionRetrieveInitialState.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopFanSxExit @ 0x140398C88 (PopFanSxExit.c)
 *     PopFanSxEntry @ 0x140398CF0 (PopFanSxEntry.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140399068 (PpmCheckResumePpmEngineFromSx.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140399104 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140399140 (PpmCheckPausePpmEngineForSx.c)
 *     PopIgnoreBatteryStatusChange @ 0x140399318 (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x140399424 (PsIumResumeAfterHibernate.c)
 *     RtlBootStatusDisableFlushing @ 0x1403B6BDC (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x14041EE20 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1405C6990 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1405CD27C (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D6D4C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PopCurrentPowerState @ 0x140750EC4 (PopCurrentPowerState.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     ExReleaseTimeRefreshLock @ 0x1407D6CBC (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     PopCurrentPowerStatePrecise @ 0x1407ED930 (PopCurrentPowerStatePrecise.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopSetSleepMarker @ 0x1407FD9E0 (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x1407FF3EC (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopNotifyTelemetryOsState @ 0x1407FF5A4 (PopNotifyTelemetryOsState.c)
 *     PopTransitionGetWakeTimerType @ 0x1407FF640 (PopTransitionGetWakeTimerType.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407FFEBC (PopNotifyCallbacksPreSleep.c)
 *     CmSetLazyFlushState @ 0x1407FFF4C (CmSetLazyFlushState.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PoClearBroadcast @ 0x1408025E8 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140802640 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1408071C4 (PopEsEnterSleepShutdown.c)
 *     PopDiagTracePreSleepNotification @ 0x140807BE0 (PopDiagTracePreSleepNotification.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140807D78 (SshSessionManagerTracePostSleepNotification.c)
 *     PopInitSystemSleeperThread @ 0x140807FEC (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x1408080D4 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x140808344 (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x1408085E4 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopBootLoaderTraceProcess @ 0x1408087A4 (PopBootLoaderTraceProcess.c)
 *     PopAdvanceSystemPowerState @ 0x140808834 (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x140808958 (PpmPerfReApplyStates.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140808BB4 (PopPowerAggregatorNotifySystemWake.c)
 *     PopEsExitSleep @ 0x140808C14 (PopEsExitSleep.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140808CB4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x14081C69C (PopInitializePowerPolicySimulate.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopResetActionDefaults @ 0x14081CEF8 (PopResetActionDefaults.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14081CFDC (PopCancelIgnoreBatteryStatusChange.c)
 *     MmZeroPageFileAtShutdown @ 0x1409681E4 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x14098972C (PopFindNextSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140989788 (PopIsDozeSupported.c)
 *     PopSetShutdownMarker @ 0x140989CAC (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x14098FBB0 (PopZeroHiberFile.c)
 *     PopSaveLidReliabilityState @ 0x1409902C8 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x1409974E8 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BADD0 (RtlSetSystemBootStatusEx.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A47884 (ExUpdateSystemTimeFromCmos.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140A48CA4 (PopDiagComputeEarlyHiberStats.c)
 *     PopSstDiagQueryResumeTimestamp @ 0x140A48D7C (PopSstDiagQueryResumeTimestamp.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x140A49448 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x140A51484 (IoFreePoDeviceNotifyList.c)
 *     PopProcessDeviceWakeSource @ 0x140A51700 (PopProcessDeviceWakeSource.c)
 *     PopIsMostRecentWakeAttended @ 0x140A5179C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140A517EC (PopNewWakeInfo.c)
 *     PopHandleWakeSources @ 0x140A51888 (PopHandleWakeSources.c)
 *     PopDiagTracePostSleepNotification @ 0x140A51B08 (PopDiagTracePostSleepNotification.c)
 *     PopFlushVolumes @ 0x140A51CA4 (PopFlushVolumes.c)
 *     PopQpcTimeInMs @ 0x140A53260 (PopQpcTimeInMs.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140A6B91C (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140A6BB90 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140A6BC20 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x140A6CA38 (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(unsigned int *a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  bool v5; // cf
  int v6; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  unsigned __int8 *v16; // rsi
  unsigned int v17; // eax
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  __int64 v25; // rcx
  int v26; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v29; // rcx
  LONG v30; // ecx
  int inited; // eax
  __int64 v32; // r10
  __int64 v33; // r14
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  _DWORD *v42; // r8
  _DWORD *v43; // r14
  __int64 *v44; // rcx
  unsigned __int64 v45; // rcx
  int v46; // edx
  unsigned __int64 v47; // rax
  __int64 *v48; // rsi
  __int64 *v49; // r12
  char NextWakeTime; // al
  char v51; // al
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  _DWORD *v58; // rax
  ULONG_PTR v59; // rcx
  unsigned int v60; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v62; // [rsp+50h] [rbp-30h] BYREF
  char *v63; // [rsp+58h] [rbp-28h]
  int v64; // [rsp+60h] [rbp-20h]
  int v65; // [rsp+68h] [rbp-18h]
  unsigned __int64 v66; // [rsp+70h] [rbp-10h]
  int v67; // [rsp+78h] [rbp-8h]
  char v68; // [rsp+C0h] [rbp+40h] BYREF
  int v69; // [rsp+C8h] [rbp+48h]
  __int64 v70; // [rsp+D0h] [rbp+50h] BYREF

  v1 = 0;
  v2 = a1 + 58;
  *((_BYTE *)a1 + 24) = 0;
  v4 = a1 + 59;
  *((_BYTE *)a1 + 36) = 0;
  a1[10] = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  a1[37] = 1;
  a1[38] = 1;
  *((_BYTE *)a1 + 256) = 1;
  *((_QWORD *)a1 + 46) = 1LL;
  *((_QWORD *)a1 + 7) = 0LL;
  a1[29] = 0;
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_BYTE *)a1 + 376) = 0;
  *((_QWORD *)a1 + 45) = 0LL;
  a1[58] = 0;
  a1[59] = 0;
  v70 = 0LL;
  v5 = (PopSimulate & 0x10000) != 0;
  a1[26] = 0;
  a1[95] = v5 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( a1[1] - 1 > 5 )
    return 3221225485LL;
  v6 = *a1;
  v69 = 6;
  if ( (unsigned int)(v6 - 1) > 6 || (a1[2] & 0xCFFFFC0) != 0 || v6 < 4 && dword_140C227D4 >= 16 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *((_BYTE *)a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*a1, a1[1]);
    else
      return 3221225569LL;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v10 = *a1;
  *((_QWORD *)a1 + 12) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v10 - 4) > 2 )
    {
      v1 = -1073741637;
    }
    else
    {
      v11 = -2147483599;
      if ( v10 != 5 )
        v11 = -1073741077;
      a1[8] = v11;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
    }
    a1[26] = v1;
    return v1;
  }
  if ( v10 == 2 )
  {
    PnpSurpriseFailUnsafeDmaDevices();
    v10 = *a1;
  }
  if ( v10 == 4 )
    PopReadShutdownPolicy();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C227D4;
  v13 = dword_140C227D4 < 16;
  a1[31] = 128;
  if ( !v13 )
    v12 = 5;
  a1[30] = v12;
  PopAcquireTransitionLock(1);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v14 = PoInitializeBroadcast();
  a1[26] = v14;
  if ( v14 >= 0 )
  {
    PopCheckPowerSourceAfterRtcWakeCancel();
    PopCurrentPowerStatePrecise(a1 + 39, (__int64)&v70);
    PopAcquirePolicyLock();
    *((_BYTE *)a1 + 64) = 1;
    PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C22888);
    if ( byte_140C227C1 )
    {
      if ( byte_140C227C1 != 2 )
      {
        PopReleasePolicyLock();
        PoClearBroadcast();
        ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
        return 3221225505LL;
      }
    }
    else
    {
      PopResetActionDefaults();
    }
    PopSetPowerActionState(3);
    *(_QWORD *)&qword_140C227F8 = qword_140C22750;
    PopExecutePowerAction(a1 + 30, 0, a1 + 3, a1[1], 1u);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios((int *)a1 + 62);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v15 = *a1;
    if ( *a1 == 6 )
    {
      LODWORD(qword_140C227C4) = 6;
      v15 = *a1;
    }
    if ( (unsigned int)(v15 - 4) <= 2 )
    {
      PoPowerDownActionInProgress = 1;
      if ( v15 == 5 )
        PoPowerResetActionInProgress = 1;
      if ( *(_QWORD *)&PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(*(HANDLE *)&PopHiberInfo, (__int64)FileObject);
    }
    v16 = (unsigned __int8 *)(a1 + 22);
    v17 = *a1 - 2;
    *((_BYTE *)a1 + 88) = 0;
    v18 = (int *)(a1 + 7);
    a1[7] = 0;
    if ( v17 <= 1 )
      PoPowerDownActionInProgress = 1;
    *((_BYTE *)a1 + 112) = 0;
LABEL_42:
    a1[26] = -1073741536;
    while ( 1 )
    {
      if ( !*((_BYTE *)a1 + 64) )
      {
        PopAcquirePolicyLock();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( !(_DWORD)qword_140C227C4 )
      {
        a1[26] = 0;
        goto LABEL_171;
      }
      *((_BYTE *)a1 + 144) = PopAction;
      LOBYTE(PopAction) = 0;
      v19 = a1[26];
      if ( v19 == -1073741536 )
      {
        if ( (a1[36] & 2) != 0 && dword_140C227CC >= 0 && (dword_140C227CC & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_171;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_140C227C4 + 1, a1 + 7, &dword_140C227E0, (_BYTE *)a1 + 88);
        if ( (unsigned int)(qword_140C227C4 - 4) <= 2 )
        {
          byte_140C227C2 = 1;
          dword_140C227CC = a1[2];
        }
        a1[26] = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_171;
      }
      PopReleasePolicyLock();
      *((_BYTE *)a1 + 64) = 0;
      a1[92] = 1;
      a1[93] = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 92, a1 + 93);
      v20 = a1 + 93;
      if ( (dword_140C227CC & 0x40000000) != 0 )
      {
        a1[92] = 0;
        *v20 = 0;
      }
      if ( !byte_140C228A6 && !byte_140C22894 && !byte_140C2289B )
        *v20 = 0;
      PopInitializePowerPolicySimulate();
      dword_140C227E4 = dword_140C227E0;
      v21 = ((unsigned int)dword_140C227CC >> 27) & 2;
      a1[27] = v21;
      PopAdvanceSystemPowerState(&dword_140C227E4, v21, SHIDWORD(qword_140C227C4), *v18);
      if ( (a1[2] & 8) != 0 )
      {
        byte_140C22C00 = 1;
        *((_BYTE *)a1 + 36) = 0;
        dword_140C227E8 = 5;
        a1[11] = 6;
        v22 = dword_140C227E0;
      }
      else
      {
        if ( PopFastS4Check() )
        {
          a1[11] = dword_140C227E0;
          v23 = 6;
          dword_140C227E8 = 5;
          *((_BYTE *)a1 + 36) = 1;
          goto LABEL_66;
        }
        dword_140C227E8 = dword_140C227E0;
        a1[11] = dword_140C227E0;
        v22 = dword_140C227E0;
        *((_BYTE *)a1 + 36) = 0;
      }
      v23 = PopPowerStateHandlerLookup[v22];
LABEL_66:
      a1[17] = v23;
      if ( v23 <= 6 && qword_140C23348[3 * (int)v23] )
      {
        if ( (a1[2] & 8) != 0 )
        {
          v24 = 6;
LABEL_72:
          PopSetSleepMarker(v24);
          goto LABEL_74;
        }
        if ( !byte_140C227C2 )
        {
          v24 = dword_140C227E0;
          goto LABEL_72;
        }
        PopSetShutdownMarker();
        PopSaveLidReliabilityState(v25);
LABEL_74:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *((_BYTE *)a1 + 64) = 1;
          goto LABEL_42;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C227DC = 3;
        PopDiagTraceKernelQueriesAllowed(*v16);
        if ( *v16 )
        {
          v26 = PopSetDevicesSystemState();
          a1[26] = v26;
          if ( v26 >= 0 )
          {
            *((_BYTE *)a1 + 112) = 1;
          }
          else if ( v26 != -1073741536 )
          {
            goto LABEL_79;
          }
        }
        if ( (a1[26] & 0x80000000) == 0 )
        {
          PopCheckpointSystemSleep(13LL);
          HiberContext = PopAllocateHiberContext();
          a1[26] = HiberContext;
          if ( HiberContext >= 0 )
          {
            a1[29] = PopNotifyTelemetryOsState(
                       (unsigned int)qword_140C227C4,
                       dword_140C227E0,
                       dword_140C227E8,
                       a1[2],
                       1);
            PopTransitionCheckpoint(9, 0);
            if ( !byte_140C227C2 )
            {
              PopCurrentPowerState(a1 + 39);
              PopDiagTracePreSleepNotification(
                a1[11],
                dword_140C227E8,
                dword_140C227D4,
                dword_140C227D8,
                a1[29],
                (__int64)(a1 + 39));
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopThermalSxEntry();
            PopFanSxEntry();
            if ( !*((_BYTE *)a1 + 24) )
            {
              if ( byte_140C227C2 )
              {
                v68 = 1;
                v62 = 5;
                v64 = 1;
                v63 = &v68;
                v65 = 11;
                v66 = 0xFFFFF780000002C4uLL;
                v67 = 4;
                RtlSetSystemBootStatusEx((__int64)&v62, 2u, 0LL);
              }
              *((_BYTE *)a1 + 24) = 1;
            }
            v29 = 5LL;
            if ( !*((_BYTE *)a1 + 36) )
              v29 = (unsigned int)dword_140C227E0;
            PopFlushVolumes(v29);
            if ( dword_140C227E8 < dword_140C227E0 )
              dword_140C227E8 = dword_140C227E0;
            byte_140C227DC = 2;
            if ( byte_140C227C2 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140C227F8 + 48LL);
              if ( dword_140C227D4 == 2 )
                PopCriticalShutdownInProgress = 1;
              PopTransitionCheckpoint(8, 2);
              if ( PsGetCurrentProcess() == PsInitialSystemProcess )
                PopGracefulShutdown(0LL);
              PopShutdownWorkItem.Parameter = 0LL;
              PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
              PopShutdownWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
              KeSuspendThread((__int64)KeGetCurrentThread());
              return 3221226219LL;
            }
            v30 = a1[17];
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v30, (struct _KEVENT *)a1 + 11);
            a1[26] = inited;
            if ( inited >= 0 )
            {
              if ( !byte_140C22870 )
              {
                ExWakeTimersPause();
                byte_140C22870 = 1;
              }
              *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
              v32 = MEMORY[0xFFFFF78000000014];
              v33 = PopWakeAlarmTimeOverrideAc;
              *((_QWORD *)a1 + 25) = MEMORY[0xFFFFF78000000014];
              *((_QWORD *)a1 + 28) = 0LL;
              if ( v33 || PopWakeAlarmTimeOverrideDc )
              {
                *((_QWORD *)a1 + 28) = -3LL;
              }
              else if ( !*((_DWORD *)PopPolicy + 22)
                     || dword_140C227E0 == 5
                     || !PopIsDozeSupported(&PopCapabilities)
                     || (dword_140C227CC & 0x40000000) != 0 )
              {
                if ( byte_140C23414
                  && dword_140C227E0 == 5
                  && !byte_140C22C00
                  && qword_140C22708
                  && dword_140C227D4 == 11 )
                {
                  v37 = qword_140C22708 - v32;
                  *((_QWORD *)a1 + 44) = qword_140C22708 - v32;
                  v38 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                  *((_QWORD *)a1 + 28) = -2LL;
                  v39 = v38 + v37;
                  v40 = *((_QWORD *)a1 + 24);
                  *((_QWORD *)a1 + 44) = v39;
                  *((_QWORD *)a1 + 27) = v39 + v40;
                }
              }
              else
              {
                v35 = *((_QWORD *)a1 + 24);
                *((_QWORD *)a1 + 27) = v35;
                v36 = *(unsigned int *)(v34 + 88);
                *((_QWORD *)a1 + 28) = -1LL;
                *((_QWORD *)a1 + 27) = v35 + 10000000 * v36;
                if ( !qword_140C22880 )
                  qword_140C22880 = v35;
              }
              v41 = &qword_140C22828;
              memset(&qword_140C22828, 0, 0x48uLL);
              dword_140C22820 = 3;
              if ( *((_QWORD *)a1 + 28) == -3LL )
              {
                qword_140C22838[0] = -3LL;
                qword_140C22828 = v33;
                qword_140C22850 = *((_QWORD *)a1 + 28);
                qword_140C22840 = PopWakeAlarmTimeOverrideDc;
              }
              else if ( !byte_140C22C00 && dword_140C227D4 != 14 )
              {
                v42 = a1 + 92;
                v43 = a1 + 93;
                if ( dword_140C227E0 == 5 && *v42 != 1 && *v43 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v42 = a1 + 92;
                    *v43 = 0;
                    a1[92] = 0;
                  }
                  else
                  {
                    v42 = a1 + 92;
                  }
                }
                if ( *((_QWORD *)a1 + 27) )
                {
                  if ( *((_QWORD *)a1 + 28) == -2LL )
                  {
                    if ( *v42 )
                    {
                      qword_140C22828 = *((_QWORD *)a1 + 27);
                      qword_140C22838[0] = *((_QWORD *)a1 + 28);
                    }
                    if ( *v43 )
                    {
                      qword_140C22840 = *((_QWORD *)a1 + 27);
                      qword_140C22850 = *((_QWORD *)a1 + 28);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v41 = *((_QWORD *)a1 + 27);
                      v41 += 3;
                    }
                    while ( (__int64)v41 < (__int64)&unk_140C22858 );
                    v44 = qword_140C22838;
                    do
                    {
                      *v44 = *((_QWORD *)a1 + 28);
                      v44 += 3;
                    }
                    while ( (__int64)v44 < (__int64)&qword_140C22868 );
                  }
                }
                v45 = qword_140C22878;
                *((_QWORD *)a1 + 10) = qword_140C22878;
                v46 = v45;
                if ( v45 )
                {
                  v47 = *((_QWORD *)a1 + 24) + 20000000LL;
                  if ( v45 < v47 )
                  {
                    *((_QWORD *)a1 + 10) = v47;
                    v46 = v47;
                  }
                }
                if ( *v42 )
                {
                  if ( *v42 != 2 || (LOBYTE(v42) = 1, PopSimulate < 0) )
                    LOBYTE(v42) = 0;
                  *((_BYTE *)a1 + 209) = (_BYTE)v42;
                  v48 = (__int64 *)(a1 + 14);
                  v49 = (__int64 *)(a1 + 60);
                  NextWakeTime = ExGetNextWakeTime(
                                   v46 + 1,
                                   *((_QWORD *)a1 + 27),
                                   (_DWORD)v42,
                                   (int)a1 + 56,
                                   (__int64)(a1 + 60));
                  *((_BYTE *)a1 + 376) = NextWakeTime;
                  if ( NextWakeTime )
                  {
                    qword_140C22828 = *v48;
                    qword_140C22838[0] = *v49;
                  }
                }
                else
                {
                  v48 = (__int64 *)(a1 + 14);
                  v49 = (__int64 *)(a1 + 60);
                }
                if ( *v43 )
                {
                  if ( *v43 != 2 || (LOBYTE(v42) = 1, PopSimulate < 0) )
                    LOBYTE(v42) = 0;
                  *((_BYTE *)a1 + 209) = (_BYTE)v42;
                  v51 = ExGetNextWakeTime(
                          (unsigned int)*((_QWORD *)a1 + 10) + 1,
                          *((_QWORD *)a1 + 27),
                          (_DWORD)v42,
                          (_DWORD)v48,
                          (__int64)v49);
                  *((_BYTE *)a1 + 376) = v51;
                  if ( v51 )
                  {
                    qword_140C22840 = *v48;
                    qword_140C22850 = *v49;
                  }
                }
              }
              qword_140C22830[0] = qword_140C22828;
              if ( qword_140C22828 && qword_140C22828 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
                qword_140C22830[0] = *((_QWORD *)a1 + 24) + a1[95];
              qword_140C22848 = qword_140C22840;
              if ( qword_140C22840 && qword_140C22840 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
                qword_140C22848 = *((_QWORD *)a1 + 24) + a1[95];
              a1[90] = PopTransitionGetWakeTimerType(qword_140C22838[0]);
              a1[91] = PopTransitionGetWakeTimerType(qword_140C22850);
              qword_140C22CB0 = KeQueryPerformanceCounter(0LL).QuadPart;
              ExAcquireTimeRefreshLock(1u);
              ExUpdateSystemTimeFromCmos(1, 1u);
              ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_140C01C10)(qword_140C22830[0], qword_140C22848);
              PopBootStatCheckpointAvailable = 0;
              PpmCheckPausePpmEngineForSx();
              PopSetDevicesSystemState();
              *((_BYTE *)a1 + 112) = 1;
              PopNewWakeInfo();
              *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
              a1[37] = dword_140C232CC;
              KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
              KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
              BugCheckParameter4 = 0LL;
              a1[26] = a1[85];
              PopSetPowerActionWatchdogState(2u);
              v52 = dword_140C227E0;
              if ( PoResumeFromHibernate )
                v52 = dword_140C227E8;
              dword_140C227EC = v52;
              if ( (a1[2] & 8) != 0 )
              {
                a1[11] = 6;
              }
              else
              {
                a1[11] = dword_140C227E0;
                v69 = dword_140C227E0;
              }
              v53 = dword_140C227EC;
              v54 = v69;
              v60 = a1[91];
              v55 = a1[90];
              a1[10] = dword_140C227EC;
              PopDiagTracePostSleepNotification(
                v54,
                dword_140C227E8,
                v53,
                qword_140C22830[0],
                qword_140C22848,
                v55,
                v60);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( (a1[26] & 0x80000000) != 0 && dword_140C227E0 == 5 )
              {
                DestinationString = 0LL;
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(a1[26]);
              }
LABEL_171:
              if ( byte_140C22C00 )
              {
                qword_140C22EA0 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140C22BE4 = PopQpcTimeInMs(&qword_140C22E98, &qword_140C22EA0);
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                qword_140C22810 = *((_QWORD *)a1 + 43);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v56) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C01F98[0])(v56) )
                  *((_BYTE *)a1 + 208) = 1;
                qword_140C22CC8 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2, 0, 0);
                qword_140C22808 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( a1[10] == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_140C227DD = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              PsIumResumeAfterHibernate();
              if ( *((_BYTE *)a1 + 112) )
              {
                PfPowerActionNotify(3, 0, 0);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3, 1, 0);
              }
              PpmCheckResumePpmEngineFromSx();
              PopCurrentPowerStatePrecise(a1 + 39, (__int64)&v70);
              if ( *((_BYTE *)a1 + 208) )
                ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
              if ( !PopIsDetailedSleepReliabilityDiagEnabled() )
                RtlBootStatusDisableFlushing(1);
              PopBootStatCheckpointAvailable = 1;
              PopCheckpointSystemSleep(56LL);
              ((void (__fastcall *)(_QWORD, _QWORD))off_140C01C10)(0LL, 0LL);
              a1[29] = PopNotifyTelemetryOsState(
                         (unsigned int)qword_140C227C4,
                         dword_140C227E0,
                         dword_140C227E8,
                         a1[2],
                         0);
              PopCancelIgnoreBatteryStatusChange();
              PopExecuteOnTargetProcessors(
                (__int64)KeActiveProcessors,
                (__int64)PpmStartIllegalProcessorThrottleLogging,
                0LL,
                0LL);
              if ( *((_BYTE *)a1 + 64) )
              {
                PopReleasePolicyLock();
                *((_BYTE *)a1 + 64) = 0;
              }
              if ( *((_BYTE *)a1 + 112) )
                PopProcessDeviceWakeSource();
              PoClearBroadcast();
              *(_QWORD *)&qword_140C227F8 = 0LL;
              PopFanSxExit();
              PopEsExitSleep();
              a1[38] = dword_140C232CC;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              if ( (a1[26] & 0x80000000) == 0 )
              {
                PopCurrentPowerState(a1 + 39);
                SshSessionManagerTracePostSleepNotification(
                  qword_140C22830[0],
                  qword_140C22848,
                  a1[90],
                  a1[91],
                  a1[42],
                  a1[41]);
              }
              if ( *((_BYTE *)a1 + 112) )
                PopHandleWakeSources();
              if ( !*((_BYTE *)a1 + 64) )
              {
                PopAcquirePolicyLock();
                *((_BYTE *)a1 + 64) = 1;
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                PopInitSIdle(1u);
                PopPowerAggregatorNotifySystemWake(a1[10]);
                LOBYTE(PopAction) = 0;
                if ( (unsigned __int64)dword_140C22820 >= 3 )
                {
                  if ( !(unsigned __int8)PopIsMostRecentWakeAttended() )
                  {
                    PopFullWake = 0;
                    PopPendingUserPresenceDuringSystemSleep = 0;
                    PopPendingUserPresenceMonitorOnReason = 0;
                  }
                }
                else
                {
                  qword_140C22878 = qword_140C22830[3 * dword_140C22820];
                  v57 = qword_140C22838[3 * dword_140C22820];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  switch ( v57 )
                  {
                    case -1LL:
                      if ( PopDeferDoze(a1[92], a1[93], (_BYTE *)a1 + 156) )
                        qword_140C227C4 = *(_QWORD *)a1;
                      else
                        qword_140C227C4 = 0x500000002LL;
                      LOBYTE(PopAction) = PopAction | 2;
LABEL_209:
                      *((_BYTE *)a1 + 256) = 0;
                      break;
                    case -2LL:
                      if ( !qword_140C22818 )
                        qword_140C22818 = qword_140C22808;
                      break;
                    case -3LL:
                      PopWakeAlarmTimeOverrideAc = 0LL;
                      PopWakeAlarmTimeOverrideDc = 0LL;
                      break;
                    default:
                      v58 = a1 + 93;
                      if ( dword_140C232CC == 1 )
                      {
                        if ( !*v58 )
                        {
                          qword_140C227C4 = *(_QWORD *)a1;
                          LOBYTE(PopAction) = 2;
                          goto LABEL_209;
                        }
                      }
                      else if ( !*v58 && a1[37] == a1[38] )
                      {
                        PopCheckPowerSourceAfterRtcWakeSet();
                      }
                      break;
                  }
                }
              }
              if ( byte_140C22870 && *((_BYTE *)a1 + 256) )
              {
                ExWakeTimersResume();
                byte_140C22870 = 0;
                qword_140C22878 = 0LL;
              }
              if ( PoResumeFromHibernate )
                PopBootLoaderTraceProcess();
              byte_140C22C00 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( (a1[26] & 0x80000000) == 0 )
                PpmPerfReApplyStates();
              dword_140C227D4 = 16;
              qword_140C22E30 = PopSstDiagQueryResumeTimestamp().QuadPart;
              v59 = *((_QWORD *)a1 + 30);
              if ( v59 )
              {
                ExFreePoolEx(v59);
                *((_QWORD *)a1 + 30) = 0LL;
              }
              return a1[26];
            }
          }
        }
      }
      else
      {
LABEL_79:
        NextSystemPowerState = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = NextSystemPowerState;
        if ( !NextSystemPowerState )
          goto LABEL_171;
        a1[26] = 0;
      }
    }
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return a1[26];
}
