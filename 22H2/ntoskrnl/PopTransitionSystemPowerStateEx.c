/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x1409918D8
 * Callers:
 *     NtSetSystemPowerState @ 0x140999120 (NtSetSystemPowerState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     ExFreePoolEx @ 0x140316F40 (ExFreePoolEx.c)
 *     StringCchPrintfW @ 0x140323CD8 (StringCchPrintfW.c)
 *     KeSuspendThread @ 0x140343270 (KeSuspendThread.c)
 *     PopExecuteOnTargetProcessors @ 0x1403447EC (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PopCheckForWork @ 0x14034A290 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14034AB20 (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x140382C5C (PopSetPowerActionState.c)
 *     PopSetPowerActionWatchdogState @ 0x140382C90 (PopSetPowerActionWatchdogState.c)
 *     PopThermalSxEntry @ 0x140389B58 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x140389C4C (PopThermalSxExit.c)
 *     PopRunMaximumIrpWorkers @ 0x14038BCE0 (PopRunMaximumIrpWorkers.c)
 *     ExWakeTimersPause @ 0x14038CB60 (ExWakeTimersPause.c)
 *     PopActionRetrieveInitialState @ 0x14038CCC4 (PopActionRetrieveInitialState.c)
 *     ExWakeTimersResume @ 0x14038CD80 (ExWakeTimersResume.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14038D0BC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D458 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D59C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D62C (PpmCheckPausePpmEngineForSx.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038D670 (PopIgnoreBatteryStatusChange.c)
 *     PsIumResumeAfterHibernate @ 0x14038D6FC (PsIumResumeAfterHibernate.c)
 *     PoSetUserPresent @ 0x1403A5750 (PoSetUserPresent.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7300 (RtlBootStatusDisableFlushing.c)
 *     ZwSetSystemPowerState @ 0x1403FCFC0 (ZwSetSystemPowerState.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     IoRaiseInformationalHardError @ 0x140505BB0 (IoRaiseInformationalHardError.c)
 *     PopReadShutdownPolicy @ 0x1405651C0 (PopReadShutdownPolicy.c)
 *     PopFxPrepareDevicesForShutdown @ 0x14056BA4C (PopFxPrepareDevicesForShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405768F4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     MmLockPagableSectionByHandle @ 0x14063C7E0 (MmLockPagableSectionByHandle.c)
 *     RtlSetSystemBootStatusEx @ 0x1406A6100 (RtlSetSystemBootStatusEx.c)
 *     PopCheckResiliencyScenarios @ 0x1406F2B90 (PopCheckResiliencyScenarios.c)
 *     PopIsDozeSupported @ 0x1406F4118 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1406F4274 (PopFilterCapabilities.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     ExSwapinWorkerThreads @ 0x1407743E4 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     PopSetSleepMarker @ 0x140774988 (PopSetSleepMarker.c)
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     PopNotifyTelemetryOsState @ 0x140776414 (PopNotifyTelemetryOsState.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077709C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PoClearBroadcast @ 0x1407780E0 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x140778138 (PoInitializeBroadcast.c)
 *     PopEsEnterSleepShutdown @ 0x1407790DC (PopEsEnterSleepShutdown.c)
 *     PopInitSystemSleeperThread @ 0x1407798D8 (PopInitSystemSleeperThread.c)
 *     PopFastS4Check @ 0x1407799C0 (PopFastS4Check.c)
 *     PopQueryPowerSettingUlong @ 0x140779A64 (PopQueryPowerSettingUlong.c)
 *     PopEnforceResiliencyScenarios @ 0x140779AFC (PopEnforceResiliencyScenarios.c)
 *     PopDiagTracePreSleepNotification @ 0x140779B9C (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140779F7C (PopDiagTraceKernelQueriesAllowed.c)
 *     PopBootLoaderTraceProcess @ 0x14077A018 (PopBootLoaderTraceProcess.c)
 *     PopAdvanceSystemPowerState @ 0x14077A120 (PopAdvanceSystemPowerState.c)
 *     PpmPerfReApplyStates @ 0x14077A250 (PpmPerfReApplyStates.c)
 *     PopEsExitSleep @ 0x14077A4A8 (PopEsExitSleep.c)
 *     PopInitSIdle @ 0x14078C9A8 (PopInitSIdle.c)
 *     PopAcquireTransitionLock @ 0x14078D978 (PopAcquireTransitionLock.c)
 *     PopInitializePowerPolicySimulate @ 0x14078DEE8 (PopInitializePowerPolicySimulate.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E344 (PopCurrentPowerStatePrecise.c)
 *     PopResetActionDefaults @ 0x14078E8C8 (PopResetActionDefaults.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EB1C (PopQueueBatteryStatusTimeout.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4C44 (MmZeroPageFileAtShutdown.c)
 *     PopFindNextSystemPowerState @ 0x1408E1288 (PopFindNextSystemPowerState.c)
 *     PopSetShutdownMarker @ 0x1408E17C0 (PopSetShutdownMarker.c)
 *     PopZeroHiberFile @ 0x1408E7514 (PopZeroHiberFile.c)
 *     PopDeferDoze @ 0x1408F0498 (PopDeferDoze.c)
 *     PsTerminateServerSilo @ 0x140905D50 (PsTerminateServerSilo.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098F8C4 (ExUpdateSystemTimeFromCmos.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140990D9C (PopDiagComputeEarlyHiberStats.c)
 *     PopQpcTimeInMs @ 0x140990E18 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x140990E6C (PopCaptureTimeOnProcZero.c)
 *     PfPowerActionNotify @ 0x140991198 (PfPowerActionNotify.c)
 *     PopSetDevicesSystemState @ 0x1409913D8 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140993C64 (PopCheckpointSystemSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x1409979EC (IoFreePoDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140997CDC (PopFlushVolumes.c)
 *     PopNewWakeInfo @ 0x14099851C (PopNewWakeInfo.c)
 *     PopDiagTracePostSleepNotification @ 0x140998AB8 (PopDiagTracePostSleepNotification.c)
 *     PopGracefulShutdown @ 0x1409B10A0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1409B2274 (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x1409B24F4 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x1409B2584 (PopDiagTraceMtrrError.c)
 *     ExGetNextWakeTime @ 0x1409B2F28 (ExGetNextWakeTime.c)
 */

NTSTATUS __fastcall PopTransitionSystemPowerStateEx(unsigned int *a1)
{
  int v1; // edi
  _DWORD *v2; // r13
  _DWORD *v4; // r12
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 CurrentServerSilo; // rax
  POWER_ACTION v10; // esi
  int v11; // edx
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  POWER_ACTION v15; // ecx
  unsigned __int8 *v16; // rsi
  unsigned int v17; // eax
  int *v18; // r14
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  int v25; // eax
  char NextSystemPowerState; // al
  int HiberContext; // eax
  __int64 v28; // rcx
  LONG v29; // ecx
  int inited; // eax
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rsi
  int v41; // r8d
  _DWORD *v42; // rdx
  _DWORD *v43; // r14
  __int64 *v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 *v46; // rsi
  __int64 *v47; // r12
  char NextWakeTime; // al
  char v49; // al
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // r8d
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  __int64 v59; // rcx
  ULONG_PTR v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _DWORD *v64; // rax
  __int64 v65; // rdx
  __int64 CheckStamp; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v68; // [rsp+50h] [rbp-30h] BYREF
  char *v69; // [rsp+58h] [rbp-28h]
  int v70; // [rsp+60h] [rbp-20h]
  int v71; // [rsp+68h] [rbp-18h]
  unsigned __int64 v72; // [rsp+70h] [rbp-10h]
  int v73; // [rsp+78h] [rbp-8h]
  char v74; // [rsp+C0h] [rbp+40h] BYREF
  int v75; // [rsp+C8h] [rbp+48h]

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
  *((_QWORD *)a1 + 47) = 1LL;
  *((_QWORD *)a1 + 7) = 0LL;
  a1[29] = 0;
  *((_QWORD *)a1 + 30) = 0LL;
  *((_QWORD *)a1 + 27) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 43) = 0LL;
  *((_BYTE *)a1 + 384) = 0;
  *((_QWORD *)a1 + 45) = 0LL;
  *((_QWORD *)a1 + 46) = 0LL;
  a1[58] = 0;
  a1[59] = 0;
  v5 = PopSimulate & 0x10000;
  a1[26] = 0;
  a1[97] = v5 != 0 ? 300000000 : 600000000;
  PopTransitionCheckpoint(8LL, 1LL);
  if ( a1[1] - 1 > 5 )
    return -1073741811;
  v6 = *a1;
  v7 = 6LL;
  v75 = 6;
  if ( (unsigned int)(v6 - 1) > 6 || (a1[2] & 0xCFFFFC0) != 0 || (int)v6 < 4 && dword_140C23A54 >= 16 )
    return -1073741811;
  LOBYTE(v7) = KeGetCurrentThread()->PreviousMode;
  *((_BYTE *)a1 + 72) = v7;
  if ( (_BYTE)v7 )
  {
    if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, v7) )
      return ZwSetSystemPowerState((POWER_ACTION)*a1, (SYSTEM_POWER_STATE)a1[1], a1[2]);
    else
      return -1073741727;
  }
  CurrentServerSilo = PsGetCurrentServerSilo(v6, v7);
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
      if ( v10 != PowerActionShutdownReset )
        v11 = -1073741077;
      a1[8] = v11;
      PsTerminateServerSilo(*((_QWORD *)a1 + 12));
    }
    a1[26] = v1;
    return v1;
  }
  if ( v10 == PowerActionShutdown )
    PopReadShutdownPolicy();
  a1[5] = 0;
  a1[3] = *a1;
  a1[4] = a1[2];
  *(_OWORD *)(a1 + 30) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  v12 = dword_140C23A54;
  v13 = dword_140C23A54 < 16;
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
    PopAcquirePolicyLock();
    *((_BYTE *)a1 + 64) = 1;
    PopFilterCapabilities(&PopCapabilities, (__int64)&unk_140C23B08);
    if ( byte_140C23A41 )
    {
      if ( byte_140C23A41 != 2 )
      {
        PopReleasePolicyLock();
        PoClearBroadcast();
        ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
        return -1073741791;
      }
    }
    else
    {
      PopResetActionDefaults();
    }
    PopSetPowerActionState(3);
    *(_QWORD *)&qword_140C23A78 = qword_140C23A30;
    PopExecutePowerAction((__int64)(a1 + 30), 0, (__int64 *)(a1 + 3), a1[1], 1u);
    PopIgnoreBatteryStatusChange();
    PopCheckResiliencyScenarios();
    PopEnforceResiliencyScenarios((int *)a1 + 62);
    PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmStopIllegalProcessorThrottleLogging, 0LL, 0LL);
    v15 = *a1;
    if ( *a1 == 6 )
    {
      LODWORD(qword_140C23A44) = 6;
      v15 = *a1;
    }
    if ( (unsigned int)(v15 - 4) <= 2 )
    {
      PoPowerDownActionInProgress = 1;
      if ( v15 == PowerActionShutdownReset )
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
LABEL_40:
    a1[26] = -1073741536;
    while ( 1 )
    {
      if ( !*((_BYTE *)a1 + 64) )
      {
        PopAcquirePolicyLock();
        *((_BYTE *)a1 + 64) = 1;
      }
      if ( !(_DWORD)qword_140C23A44 )
      {
        a1[26] = 0;
        goto LABEL_174;
      }
      *((_BYTE *)a1 + 144) = PopAction;
      LOBYTE(PopAction) = 0;
      v19 = a1[26];
      if ( v19 == -1073741536 )
      {
        if ( (a1[36] & 2) != 0 && dword_140C23A4C >= 0 && (dword_140C23A4C & 3) != 0 )
        {
          PopGetPolicyWorker(2);
          goto LABEL_174;
        }
        PopActionRetrieveInitialState((_DWORD *)&qword_140C23A44 + 1, a1 + 7, &dword_140C23A60, (_BYTE *)a1 + 88);
        if ( (unsigned int)(qword_140C23A44 - 4) <= 2 )
        {
          byte_140C23A42 = 1;
          dword_140C23A4C = a1[2];
        }
        a1[26] = 0;
        v19 = 0;
      }
      if ( v19 < 0 )
        goto LABEL_174;
      PopReleasePolicyLock();
      *((_BYTE *)a1 + 64) = 0;
      a1[94] = 1;
      a1[95] = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, a1 + 94, a1 + 95);
      v20 = a1 + 95;
      if ( (dword_140C23A4C & 0x40000000) != 0 )
      {
        a1[94] = 0;
        *v20 = 0;
      }
      if ( !byte_140C23B26 && !byte_140C23B14 && !byte_140C23B1B )
        *v20 = 0;
      PopInitializePowerPolicySimulate();
      dword_140C23A64 = dword_140C23A60;
      v21 = ((unsigned int)dword_140C23A4C >> 27) & 2;
      a1[27] = v21;
      PopAdvanceSystemPowerState(&dword_140C23A64, v21, SHIDWORD(qword_140C23A44), *v18);
      if ( (a1[2] & 8) != 0 )
      {
        byte_140C23E80 = 1;
        *((_BYTE *)a1 + 36) = 0;
        dword_140C23A68 = 5;
        a1[11] = 6;
        v22 = dword_140C23A60;
      }
      else
      {
        if ( PopFastS4Check() )
        {
          a1[11] = dword_140C23A60;
          v23 = 6;
          dword_140C23A68 = 5;
          *((_BYTE *)a1 + 36) = 1;
          goto LABEL_64;
        }
        dword_140C23A68 = dword_140C23A60;
        a1[11] = dword_140C23A60;
        v22 = dword_140C23A60;
        *((_BYTE *)a1 + 36) = 0;
      }
      v23 = PopPowerStateHandlerLookup[v22];
LABEL_64:
      a1[17] = v23;
      if ( v23 <= 6 && qword_140C23108[3 * (int)v23] )
      {
        if ( (a1[2] & 8) != 0 )
        {
          v24 = 6;
LABEL_70:
          PopSetSleepMarker(v24);
          goto LABEL_72;
        }
        if ( !byte_140C23A42 )
        {
          v24 = dword_140C23A60;
          goto LABEL_70;
        }
        PopSetShutdownMarker();
LABEL_72:
        PopAcquirePolicyLock();
        if ( (PopAction & 6) != 0 )
        {
          *((_BYTE *)a1 + 64) = 1;
          goto LABEL_40;
        }
        PopReleasePolicyLock();
        PopCheckpointSystemSleep(10LL);
        byte_140C23A5C = 3;
        PopDiagTraceKernelQueriesAllowed(*v16);
        if ( *v16 )
        {
          v25 = PopSetDevicesSystemState();
          a1[26] = v25;
          if ( v25 >= 0 )
          {
            *((_BYTE *)a1 + 112) = 1;
          }
          else if ( v25 != -1073741536 )
          {
            goto LABEL_77;
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
                       (unsigned int)qword_140C23A44,
                       dword_140C23A60,
                       dword_140C23A68,
                       a1[2],
                       1);
            PopTransitionCheckpoint(9LL, 0LL);
            if ( !byte_140C23A42 )
            {
              PopDiagTracePreSleepNotification(a1[11], dword_140C23A68, dword_140C23A54, dword_140C23A58, a1[29]);
              PopCheckpointSystemSleep(16LL);
              PopUmpoSendFlushSleepStudyLoggerNotification();
            }
            PopEsEnterSleepShutdown();
            PopThermalSxEntry();
            if ( !*((_BYTE *)a1 + 24) )
            {
              if ( byte_140C23A42 )
              {
                v74 = 1;
                v68 = 5;
                v70 = 1;
                v69 = &v74;
                v71 = 11;
                v72 = 0xFFFFF780000002C4uLL;
                v73 = 4;
                RtlSetSystemBootStatusEx((__int64)&v68, 2u, 0LL);
              }
              *((_BYTE *)a1 + 24) = 1;
            }
            v28 = 5LL;
            if ( !*((_BYTE *)a1 + 36) )
              v28 = (unsigned int)dword_140C23A60;
            PopFlushVolumes(v28);
            if ( dword_140C23A68 < dword_140C23A60 )
              dword_140C23A68 = dword_140C23A60;
            byte_140C23A5C = 2;
            if ( byte_140C23A42 )
            {
              PopFxPrepareDevicesForShutdown();
              IoFreePoDeviceNotifyList(*(_QWORD *)&qword_140C23A78 + 48LL);
              if ( dword_140C23A54 == 2 )
                PopCriticalShutdownInProgress = 1;
              PopTransitionCheckpoint(8LL, 2LL);
              if ( PsGetCurrentProcess() == PsInitialSystemProcess )
                PopGracefulShutdown(0LL);
              PopShutdownWorkItem.Parameter = 0LL;
              PopShutdownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopGracefulShutdown;
              PopShutdownWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopShutdownWorkItem, CriticalWorkQueue);
              KeSuspendThread((__int64)KeGetCurrentThread(), v56, v57, v58);
              return -1073741077;
            }
            v29 = a1[17];
            KeMtrrComparisonFailed = 0;
            inited = PopInitSystemSleeperThread(v29, (struct _KEVENT *)a1 + 11);
            a1[26] = inited;
            if ( inited >= 0 )
            {
              if ( !byte_140C23AF0 )
              {
                ExWakeTimersPause();
                byte_140C23AF0 = 1;
              }
              *((_QWORD *)a1 + 24) = MEMORY[0xFFFFF78000000008];
              v31 = MEMORY[0xFFFFF78000000014];
              v32 = PopWakeAlarmTimeOverride;
              *((_QWORD *)a1 + 25) = MEMORY[0xFFFFF78000000014];
              *((_QWORD *)a1 + 28) = 0LL;
              if ( v32 )
              {
                *((_QWORD *)a1 + 27) = v32;
                *((_QWORD *)a1 + 28) = -3LL;
              }
              else if ( !*((_DWORD *)PopPolicy + 22)
                     || dword_140C23A60 == 5
                     || !PopIsDozeSupported((__int64)&PopCapabilities)
                     || (dword_140C23A4C & 0x40000000) != 0 )
              {
                if ( byte_140C233F4
                  && dword_140C23A60 == 5
                  && !byte_140C23E80
                  && qword_140C23988
                  && dword_140C23A54 == 11 )
                {
                  v36 = qword_140C23988 - v31;
                  *((_QWORD *)a1 + 44) = qword_140C23988 - v31;
                  v37 = -10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
                  *((_QWORD *)a1 + 28) = -2LL;
                  v38 = v37 + v36;
                  v39 = *((_QWORD *)a1 + 24);
                  *((_QWORD *)a1 + 44) = v38;
                  *((_QWORD *)a1 + 27) = v38 + v39;
                }
              }
              else
              {
                v34 = *((_QWORD *)a1 + 24);
                *((_QWORD *)a1 + 27) = v34;
                v35 = *(unsigned int *)(v33 + 88);
                *((_QWORD *)a1 + 28) = -1LL;
                *((_QWORD *)a1 + 27) = v34 + 10000000 * v35;
                if ( !qword_140C23B00 )
                  qword_140C23B00 = v34;
              }
              v40 = &qword_140C23AA8;
              memset(&qword_140C23AA8, 0, 0x48uLL);
              dword_140C23AA0 = 3;
              if ( *((_QWORD *)a1 + 28) == -3LL )
              {
                do
                {
                  v40[2] = *((_QWORD *)a1 + 28);
                  *v40 = *((_QWORD *)a1 + 27);
                  v40 += 3;
                }
                while ( (__int64)v40 < (__int64)&unk_140C23AD8 );
              }
              else if ( !byte_140C23E80 && dword_140C23A54 != 14 )
              {
                v42 = a1 + 94;
                v43 = a1 + 95;
                if ( dword_140C23A60 == 5 && *v42 != 1 && *v43 != 1 )
                {
                  PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, v2, v4);
                  if ( *v2 || *v4 )
                  {
                    v42 = a1 + 94;
                    *v43 = 0;
                    a1[94] = 0;
                  }
                  else
                  {
                    v42 = a1 + 94;
                  }
                }
                if ( *((_QWORD *)a1 + 27) )
                {
                  if ( *((_QWORD *)a1 + 28) == -2LL )
                  {
                    if ( *v42 )
                    {
                      qword_140C23AA8 = *((_QWORD *)a1 + 27);
                      qword_140C23AB8[0] = *((_QWORD *)a1 + 28);
                    }
                    if ( *v43 )
                    {
                      qword_140C23AC0 = *((_QWORD *)a1 + 27);
                      qword_140C23AD0 = *((_QWORD *)a1 + 28);
                    }
                  }
                  else
                  {
                    do
                    {
                      *v40 = *((_QWORD *)a1 + 27);
                      v40 += 3;
                    }
                    while ( (__int64)v40 < (__int64)&unk_140C23AD8 );
                    v44 = qword_140C23AB8;
                    do
                    {
                      *v44 = *((_QWORD *)a1 + 28);
                      v44 += 3;
                    }
                    while ( (__int64)v44 < (__int64)&qword_140C23AE8 );
                  }
                }
                v45 = qword_140C23AF8;
                *((_QWORD *)a1 + 10) = qword_140C23AF8;
                if ( v45 )
                {
                  if ( v45 < *((_QWORD *)a1 + 24) + 20000000LL )
                    v45 = *((_QWORD *)a1 + 24) + 20000000LL;
                  *((_QWORD *)a1 + 10) = v45;
                }
                if ( *v42 )
                {
                  if ( *v42 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
                    LOBYTE(v41) = 0;
                  *((_BYTE *)a1 + 209) = v41;
                  v46 = (__int64 *)(a1 + 14);
                  v47 = (__int64 *)(a1 + 60);
                  NextWakeTime = ExGetNextWakeTime(
                                   (unsigned int)*((_QWORD *)a1 + 10) + 1,
                                   *((_QWORD *)a1 + 27),
                                   v41,
                                   (int)a1 + 56,
                                   (__int64)(a1 + 60));
                  *((_BYTE *)a1 + 384) = NextWakeTime;
                  if ( NextWakeTime )
                  {
                    qword_140C23AA8 = *v46;
                    qword_140C23AB8[0] = *v47;
                  }
                }
                else
                {
                  v46 = (__int64 *)(a1 + 14);
                  v47 = (__int64 *)(a1 + 60);
                }
                if ( *v43 )
                {
                  if ( *v43 != 2 || (LOBYTE(v41) = 1, PopSimulate < 0) )
                    LOBYTE(v41) = 0;
                  *((_BYTE *)a1 + 209) = v41;
                  v49 = ExGetNextWakeTime(
                          (unsigned int)*((_QWORD *)a1 + 10) + 1,
                          *((_QWORD *)a1 + 27),
                          v41,
                          (_DWORD)v46,
                          (__int64)v47);
                  *((_BYTE *)a1 + 384) = v49;
                  if ( v49 )
                  {
                    qword_140C23AC0 = *v46;
                    qword_140C23AD0 = *v47;
                  }
                }
              }
              qword_140C23AB0[0] = qword_140C23AA8;
              if ( qword_140C23AA8 && qword_140C23AA8 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[97] )
                qword_140C23AB0[0] = *((_QWORD *)a1 + 24) + a1[97];
              qword_140C23AC8 = qword_140C23AC0;
              if ( qword_140C23AC0 && qword_140C23AC0 < *((_QWORD *)a1 + 24) + (unsigned __int64)a1[97] )
                qword_140C23AC8 = *((_QWORD *)a1 + 24) + a1[97];
              v50 = qword_140C23AB8[0];
              if ( (unsigned __int64)(qword_140C23AB8[0] - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v50 = *(int *)(qword_140C23AB8[0] + 8);
              *((_QWORD *)a1 + 45) = v50;
              v51 = qword_140C23AD0;
              if ( (unsigned __int64)(qword_140C23AD0 - 1) <= 0xFFFFFFFFFFFFFFFBuLL )
                v51 = *(int *)(qword_140C23AD0 + 8);
              *((_QWORD *)a1 + 46) = v51;
              qword_140C23F30 = KeQueryPerformanceCounter(0LL).QuadPart;
              ExAcquireTimeRefreshLock(1u);
              ExUpdateSystemTimeFromCmos(1, 1u);
              ExReleaseTimeRefreshLock();
              ((void (__fastcall *)(__int64, __int64))off_140C005C0)(qword_140C23AB0[0], qword_140C23AC8);
              PopBootStatCheckpointAvailable = 0;
              PpmCheckPausePpmEngineForSx();
              PopSetDevicesSystemState();
              *((_BYTE *)a1 + 112) = 1;
              PopNewWakeInfo();
              *((_QWORD *)a1 + 43) = MEMORY[0xFFFFF78000000008];
              a1[37] = dword_140C2334C;
              KeSetEvent((PRKEVENT)a1 + 12, 0, 1u);
              KeWaitForSingleObject(a1 + 78, Executive, 0, 0, 0LL);
              BugCheckParameter4 = 0LL;
              a1[26] = a1[85];
              PopSetPowerActionWatchdogState(2u);
              v52 = dword_140C23A60;
              if ( PoResumeFromHibernate )
                v52 = dword_140C23A68;
              dword_140C23A6C = v52;
              if ( (a1[2] & 8) != 0 )
              {
                a1[11] = 6;
              }
              else
              {
                a1[11] = dword_140C23A60;
                v75 = dword_140C23A60;
              }
              v53 = dword_140C23A6C;
              v54 = v75;
              CheckStamp = *((_QWORD *)a1 + 46);
              v55 = *((_QWORD *)a1 + 45);
              a1[10] = dword_140C23A6C;
              PopDiagTracePostSleepNotification(
                v54,
                dword_140C23A68,
                v53,
                qword_140C23AB0[0],
                qword_140C23AC8,
                v55,
                CheckStamp);
              if ( KeMtrrComparisonFailed )
                PopDiagTraceMtrrError();
              if ( (a1[26] & 0x80000000) != 0 && dword_140C23A60 == 5 )
              {
                DestinationString = 0LL;
                StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
                RtlInitUnicodeString(&DestinationString, PopHibernationErrorSubstitutionString);
                IoRaiseInformationalHardError(-1073740783, &DestinationString, 0LL);
                PopDiagTraceHibernateErrorStatus(a1[26]);
              }
LABEL_174:
              if ( byte_140C23E80 )
              {
                qword_140C24120 = KeQueryPerformanceCounter(0LL).QuadPart;
                dword_140C23E64 = PopQpcTimeInMs(&qword_140C24118, &qword_140C24120);
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                qword_140C23A90 = *((_QWORD *)a1 + 43);
                ExUpdateSystemTimeFromCmos(1, 1u);
                LOBYTE(v59) = 1;
                if ( ((unsigned __int8 (__fastcall *)(__int64))off_140C00948[0])(v59) )
                  *((_BYTE *)a1 + 208) = 1;
                qword_140C23F48 = KeQueryPerformanceCounter(0LL).QuadPart;
                PfPowerActionNotify(2, 0LL, 0);
                qword_140C23A88 = MEMORY[0xFFFFF78000000008];
                PopDiagComputeEarlyHiberStats();
                if ( a1[10] == 4 )
                  PopDiagTraceFirmwareS3Stats();
              }
              byte_140C23A5D = 1;
              PoPowerDownActionInProgress = 0;
              PoPowerResetActionInProgress = 0;
              PsIumResumeAfterHibernate();
              if ( *((_BYTE *)a1 + 112) )
              {
                PfPowerActionNotify(3, 0LL, 0);
                PopSetDevicesSystemState();
                PfPowerActionNotify(3, 1LL, 0);
              }
              PpmCheckResumePpmEngineFromSx();
              if ( *((_BYTE *)a1 + 208) )
                ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
              if ( !PopSleepReliabilityDetailedDiagEnabled )
                RtlBootStatusDisableFlushing(1);
              PopBootStatCheckpointAvailable = 1;
              PopCheckpointSystemSleep(56LL);
              v60 = *((_QWORD *)a1 + 30);
              if ( v60 )
              {
                ExFreePoolEx(v60);
                *((_QWORD *)a1 + 30) = 0LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD))off_140C005C0)(0LL, 0LL);
              a1[29] = PopNotifyTelemetryOsState(
                         (unsigned int)qword_140C23A44,
                         dword_140C23A60,
                         dword_140C23A68,
                         a1[2],
                         0);
              PopQueueBatteryStatusTimeout();
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
              PoClearBroadcast();
              *(_QWORD *)&qword_140C23A78 = 0LL;
              PopEsExitSleep();
              PopCurrentPowerStatePrecise(a1 + 39, 0LL);
              a1[38] = dword_140C2334C;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
              PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
              ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
              PopThermalSxExit(v62, v61);
              if ( !*((_BYTE *)a1 + 64) )
              {
                PopAcquirePolicyLock();
                *((_BYTE *)a1 + 64) = 1;
              }
              if ( (a1[26] & 0x80000000) == 0 )
              {
                PopInitSIdle(1u);
                LOBYTE(PopAction) = 0;
                if ( (unsigned __int64)dword_140C23AA0 < 3 )
                {
                  qword_140C23AF8 = qword_140C23AB0[3 * dword_140C23AA0];
                  v63 = qword_140C23AB8[3 * dword_140C23AA0];
                  PopFullWake = 0;
                  PopPendingUserPresenceDuringSystemSleep = 0;
                  PopPendingUserPresenceMonitorOnReason = 0;
                  switch ( v63 )
                  {
                    case -1LL:
                      if ( PopDeferDoze(a1[94], a1[95], (_BYTE *)a1 + 156) )
                        qword_140C23A44 = *(_QWORD *)a1;
                      else
                        qword_140C23A44 = 0x500000002LL;
                      LOBYTE(PopAction) = PopAction | 2;
LABEL_208:
                      *((_BYTE *)a1 + 256) = 0;
                      break;
                    case -2LL:
                      if ( !qword_140C23A98 )
                        qword_140C23A98 = qword_140C23A88;
                      break;
                    case -3LL:
                      PopWakeAlarmTimeOverride = 0LL;
                      break;
                    default:
                      v64 = a1 + 95;
                      if ( dword_140C2334C == 1 )
                      {
                        if ( !*v64 )
                        {
                          qword_140C23A44 = *(_QWORD *)a1;
                          LOBYTE(PopAction) = 2;
                          goto LABEL_208;
                        }
                      }
                      else if ( !*v64 && a1[37] == a1[38] )
                      {
                        PopCheckPowerSourceAfterRtcWakeSet();
                      }
                      break;
                  }
                }
              }
              if ( byte_140C23AF0 && *((_BYTE *)a1 + 256) )
              {
                ExWakeTimersResume();
                byte_140C23AF0 = 0;
                qword_140C23AF8 = 0LL;
              }
              if ( PoResumeFromHibernate )
              {
                PopBootLoaderTraceProcess();
                PoResumeFromHibernate = 0;
              }
              byte_140C23E80 = 0;
              PopResetActionDefaults();
              PopSetPowerActionState(2);
              PopReleasePolicyLock();
              if ( PopPendingUserPresenceDuringSystemSleep )
                PoSetUserPresent((unsigned int)PopPendingUserPresenceMonitorOnReason, v65);
              ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
              PopCheckForWork();
              if ( (a1[26] & 0x80000000) == 0 )
                PpmPerfReApplyStates();
              dword_140C23A54 = 16;
              qword_140C240B0 = PopCaptureTimeOnProcZero();
              return a1[26];
            }
          }
        }
      }
      else
      {
LABEL_77:
        NextSystemPowerState = PopFindNextSystemPowerState(*v18, *((_BYTE *)a1 + 36), (_BYTE *)a1 + 88);
        *((_BYTE *)a1 + 48) = NextSystemPowerState;
        if ( !NextSystemPowerState )
          goto LABEL_174;
        a1[26] = 0;
      }
    }
  }
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  return a1[26];
}
