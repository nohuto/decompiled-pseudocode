/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140AA5F80
 * Callers:
 *     NtSetSystemPowerState @ 0x140AA36E0 (NtSetSystemPowerState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PopGetPolicyWorker @ 0x1402BCB34 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
 *     StringCchPrintfW @ 0x1402FAA78 (StringCchPrintfW.c)
 *     RtlBootStatusDisableFlushing @ 0x1403031D8 (RtlBootStatusDisableFlushing.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeSuspendThread @ 0x140354244 (KeSuspendThread.c)
 *     ZwSetSystemPowerState @ 0x140415A50 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x14058112C (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x140588F3C (PopFxPrepareDevicesForShutdown.c)
 *     PoSetUserPresent @ 0x14058B920 (PoSetUserPresent.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopActionRetrieveInitialState @ 0x14058CEB0 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x14058D024 (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x14058D058 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x14058D7A8 (PopThermalSxEntry.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14058DE90 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14058DEFC (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PpmCheckPausePpmEngineForSx @ 0x140593EFC (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x140593F40 (PpmCheckResumePpmEngineFromSx.c)
 *     PopRunMaximumIrpWorkers @ 0x140596644 (PopRunMaximumIrpWorkers.c)
 *     PopIgnoreBatteryStatusChange @ 0x14059681C (PopIgnoreBatteryStatusChange.c)
 *     PopFanSxEntry @ 0x14059718C (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x14059721C (PopFanSxExit.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405972BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PsIumResumeAfterHibernate @ 0x1405A34C4 (PsIumResumeAfterHibernate.c)
 *     ExDeleteWakeTimerInfo @ 0x1406091B4 (ExDeleteWakeTimerInfo.c)
 *     ExWakeTimersPause @ 0x14060966C (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x1406097F4 (ExWakeTimersResume.c)
 *     WheaResumedFromHibernate @ 0x14060DF78 (WheaResumedFromHibernate.c)
 *     PopTransitionCheckpoint @ 0x14067F1CC (PopTransitionCheckpoint.c)
 *     MmLockPagableSectionByHandle @ 0x1406A7BD0 (MmLockPagableSectionByHandle.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExReleaseTimeRefreshLock @ 0x1407E2A30 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140818B6C (PopCancelIgnoreBatteryStatusChange.c)
 *     PopInitSIdle @ 0x14082A7A4 (PopInitSIdle.c)
 *     PopInitializePowerPolicySimulate @ 0x14085D284 (PopInitializePowerPolicySimulate.c)
 *     PopResetActionDefaults @ 0x140860E68 (PopResetActionDefaults.c)
 *     PopCurrentPowerStatePrecise @ 0x140870DD8 (PopCurrentPowerStatePrecise.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopFastS4Check @ 0x14097D8F4 (PopFastS4Check.c)
 *     PopFindNextSystemPowerState @ 0x14097D930 (PopFindNextSystemPowerState.c)
 *     PopIsDozeSupported @ 0x14097DB04 (PopIsDozeSupported.c)
 *     PopSetShutdownMarker @ 0x14097E48C (PopSetShutdownMarker.c)
 *     PopSetSleepMarker @ 0x14097E4A0 (PopSetSleepMarker.c)
 *     PopAdvanceSystemPowerState @ 0x1409810CC (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x1409839D4 (PpmPerfReApplyStates.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceProcess @ 0x1409853E0 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x140986490 (PopZeroHiberFile.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PopSaveLidReliabilityState @ 0x140987B68 (PopSaveLidReliabilityState.c)
 *     PopDeferDoze @ 0x140988614 (PopDeferDoze.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 *     PopNotifyCallbacksPreSleep @ 0x140988A7C (PopNotifyCallbacksPreSleep.c)
 *     PopQueryPowerSettingUlong @ 0x140988ACC (PopQueryPowerSettingUlong.c)
 *     PoClearBroadcast @ 0x140988B8C (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140988BE4 (PoInitializeBroadcast.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x14098CD40 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopDiagTracePreSleepNotification @ 0x14098E348 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x14098EAA4 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopNotifyTelemetryOsState @ 0x14098F604 (PopNotifyTelemetryOsState.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x140990E10 (PopPowerAggregatorNotifySystemWake.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 *     PopTransitionGetWakeTimerType @ 0x1409915A0 (PopTransitionGetWakeTimerType.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140993F30 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopEsEnterSleepShutdown @ 0x1409952F8 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x14099534C (PopEsExitSleep.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x14099EA1C (SshSessionManagerTracePostSleepNotification.c)
 *     PsTerminateServerSilo @ 0x1409A98D0 (PsTerminateServerSilo.c)
 *     RtlSetSystemBootStatusEx @ 0x1409BAD30 (RtlSetSystemBootStatusEx.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     MmZeroPageFileAtShutdown @ 0x140A28834 (MmZeroPageFileAtShutdown.c)
 *     PopQpcTimeInMs @ 0x140A84A40 (PopQpcTimeInMs.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A850B4 (ExUpdateSystemTimeFromCmos.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9B6D4 (IoFreePoDeviceNotifyList.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140A9DD6C (PopHandleWakeSources.c)
 *     PopIsMostRecentWakeAttended @ 0x140A9DF8C (PopIsMostRecentWakeAttended.c)
 *     PopNewWakeInfo @ 0x140A9DFB8 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140A9E094 (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC (PoDelistPowerStateTransitionBlocker.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
 *     PopSetDevicesSystemState @ 0x140AA42D0 (PopSetDevicesSystemState.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140AA472C (PopDiagComputeEarlyHiberStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140AA4A40 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140AA4CF4 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140AA4D84 (PopDiagTraceMtrrError.c)
 *     PopDiagTracePostSleepNotification @ 0x140AA4E14 (PopDiagTracePostSleepNotification.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA5EF0 (PopAcquireTransitionLockAfterSleep.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 *     ExGetNextWakeTime @ 0x140AA7D7C (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(unsigned int *a1)
{
  int *v1; // r15
  _DWORD *v3; // r13
  unsigned int v4; // ecx
  int v5; // r12d
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 CurrentServerSilo; // rax
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned __int8 *v17; // rbx
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int HiberContext; // eax
  int v38; // ecx
  LONG v39; // ecx
  int inited; // eax
  char NextSystemPowerState; // al
  __int64 v42; // r10
  __int64 v43; // r14
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rbx
  _DWORD *v52; // r8
  _DWORD *v53; // r14
  __int64 *v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // edx
  unsigned __int64 v57; // rax
  __int64 *v58; // rbx
  __int64 *v59; // r13
  char NextWakeTime; // al
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  PETHREAD v66; // rdx
  PEPROCESS v67; // rcx
  int v68; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v70; // ecx
  int v71; // r8d
  unsigned int v72; // eax
  __int64 v73; // rax
  _DWORD *v74; // rax
  void *v75; // rcx
  unsigned int v76; // [rsp+30h] [rbp-49h]
  HANDLE ProcessId[2]; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  int v79; // [rsp+60h] [rbp-19h] BYREF
  char *v80; // [rsp+68h] [rbp-11h]
  int v81; // [rsp+70h] [rbp-9h]
  int v82; // [rsp+78h] [rbp-1h]
  unsigned __int64 v83; // [rsp+80h] [rbp+7h]
  int v84; // [rsp+88h] [rbp+Fh]
  char v85; // [rsp+E0h] [rbp+67h] BYREF
  PEPROCESS Process; // [rsp+E8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v88; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = (int *)(a1 + 37);
  *((_BYTE *)a1 + 24) = 0;
  v3 = a1 + 59;
  *((_BYTE *)a1 + 36) = 0;
  a1[10] = 0;
  *((_QWORD *)a1 + 10) = 0LL;
  a1[38] = 1;
  a1[39] = 1;
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
  a1[37] = 0;
  a1[59] = 0;
  Process = 0LL;
  Thread = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  v88 = 0LL;
  v4 = (PopSimulate & 0x10000) != 0 ? 0xEE1E5D00 : 0;
  a1[26] = 0;
  a1[95] = v4 + 600000000;
  PopTransitionCheckpoint(8, 1);
  if ( a1[1] - 1 > 5 || (v5 = 6, *a1 - 1 > 6) || (a1[2] & 0xCFFFFC0) != 0 )
  {
    *v1 = 1;
    a1[26] = -1073741811;
    goto LABEL_237;
  }
  if ( (int)*a1 < 4 && dword_140C3CD74 >= 16 )
  {
    a1[26] = -1073741811;
    *v1 = 2;
LABEL_241:
    if ( *v1 )
      PopDiagTraceStateTransitionFailurePoint(a1[26], *v1);
    return a1[26];
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *((_BYTE *)a1 + 72) = PreviousMode;
  if ( PreviousMode )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return ZwSetSystemPowerState(*a1, a1[1]);
    a1[26] = -1073741727;
    *v1 = 2;
    goto LABEL_241;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v9 = *a1;
  *((_QWORD *)a1 + 12) = CurrentServerSilo;
  if ( !PsIsHostSilo(CurrentServerSilo) )
  {
    if ( (unsigned int)(v9 - 4) > 2 )
    {
      *v1 = 4;
      v11 = -1073741637;
    }
    else
    {
      v10 = -2147483599;
      if ( v9 != 5 )
        v10 = -1073741077;
      a1[8] = v10;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
      v11 = 0;
    }
    a1[26] = v11;
    goto LABEL_237;
  }
  if ( v9 == 2 )
    PnpSurpriseFailUnsafeDmaDevices();
  if ( *a1 == 4 )
    PopReadShutdownPolicy();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C3CD74;
  v13 = dword_140C3CD74 < 16;
  a1[31] = 128;
  if ( !v13 )
    v12 = 5;
  a1[30] = v12;
  PopAcquireTransitionLockAfterSleep();
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v14 = PoInitializeBroadcast();
  a1[26] = v14;
  if ( v14 < 0 )
  {
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    *v1 = 5;
LABEL_237:
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    goto LABEL_241;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopCurrentPowerStatePrecise((_OWORD *)a1 + 10, (__int64)&v88);
  PopAcquirePolicyLock();
  *((_BYTE *)a1 + 64) = 1;
  PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C3CE28);
  if ( byte_140C3CD61 )
  {
    if ( byte_140C3CD61 != 2 )
    {
      PopReleasePolicyLock();
      PoClearBroadcast();
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      *v1 = 6;
      a1[26] = -1073741791;
      goto LABEL_237;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  PopSetPowerActionState(3);
  *(_QWORD *)&qword_140C3CD98 = qword_140C3C9F0;
  PopExecutePowerAction(a1 + 30, 0, a1 + 3, a1[1], 1u);
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios((int *)a1 + 62);
  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
  if ( *a1 == 6 )
    LODWORD(qword_140C3CD64) = 6;
  v15 = *a1;
  if ( *a1 - 4 <= 2 )
  {
    PoPowerDownActionInProgress = 1;
    if ( v15 == 5 )
      PoPowerResetActionInProgress = 1;
    if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  }
  v16 = *a1;
  v17 = (unsigned __int8 *)(a1 + 22);
  *((_BYTE *)a1 + 88) = 0;
  v18 = (int *)(a1 + 7);
  a1[7] = 0;
  if ( (unsigned int)(v16 - 2) <= 1 )
    PoPowerDownActionInProgress = 1;
  *((_BYTE *)a1 + 112) = 0;
LABEL_42:
  a1[26] = -1073741536;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)a1 + 64) )
        {
          PopAcquirePolicyLock();
          *((_BYTE *)a1 + 64) = 1;
        }
        if ( !(_DWORD)qword_140C3CD64 )
        {
          *v1 = 6;
          a1[26] = 0;
          goto LABEL_80;
        }
        *((_BYTE *)a1 + 144) = PopAction;
        LOBYTE(PopAction) = 0;
        v19 = a1[26];
        if ( v19 == -1073741536 )
        {
          if ( (a1[36] & 2) != 0 && dword_140C3CD6C >= 0 && (dword_140C3CD6C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            *v1 = 8;
            goto LABEL_80;
          }
          PopActionRetrieveInitialState((_DWORD *)&qword_140C3CD64 + 1, a1 + 7, &dword_140C3CD80, (_BYTE *)a1 + 88);
          if ( (unsigned int)(qword_140C3CD64 - 4) <= 2 )
          {
            byte_140C3CD62 = 1;
            dword_140C3CD6C = a1[2];
          }
          a1[26] = 0;
        }
        else if ( v19 < 0 )
        {
          goto LABEL_80;
        }
        PopReleasePolicyLock();
        *((_BYTE *)a1 + 64) = 0;
        a1[92] = 1;
        a1[93] = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 92, a1 + 93);
        v20 = a1 + 93;
        if ( (dword_140C3CD6C & 0x40000000) != 0 )
        {
          a1[92] = 0;
          *v20 = 0;
        }
        if ( !byte_140C3CE46 && !byte_140C3CE34 && !byte_140C3CE3B )
          *v20 = 0;
        PopInitializePowerPolicySimulate();
        dword_140C3CD84 = dword_140C3CD80;
        v21 = ((unsigned int)dword_140C3CD6C >> 27) & 2;
        a1[27] = v21;
        PopAdvanceSystemPowerState(&dword_140C3CD84, v21, SHIDWORD(qword_140C3CD64), *v18);
        if ( (a1[2] & 8) != 0 )
        {
          byte_140C3CAA0 = 1;
          *((_BYTE *)a1 + 36) = 0;
          dword_140C3CD88 = 5;
          a1[11] = 6;
          v22 = dword_140C3CD80;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            a1[11] = dword_140C3CD80;
            v23 = 6;
            dword_140C3CD88 = 5;
            *((_BYTE *)a1 + 36) = 1;
            a1[17] = 6;
            goto LABEL_66;
          }
          dword_140C3CD88 = dword_140C3CD80;
          a1[11] = dword_140C3CD80;
          v22 = dword_140C3CD80;
          *((_BYTE *)a1 + 36) = 0;
        }
        v23 = PopPowerStateHandlerLookup[v22];
        a1[17] = v23;
        if ( v23 > 6 )
          goto LABEL_111;
LABEL_66:
        if ( !qword_140C3D628[3 * (int)v23] )
        {
LABEL_111:
          NextSystemPowerState = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
          *((_BYTE *)a1 + 48) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_80;
          goto LABEL_112;
        }
        if ( (a1[2] & 8) != 0 )
        {
          v24 = 6;
        }
        else
        {
          if ( byte_140C3CD62 )
          {
            PopSetShutdownMarker();
            PopSaveLidReliabilityState(v25);
            goto LABEL_73;
          }
          v24 = dword_140C3CD80;
        }
        PopSetSleepMarker(v24);
LABEL_73:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *((_BYTE *)a1 + 64) = 1;
          goto LABEL_42;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C3CD7C = 3;
        PopDiagTraceKernelQueriesAllowed(*v17);
        if ( !*v17 )
          break;
        v30 = PopSetDevicesSystemState(v27, v26, v28, v29);
        a1[26] = v30;
        if ( v30 >= 0 )
        {
          *((_BYTE *)a1 + 112) = 1;
          break;
        }
        if ( v30 == -1073741536 )
          break;
        v31 = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = v31;
        if ( !v31 )
        {
          *v1 = 9;
          goto LABEL_80;
        }
LABEL_112:
        a1[26] = 0;
      }
      if ( (a1[26] & 0x80000000) == 0 )
      {
        PopCheckpointSystemSleep(13LL);
        HiberContext = PopAllocateHiberContext(v1);
        a1[26] = HiberContext;
        if ( HiberContext >= 0 )
          break;
      }
    }
    a1[29] = PopNotifyTelemetryOsState((unsigned int)qword_140C3CD64, dword_140C3CD80, dword_140C3CD88, a1[2], 1);
    PopTransitionCheckpoint(9, 0);
    if ( !byte_140C3CD62 )
    {
      PopCurrentPowerState((_OWORD *)a1 + 10);
      PopDiagTracePreSleepNotification(
        a1[11],
        dword_140C3CD88,
        dword_140C3CD74,
        dword_140C3CD78,
        a1[29],
        (__int64)(a1 + 40));
      PopCheckpointSystemSleep(16LL);
      PopUmpoSendFlushSleepStudyLoggerNotification();
    }
    PopEsEnterSleepShutdown();
    PopThermalSxEntry();
    PopFanSxEntry();
    if ( !*((_BYTE *)a1 + 24) )
    {
      if ( byte_140C3CD62 )
      {
        v85 = 1;
        v79 = 5;
        v81 = 1;
        v80 = &v85;
        v82 = 11;
        v83 = 0xFFFFF780000002C4uLL;
        v84 = 4;
        RtlSetSystemBootStatusEx((__int64)&v79, 2u, 0LL);
      }
      *((_BYTE *)a1 + 24) = 1;
    }
    v38 = 5;
    if ( !*((_BYTE *)a1 + 36) )
      v38 = dword_140C3CD80;
    PopFlushVolumes(v38);
    if ( dword_140C3CD88 < dword_140C3CD80 )
      dword_140C3CD88 = dword_140C3CD80;
    byte_140C3CD7C = 2;
    if ( byte_140C3CD62 )
      break;
    v39 = a1[17];
    KeMtrrComparisonFailed = 0;
    inited = PopInitSystemSleeperThread(v39, (struct _KEVENT *)a1 + 11, ProcessId);
    a1[26] = inited;
    if ( inited >= 0 )
    {
      if ( !byte_140C3CE10 )
      {
        ExWakeTimersPause();
        byte_140C3CE10 = 1;
      }
      *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
      v42 = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)a1 + 28) = 0LL;
      v43 = PopWakeAlarmTimeOverrideAc;
      *((_QWORD *)a1 + 25) = v42;
      if ( v43 || PopWakeAlarmTimeOverrideDc )
      {
        *((_QWORD *)a1 + 28) = -3LL;
      }
      else if ( !*((_DWORD *)PopPolicy + 22)
             || dword_140C3CD80 == 5
             || !PopIsDozeSupported(&PopCapabilities)
             || (dword_140C3CD6C & 0x40000000) != 0 )
      {
        if ( byte_140C3D6F4 && dword_140C3CD80 == 5 && !byte_140C3CAA0 && qword_140C3C9A8 && dword_140C3CD74 == 11 )
        {
          v47 = qword_140C3C9A8 - v42;
          *((_QWORD *)a1 + 44) = qword_140C3C9A8 - v42;
          v48 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
          *((_QWORD *)a1 + 28) = -2LL;
          v49 = v48 + v47;
          v50 = *((_QWORD *)a1 + 24);
          *((_QWORD *)a1 + 44) = v49;
          *((_QWORD *)a1 + 27) = v49 + v50;
        }
      }
      else
      {
        v45 = *((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 27) = v45;
        v46 = *(unsigned int *)(v44 + 88);
        *((_QWORD *)a1 + 28) = -1LL;
        *((_QWORD *)a1 + 27) = v45 + 10000000 * v46;
        if ( !qword_140C3CE20 )
          qword_140C3CE20 = v45;
      }
      v51 = &qword_140C3CDC8;
      memset(&qword_140C3CDC8, 0, 0x48uLL);
      dword_140C3CDC0 = 3;
      if ( *((_QWORD *)a1 + 28) == -3LL )
      {
        qword_140C3CDC8 = v43;
        qword_140C3CDD8[0] = -3LL;
        qword_140C3CDF0 = *((_QWORD *)a1 + 28);
        qword_140C3CDE0 = PopWakeAlarmTimeOverrideDc;
      }
      else if ( !byte_140C3CAA0 && dword_140C3CD74 != 14 )
      {
        v52 = a1 + 92;
        v53 = a1 + 93;
        if ( dword_140C3CD80 == 5 && *v52 != 1 && *v53 != 1 )
        {
          PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, a1 + 58, v3);
          if ( a1[58] || *v3 )
          {
            v52 = a1 + 92;
            a1[92] = 0;
            v53 = a1 + 93;
            a1[93] = 0;
          }
          else
          {
            v53 = a1 + 93;
            v52 = a1 + 92;
          }
        }
        if ( *((_QWORD *)a1 + 27) )
        {
          if ( *((_QWORD *)a1 + 28) == -2LL )
          {
            if ( *v52 )
            {
              qword_140C3CDC8 = *((_QWORD *)a1 + 27);
              qword_140C3CDD8[0] = *((_QWORD *)a1 + 28);
            }
            if ( *v53 )
            {
              qword_140C3CDE0 = *((_QWORD *)a1 + 27);
              qword_140C3CDF0 = *((_QWORD *)a1 + 28);
            }
          }
          else
          {
            do
            {
              *v51 = *((_QWORD *)a1 + 27);
              v51 += 3;
            }
            while ( (__int64)v51 < (__int64)&unk_140C3CDF8 );
            v54 = qword_140C3CDD8;
            do
            {
              *v54 = *((_QWORD *)a1 + 28);
              v54 += 3;
            }
            while ( (__int64)v54 < (__int64)&qword_140C3CE08 );
          }
        }
        v55 = qword_140C3CE18;
        *((_QWORD *)a1 + 10) = qword_140C3CE18;
        v56 = v55;
        if ( v55 )
        {
          v57 = *((_QWORD *)a1 + 24) + 20000000LL;
          if ( v55 < v57 )
          {
            *((_QWORD *)a1 + 10) = v57;
            v56 = v57;
          }
        }
        if ( *v52 )
        {
          LOBYTE(v52) = *v52 == 2 && PopSimulate >= 0;
          *((_BYTE *)a1 + 209) = (_BYTE)v52;
          v58 = (__int64 *)(a1 + 14);
          v59 = (__int64 *)(a1 + 60);
          NextWakeTime = ExGetNextWakeTime(v56 + 1, *((_QWORD *)a1 + 27), (_DWORD)v52, (int)a1 + 56, (__int64)(a1 + 60));
          *((_BYTE *)a1 + 376) = NextWakeTime;
          if ( NextWakeTime )
          {
            qword_140C3CDC8 = *v58;
            qword_140C3CDD8[0] = *v59;
          }
        }
        else
        {
          v58 = (__int64 *)(a1 + 14);
          v59 = (__int64 *)(a1 + 60);
        }
        if ( *v53 )
        {
          if ( *v53 != 2 || (LOBYTE(v52) = 1, PopSimulate < 0) )
            LOBYTE(v52) = 0;
          *((_BYTE *)a1 + 209) = (_BYTE)v52;
          v61 = ExGetNextWakeTime(
                  (unsigned int)*((_QWORD *)a1 + 10) + 1,
                  *((_QWORD *)a1 + 27),
                  (_DWORD)v52,
                  (_DWORD)v58,
                  (__int64)v59);
          *((_BYTE *)a1 + 376) = v61;
          if ( v61 )
          {
            qword_140C3CDE0 = *v58;
            qword_140C3CDF0 = *v59;
          }
        }
      }
      qword_140C3CDD0[0] = qword_140C3CDC8;
      if ( qword_140C3CDC8 && qword_140C3CDC8 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
        qword_140C3CDD0[0] = *((_QWORD *)a1 + 24) + a1[95];
      qword_140C3CDE8 = qword_140C3CDE0;
      if ( qword_140C3CDE0 && qword_140C3CDE0 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[95] )
        qword_140C3CDE8 = *((_QWORD *)a1 + 24) + a1[95];
      a1[90] = PopTransitionGetWakeTimerType(qword_140C3CDD8[0]);
      a1[91] = PopTransitionGetWakeTimerType(qword_140C3CDF0);
      qword_140C3CF70 = KeQueryPerformanceCounter(0LL).QuadPart;
      ExAcquireTimeRefreshLock(1u);
      ExUpdateSystemTimeFromCmos(1, 1u);
      ExReleaseTimeRefreshLock();
      ((void (__fastcall *)(__int64, __int64))off_140C019D0)(qword_140C3CDD0[0], qword_140C3CDE8);
      PopBootStatCheckpointAvailable = 0;
      PpmCheckPausePpmEngineForSx();
      PsLookupProcessByProcessId(ProcessId[0], &Process);
      PsLookupThreadByThreadId(ProcessId[1], &Thread);
      PopSetDevicesSystemState(v63, v62, v64, v65);
      *((_BYTE *)a1 + 112) = 1;
      PopNewWakeInfo();
      v66 = Thread;
      v67 = Process;
      *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
      a1[38] = dword_140C3D48C;
      v68 = PoPushPowerStateTransitionRecordWithCallback(v67, v66, 0LL, 0LL);
      KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
      KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
      if ( v68 >= 0 )
        PoDelistPowerStateTransitionBlocker();
      qword_140C3CB30 = 0LL;
      a1[26] = a1[85];
      PopSetPowerActionWatchdogState(2u);
      CurrentThread = KeGetCurrentThread();
      v70 = dword_140C3CD80;
      if ( PoResumeFromHibernate )
        v70 = dword_140C3CD88;
      dword_140C3CD8C = v70;
      PopTransitionCritialResumeThread = (__int64)CurrentThread;
      if ( (a1[2] & 8) != 0 )
      {
        a1[11] = 6;
      }
      else
      {
        a1[11] = dword_140C3CD80;
        v5 = dword_140C3CD80;
      }
      v71 = dword_140C3CD8C;
      v76 = a1[91];
      v72 = a1[90];
      a1[10] = dword_140C3CD8C;
      PopDiagTracePostSleepNotification(v5, dword_140C3CD88, v71, qword_140C3CDD0[0], qword_140C3CDE8, v72, v76);
      if ( KeMtrrComparisonFailed )
        PopDiagTraceMtrrError();
      if ( (a1[26] & 0x80000000) != 0 && dword_140C3CD80 == 5 )
      {
        DestinationString = 0LL;
        StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
        RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
        IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
        PopDiagTraceHibernateErrorStatus(a1[26]);
      }
LABEL_80:
      if ( byte_140C3CAA0 )
      {
        qword_140C3D160 = KeQueryPerformanceCounter(0LL).QuadPart;
        dword_140C3CA84 = PopQpcTimeInMs(&qword_140C3D158, &qword_140C3D160);
      }
      if ( (a1[26] & 0x80000000) == 0 )
      {
        qword_140C3CDB0 = *((_QWORD *)a1 + 43);
        ExUpdateSystemTimeFromCmos(1, 1u);
        LOBYTE(v32) = 1;
        if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C01D58[0])(v32) )
          *((_BYTE *)a1 + 208) = 1;
        qword_140C3CF88 = KeQueryPerformanceCounter(0LL).QuadPart;
        PfPowerActionNotify(2, 0, 0);
        qword_140C3CDA8 = MEMORY[0xFFFFF78000000008];
        PopDiagComputeEarlyHiberStats();
        if ( a1[10] == 4 )
          PopDiagTraceFirmwareS3Stats();
      }
      byte_140C3CD7D = 1;
      PoPowerDownActionInProgress = 0;
      PoPowerResetActionInProgress = 0;
      PsIumResumeAfterHibernate();
      if ( *((_BYTE *)a1 + 112) )
      {
        PfPowerActionNotify(3, 0, 0);
        PopSetDevicesSystemState(v34, v33, v35, v36);
        PfPowerActionNotify(3, 1, 0);
      }
      if ( (a1[26] & 0x80000000) == 0 )
        WheaResumedFromHibernate();
      PpmCheckResumePpmEngineFromSx();
      PopCurrentPowerStatePrecise((_OWORD *)a1 + 10, (__int64)&v88);
      if ( *((_BYTE *)a1 + 208) )
        ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
      if ( PopIsDetailedSleepReliabilityDiagEnabled() )
        PopBootStatCheckpointAvailable = 1;
      else
        RtlBootStatusDisableFlushing(1);
      PopCheckpointSystemSleep(56LL);
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C019D0)(0LL, 0LL);
      a1[29] = PopNotifyTelemetryOsState((unsigned int)qword_140C3CD64, dword_140C3CD80, dword_140C3CD88, a1[2], 0);
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
      *(_QWORD *)&qword_140C3CD98 = 0LL;
      PopFanSxExit();
      PopEsExitSleep();
      a1[39] = dword_140C3D48C;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
      PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
      if ( (a1[26] & 0x80000000) == 0 )
      {
        PopCurrentPowerState((_OWORD *)a1 + 10);
        SshSessionManagerTracePostSleepNotification(qword_140C3CDD0[0], qword_140C3CDE8, a1[90], a1[91], a1[43], a1[42]);
      }
      if ( *((_BYTE *)a1 + 112) )
        PopHandleWakeSources();
      if ( !*((_BYTE *)a1 + 64) )
      {
        PopAcquirePolicyLock();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( (a1[26] & 0x80000000) != 0 )
        goto LABEL_224;
      PopInitSIdle(1u);
      PopPowerAggregatorNotifySystemWake(a1[10]);
      LOBYTE(PopAction) = 0;
      if ( (unsigned __int64)dword_140C3CDC0 >= 3 )
      {
        if ( !PopIsMostRecentWakeAttended() )
        {
          PopFullWake = 0;
          PopPendingUserPresenceDuringSystemSleep = 0;
          PopPendingUserPresenceMonitorOnReason = 0;
        }
        goto LABEL_224;
      }
      qword_140C3CE18 = qword_140C3CDD0[3 * dword_140C3CDC0];
      v73 = qword_140C3CDD8[3 * dword_140C3CDC0];
      PopFullWake = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v73 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[92], a1[93], (_BYTE *)a1 + 160) )
            qword_140C3CD64 = *(_QWORD *)a1;
          else
            qword_140C3CD64 = 0x500000002LL;
          LOBYTE(PopAction) = PopAction | 2;
          break;
        case -2LL:
          if ( !qword_140C3CDB8 )
            qword_140C3CDB8 = qword_140C3CDA8;
          goto LABEL_224;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          goto LABEL_224;
        default:
          v74 = a1 + 93;
          if ( dword_140C3D48C != 1 )
          {
            if ( !*v74 && a1[38] == a1[39] )
              PopCheckPowerSourceAfterRtcWakeSet();
            goto LABEL_224;
          }
          if ( *v74 )
          {
LABEL_224:
            if ( byte_140C3CE10 && *((_BYTE *)a1 + 256) )
            {
              ExWakeTimersResume();
              byte_140C3CE10 = 0;
              qword_140C3CE18 = 0LL;
            }
            if ( PoResumeFromHibernate )
              PopBootLoaderTraceProcess();
            byte_140C3CAA0 = 0;
            PopResetActionDefaults();
            PopSetPowerActionState(2);
            PopReleasePolicyLock();
            if ( PopPendingUserPresenceDuringSystemSleep )
              PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
            ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
            PopCheckForWork();
            if ( (a1[26] & 0x80000000) == 0 )
              PpmPerfReApplyStates();
            dword_140C3CD74 = 16;
            qword_140C3D0F0 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C39050;
            v75 = (void *)*((_QWORD *)a1 + 30);
            if ( v75 )
            {
              ExDeleteWakeTimerInfo(v75);
              *((_QWORD *)a1 + 30) = 0LL;
            }
            PopTransitionCritialResumeThread = 0LL;
            goto LABEL_237;
          }
          qword_140C3CD64 = *(_QWORD *)a1;
          LOBYTE(PopAction) = 2;
          break;
      }
      *((_BYTE *)a1 + 256) = 0;
      goto LABEL_224;
    }
    *v1 = 20;
  }
  PopFxPrepareDevicesForShutdown();
  IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140C3CD98 + 48LL));
  if ( dword_140C3CD74 == 2 )
    PopCriticalShutdownInProgress = 1;
  PopTransitionCheckpoint(8, 2);
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
    PopGracefulShutdown();
  PopShutdownWorkItem.Parameter = 0LL;
  PopShutdownWorkItem.List.Flink = 0LL;
  PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
  ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
  KeSuspendThread((__int64)KeGetCurrentThread());
  return 3221226219LL;
}
