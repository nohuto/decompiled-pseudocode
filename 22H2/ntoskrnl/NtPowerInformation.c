/*
 * XREFs of NtPowerInformation @ 0x140784430
 * Callers:
 *     WheaLogInternalEvent @ 0x1403810A0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405A23C4 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405A25C4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A2968 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140782BCC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140784394 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140867DA8 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096ED9C (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A32F8 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A339C (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1409A33FC (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A3480 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14022BF00 (RtlStringCbLengthW.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PopPrintEx @ 0x14032A4CC (PopPrintEx.c)
 *     PopPowerRequestReferenceRelease @ 0x14032B248 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032B648 (PopPowerRequestReferenceAcquire.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     ExNotifyCallback @ 0x14033BD40 (ExNotifyCallback.c)
 *     KeQueryActiveGroupCount @ 0x140361E20 (KeQueryActiveGroupCount.c)
 *     PopDisksRegisteredForIdle @ 0x14036A9DC (PopDisksRegisteredForIdle.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     PsGetProcessSessionIdEx @ 0x14036F3B0 (PsGetProcessSessionIdEx.c)
 *     ExVerifySuite @ 0x1403735F0 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403ABBD4 (PpmHeteroHgsBackupInit.c)
 *     PopEventCalloutDispatch @ 0x1403B5F0C (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1403D6130 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140584094 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x1405840DC (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140585C1C (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x140585CFC (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x1405871E8 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058A85C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PopShutdownListenerInsertCallback @ 0x140598930 (PopShutdownListenerInsertCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140599558 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14059D31C (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x14060B698 (ExGetWakeTimerList.c)
 *     PopFreeSessionState @ 0x140682954 (PopFreeSessionState.c)
 *     PopSessionWinlogonNotification @ 0x140682D5C (PopSessionWinlogonNotification.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PopBlackBoxUpdate @ 0x140785850 (PopBlackBoxUpdate.c)
 *     PopProcessorInformation @ 0x1407A5E74 (PopProcessorInformation.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A60F0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestActionInfo @ 0x1407A61D4 (PopPowerRequestActionInfo.c)
 *     TtmIsEnabled @ 0x1407A65A0 (TtmIsEnabled.c)
 *     PopCurrentPowerState @ 0x1407A7258 (PopCurrentPowerState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopMonitorInvocation @ 0x1407A94DC (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A9788 (PopProcessSessionDisplayStateChange.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B897C (PopEtEnergyTrackerQuery.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     ExCheckFullProcessInformationAccess @ 0x1407E0FE8 (ExCheckFullProcessInformationAccess.c)
 *     PopCapturePlatformRole @ 0x1407E62B4 (PopCapturePlatformRole.c)
 *     PopDiagTraceSessionStates @ 0x1407EBDDC (PopDiagTraceSessionStates.c)
 *     PopSessionConnectionChange @ 0x1407EBF04 (PopSessionConnectionChange.c)
 *     PopIsRunningAsLocalSystem @ 0x1407EBFB8 (PopIsRunningAsLocalSystem.c)
 *     PopGetSettingValue @ 0x1407EC720 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140804218 (PopHibernateEvaluation.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x140825404 (PopVerifySystemPowerPolicy.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     PopPdcInvocation @ 0x14085A91C (PopPdcInvocation.c)
 *     PopCurrentPowerStatePrecise @ 0x140873C98 (PopCurrentPowerStatePrecise.c)
 *     PopUpdateConsoleDisplayState @ 0x140873D64 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14087404C (PopLogSleepDisabled.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopSetDisplayStatus @ 0x140885638 (PopSetDisplayStatus.c)
 *     PopLoggingInformation @ 0x140980E94 (PopLoggingInformation.c)
 *     PopReadHiberbootPolicy @ 0x1409810AC (PopReadHiberbootPolicy.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981800 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopApplyAdminPolicy @ 0x140984228 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x140984300 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1409868A0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140986C54 (PpmSetSimulatedLoad.c)
 *     PopGetWakeSource @ 0x140987418 (PopGetWakeSource.c)
 *     PopSetHiberFileSize @ 0x140989134 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1409891D8 (PopSetHiberFileType.c)
 *     PopSetHiberPersistedRegValue @ 0x140989288 (PopSetHiberPersistedRegValue.c)
 *     PopSendSuspendResumeNotifications @ 0x14098A6F8 (PopSendSuspendResumeNotifications.c)
 *     PopThermalProcessUsermodeEvent @ 0x14098AE78 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x14098C864 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x14098C984 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x14098E934 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceServiceNotification @ 0x14099151C (PopDiagTraceServiceNotification.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140993C60 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PopBatteryDeviceState @ 0x14099517C (PopBatteryDeviceState.c)
 *     PopBlackBoxDirectAccess @ 0x140997028 (PopBlackBoxDirectAccess.c)
 *     PopUmpoSendLegacyEvent @ 0x140997950 (PopUmpoSendLegacyEvent.c)
 *     PopPdcCsDeviceNotification @ 0x140997F1C (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x1409982E4 (PopScreenOff.c)
 *     PpmParkApplyForcedMask @ 0x140999F04 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14099A004 (PpmParkClearForcedMask.c)
 *     PopUserPresentOverride @ 0x14099BC00 (PopUserPresentOverride.c)
 *     TtmCleanupCurrentSession @ 0x1409A3F40 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A4050 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A43D4 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1409A603C (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     PopInitPlatformSettings @ 0x140B522C0 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *Pool2; // r15
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r15
  ULONG v14; // ebx
  char *v15; // r12
  volatile void *v16; // r13
  unsigned __int64 v17; // rax
  int v18; // r14d
  int v19; // r14d
  ULONG v20; // r14d
  int v21; // eax
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // ebx
  bool v23; // sf
  PVOID v24; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  LUID v35; // rcx
  int v36; // r14d
  int v37; // r14d
  NTSTATUS SettingValue; // eax
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  int v43; // r14d
  int v44; // eax
  int v45; // esi
  int v46; // eax
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  int v52; // r14d
  int v53; // r14d
  int v54; // r14d
  int v55; // r14d
  char IsDevicePotentialDripsConstraint; // al
  HANDLE *v57; // rax
  __int64 v58; // rcx
  int v59; // eax
  bool v60; // sf
  _DWORD *v61; // rax
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  __int64 *v65; // rax
  int v66; // r14d
  int v67; // r14d
  int v68; // r14d
  USHORT v69; // bx
  int v70; // eax
  _BYTE *v71; // rcx
  int v72; // r9d
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // ebx
  char v78; // al
  int v79; // ecx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // r14d
  unsigned int v85; // eax
  __int64 v86; // rcx
  bool v87; // zf
  int v88; // r14d
  int v89; // r14d
  int v90; // r14d
  unsigned int v91; // eax
  int v92; // ebx
  HANDLE *v93; // rax
  int v94; // ecx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  bool v98; // sf
  __int128 *v99; // rax
  int v100; // r14d
  int v101; // r14d
  int v102; // r14d
  int v103; // r14d
  unsigned int *v104; // r14
  int v105; // ecx
  unsigned int v106; // eax
  unsigned int v107; // ecx
  unsigned int ProcessSessionId; // eax
  int v109; // r14d
  int v110; // r14d
  int v111; // r14d
  int v112; // r14d
  __int64 v113; // rax
  _DWORD *v114; // rbx
  void *v115; // rax
  NTSTATUS WakeSource; // eax
  int v117; // r14d
  int v118; // r14d
  _QWORD *v119; // rdx
  int v120; // eax
  int WakeTimerList; // eax
  int v122; // r14d
  int v123; // r14d
  int v124; // r14d
  int v125; // r14d
  int v126; // ecx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rcx
  int v131; // ecx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  int v135; // r14d
  __int64 v136; // rcx
  __int64 v137; // rcx
  int v138; // r14d
  int v139; // r14d
  char v140; // r14
  __int64 v141; // rcx
  unsigned int v142; // eax
  bool v143; // bl
  int v144; // r14d
  unsigned int v145; // edx
  _DWORD *v146; // rcx
  int v147; // r14d
  ULONG Length; // [rsp+50h] [rbp-6E8h]
  unsigned int Length_4; // [rsp+54h] [rbp-6E4h] BYREF
  char v150; // [rsp+58h] [rbp-6E0h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+59h] [rbp-6DFh]
  void *Src; // [rsp+60h] [rbp-6D8h] BYREF
  char v153; // [rsp+68h] [rbp-6D0h]
  char v154; // [rsp+69h] [rbp-6CFh]
  _BYTE *v155; // [rsp+70h] [rbp-6C8h]
  int v156; // [rsp+78h] [rbp-6C0h]
  BOOL v157; // [rsp+7Ch] [rbp-6BCh] BYREF
  _DWORD Size[3]; // [rsp+84h] [rbp-6B4h] BYREF
  int *v159; // [rsp+90h] [rbp-6A8h]
  PVOID P[3]; // [rsp+98h] [rbp-6A0h] BYREF
  HANDLE v161[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v162[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v159 = (int *)OutputBuffer;
  v8 = InformationLevel;
  v154 = 0;
  memset(v161, 0, sizeof(v161));
  v157 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  v155 = 0LL;
  P[0] = 0LL;
  LOBYTE(v12) = 0;
  v153 = 0;
  v150 = 0;
  if ( (unsigned int)v8 > 0x61 )
    goto LABEL_626;
  v13 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v13;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  Size[0] = v14;
  v15 = (char *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  P[1] = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (volatile void *)((unsigned __int64)v159 & -(__int64)(Length != 0));
  if ( v13 )
  {
    if ( (unsigned int)v8 <= 0x22 && (v12 = 0x7C30200C0LL, _bittest64(&v12, v8))
      || (v26 = (unsigned int)(v8 - 39), (unsigned int)v26 <= 0x3A)
      && (v12 = 0x4104F0071C2E50FLL, _bittest64(&v12, v26)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = v15;
      Pool2 = v155;
      goto LABEL_22;
    }
    v27 = (unsigned int)(v8 - 37);
    if ( (unsigned int)v27 <= 0x3A && (v12 = 0x608801808940903LL, _bittest64(&v12, v27)) || (unsigned int)(v8 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v156 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v155;
        goto LABEL_22;
      }
    }
    if ( (unsigned int)(v8 - 92) <= 1 )
    {
      LOBYTE(v12) = v13;
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v12);
      v156 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v155;
        goto LABEL_22;
      }
    }
    v28 = (unsigned int)(v8 - 28);
    if ( (unsigned int)v28 <= 0x32 )
    {
      v12 = 0x4000000420001LL;
      if ( _bittest64(&v12, v28) )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v156 = -1073741790;
          InputBuffer = v15;
          Pool2 = v155;
          goto LABEL_22;
        }
      }
    }
    if ( (_DWORD)v8 == 71 && !(unsigned __int8)PopIsRunningAsLocalSystem() )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v156 = -1073741790;
      InputBuffer = v15;
      Pool2 = v155;
      goto LABEL_22;
    }
    if ( v15 )
    {
      v29 = (unsigned int)(v8 - 11);
      if ( (unsigned int)v29 > 0x3D || (v30 = 0x2001800900000001LL, !_bittest64(&v30, v29)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v156 = -1073741637;
          InputBuffer = v15;
          Pool2 = v155;
          goto LABEL_22;
        }
      }
      v31 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v31 <= 0x39 && (v32 = 0x218000004422401LL, _bittest64(&v32, v31)) || (_DWORD)v8 == 9 )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v156 = -1073741790;
          InputBuffer = v15;
          Pool2 = v155;
          goto LABEL_22;
        }
      }
      v33 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v33 > 0x3B || (v34 = 0xFAE005C28F40BC3LL, !_bittest64(&v34, v33)) )
      {
        if ( (unsigned int)(v8 - 2) > 1 && (_DWORD)v8 != 11 )
        {
          v35 = SeShutdownPrivilege;
          if ( (_DWORD)v8 == 10 )
            v35 = SeCreatePagefilePrivilege;
          v159 = (int *)v35;
          if ( !SeSinglePrivilegeCheck(v35, v13) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v156 = -1073741727;
            InputBuffer = v15;
            Pool2 = v155;
            goto LABEL_22;
          }
        }
      }
      v14 = Size[0];
      if ( Size[0] && ((unsigned __int64)&v15[Size[0]] > 0x7FFFFFFF0000LL || &v15[Size[0]] < v15) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( Size[0] > 0x40u )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, Size[0], 544040269LL);
        v155 = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v156 = -1073741670;
          InputBuffer = v15;
          goto LABEL_22;
        }
      }
      else
      {
        Pool2 = v162;
        v155 = v162;
      }
      memmove(Pool2, v15, Size[0]);
    }
    else
    {
      Pool2 = v155;
      v14 = Size[0];
    }
    if ( v16 )
      ProbeForWrite(v16, Length, 1u);
    LOBYTE(v12) = v153;
  }
  else
  {
    Pool2 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    v155 = Pool2;
  }
  v17 = (unsigned int)(v8 - 38);
  if ( (unsigned int)v17 > 0x3B || (v9 = 0xFFFE3BE75BE26EDLL, !_bittest64(&v9, v17)) )
  {
    if ( (unsigned int)v8 > 0x1F || (v44 = -234812256, !_bittest(&v44, v8)) )
    {
      PopAcquirePolicyLock(v12);
      LOBYTE(v12) = 1;
      v153 = 1;
    }
  }
  if ( (int)v8 <= 50 )
  {
    if ( (_DWORD)v8 == 50 )
    {
      if ( Pool2 || !v16 )
        goto LABEL_307;
      WakeTimerList = ExGetWakeTimerList(&Src, &Length_4);
    }
    else
    {
      if ( (int)v8 <= 24 )
      {
        if ( (_DWORD)v8 != 24 )
        {
          if ( (int)v8 > 12 )
          {
            if ( (int)v8 > 18 )
            {
              v100 = v8 - 19;
              if ( v100 )
              {
                v101 = v100 - 1;
                if ( v101 )
                {
                  v102 = v101 - 1;
                  if ( v102 )
                  {
                    v103 = v102 - 1;
                    if ( v103 )
                    {
                      if ( v103 == 1 && !Pool2 && v16 )
                      {
                        IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v157);
                        InputBuffer = v15;
                        if ( IsAppContainerOrIdentifyLevelContext < 0 )
                          goto LABEL_22;
                        Src = P[0];
                        Length_4 = v157;
                        goto LABEL_123;
                      }
                      goto LABEL_307;
                    }
                  }
                }
              }
            }
            else if ( (_DWORD)v8 != 18 )
            {
              v47 = v8 - 13;
              if ( v47 )
              {
                v48 = v47 - 1;
                if ( !v48 )
                {
                  if ( Pool2 || !v16 )
                    goto LABEL_307;
                  v65 = &qword_140C3CE68;
                  goto LABEL_238;
                }
                v49 = v48 - 1;
                if ( !v49 )
                {
                  if ( Pool2 || !v16 )
                    goto LABEL_307;
                  v65 = &qword_140C3CE70;
                  goto LABEL_238;
                }
                v50 = v49 - 1;
                if ( v50 )
                {
                  if ( v50 == 1 && Pool2 && !v16 )
                  {
                    if ( v14 < 0x10 )
                      goto LABEL_358;
                    if ( !(_QWORD)PopPowerStateNotifyHandler || !*Pool2 )
                    {
                      PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                      goto LABEL_123;
                    }
                  }
                  goto LABEL_307;
                }
                if ( Pool2 || !v16 )
                  goto LABEL_307;
                if ( dword_140C035B8 )
                  LODWORD(v161[0]) |= 1u;
                if ( dword_140C03588 )
                  LODWORD(v161[0]) |= 2u;
LABEL_122:
                Src = v161;
                Length_4 = 4;
                goto LABEL_123;
              }
            }
            goto LABEL_564;
          }
          if ( (_DWORD)v8 == 12 )
          {
            if ( Pool2 || !v16 )
              goto LABEL_307;
            HIDWORD(v161[0]) = dword_140C3CD44;
            LODWORD(v161[1]) = dword_140C3CD4C - dword_140C3CD48;
            BYTE4(v161[1]) = PopCoolingMode;
            Src = v161;
            Length_4 = 16;
            goto LABEL_123;
          }
          if ( (_DWORD)v8 != 6 )
          {
            if ( (int)v8 <= 6 )
            {
              if ( (_DWORD)v8 && (v39 = v8 - 1) != 0 )
              {
                v40 = v39 - 1;
                if ( v40 )
                {
                  v41 = v40 - 1;
                  if ( v41 )
                  {
                    v42 = v41 - 1;
                    if ( !v42 )
                    {
                      if ( Pool2 )
                      {
                        if ( (PopSimulate & 1) == 0 )
                          goto LABEL_307;
                        if ( v14 < 0x4C )
                          goto LABEL_358;
                        PopCapabilities = *(_OWORD *)Pool2;
                        unk_140C3DAD0 = *((_OWORD *)Pool2 + 1);
                        xmmword_140C3DAE0 = *((_OWORD *)Pool2 + 2);
                        xmmword_140C3DAF0 = *((_OWORD *)Pool2 + 3);
                        qword_140C3DB00 = Pool2[8];
                        dword_140C3DB08 = *((_DWORD *)Pool2 + 18);
                        IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
                        InputBuffer = v15;
                        if ( IsAppContainerOrIdentifyLevelContext < 0 )
                          goto LABEL_22;
                      }
                      else if ( !v16 )
                      {
                        goto LABEL_307;
                      }
                      BYTE9(PopCapabilities) = PopFullWake & 1;
                      byte_140C3DAD5 = PopDisksRegisteredForIdle();
                      PopFilterCapabilities(&PopCapabilities, v161);
                      Src = v161;
                      Length_4 = 76;
                      goto LABEL_173;
                    }
                    if ( v42 != 1 || Pool2 || !v16 )
                      goto LABEL_307;
                    PopCurrentPowerState(v161);
                    goto LABEL_114;
                  }
                }
                if ( !Pool2 || !v16 )
                  goto LABEL_307;
                if ( v14 < 0xE8 )
                  goto LABEL_358;
                IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, v161);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
                v93 = v161;
              }
              else
              {
                if ( Pool2 )
                {
                  if ( v14 < 0xE8 )
                    goto LABEL_358;
                  IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0LL, 0LL, Pool2, v14);
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_22;
                }
                else if ( !v16 )
                {
                  goto LABEL_307;
                }
                v93 = (HANDLE *)&unk_140C3D824;
              }
LABEL_351:
              Src = v93;
              Length_4 = 232;
              goto LABEL_123;
            }
            v84 = v8 - 7;
            if ( !v84 )
            {
              if ( !Pool2 && v16 )
              {
                PpmHeteroHgsBackupInit();
                Src = &PpmProcessorDriverDispatchTable;
                Length_4 = 288;
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            v88 = v84 - 1;
            if ( !v88 )
            {
              if ( Pool2 || !v16 )
                goto LABEL_307;
              v93 = (HANDLE *)PopPolicy;
              goto LABEL_351;
            }
            v89 = v88 - 1;
            if ( !v89 )
            {
              if ( Pool2 )
              {
                if ( v14 < 0x18 )
                  goto LABEL_358;
                IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy(v12, Pool2);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
                IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
              }
              else if ( !v16 )
              {
                goto LABEL_307;
              }
              v99 = &PopAdminPolicy;
              goto LABEL_373;
            }
            v90 = v89 - 1;
            if ( !v90 )
            {
              if ( !Pool2 || v16 )
                goto LABEL_307;
              if ( !v14 )
                goto LABEL_358;
              PopAcquireTransitionLock(3LL);
              PopAcquirePolicyLock(v94);
              PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
              PopSetHiberPersistedRegValue(0LL);
              IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
              PopReleasePolicyLock(v96, v95, v97);
              PopReleaseTransitionLock(3LL);
              v98 = IsAppContainerOrIdentifyLevelContext < 0;
              goto LABEL_531;
            }
            if ( v90 != 1 || Pool2 || !v16 )
              goto LABEL_307;
            v70 = PopProcessorInformation(v161, v9, KeGetCurrentPrcb()->Group, &Length_4);
            Pool2 = v155;
LABEL_251:
            InputBuffer = v15;
            IsAppContainerOrIdentifyLevelContext = v70;
            if ( v70 < 0 )
              goto LABEL_22;
            Src = v161;
            goto LABEL_123;
          }
          if ( !Pool2 || v16 )
            goto LABEL_307;
          if ( v14 < 0x18 )
            goto LABEL_358;
          v9 = *(unsigned int *)Pool2;
          if ( (unsigned int)v9 >= 7 )
            goto LABEL_307;
          v10 = 3 * v9;
          if ( *((_QWORD *)&PopPowerStateHandlers + 3 * v9 + 1) )
          {
            if ( (_DWORD)v9 != 5
              && ((_DWORD)v9 != 4 || (void (__fastcall __noreturn *)())qword_140C3DA68 != PopShutdownHandler) )
            {
              goto LABEL_307;
            }
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v9) = *(_OWORD *)Pool2;
          *((_QWORD *)&PopPowerStateHandlers + 3 * v9 + 2) = Pool2[2];
          *(_WORD *)((char *)&PopPowerStateHandlers + 24 * v9 + 5) = 0;
          *((_BYTE *)&PopPowerStateHandlers + 24 * v9 + 7) = 0;
          v71 = 0LL;
          v72 = 0;
          if ( (_DWORD)v9 )
          {
            v73 = v9 - 1;
            if ( v73 )
            {
              v74 = v73 - 1;
              if ( v74 )
              {
                v75 = v74 - 1;
                if ( v75 )
                {
                  v76 = v75 - 1;
                  if ( !v76 )
                  {
                    v71 = (char *)&PopCapabilities + 7;
LABEL_299:
                    v9 = v72 & (unsigned int)-(*((_BYTE *)&PopPowerStateHandlers + 8 * v10 + 4) != 0);
                    if ( (int)v9 > (int)qword_140C3DB00 )
                      LODWORD(qword_140C3DB00) = *((_BYTE *)&PopPowerStateHandlers + 8 * v10 + 4) != 0 ? v72 : 0;
                    if ( v71 && *v71 != 1 )
                    {
                      *v71 = 1;
                      PopResetCurrentPolicies();
                    }
                    goto LABEL_123;
                  }
                  if ( v76 != 2 )
                    goto LABEL_299;
                  v72 = 4;
                  v87 = (PopSimulate & 0x2000) == 0;
                  v71 = &unk_140C3DAD1;
                }
                else
                {
                  v72 = 5;
                  v87 = (PopSimulate & 0x2000) == 0;
                  v71 = (char *)&PopCapabilities + 6;
                }
              }
              else
              {
                v72 = 4;
                v87 = (PopSimulate & 0x20) == 0;
                v71 = (char *)&PopCapabilities + 5;
              }
            }
            else
            {
              v72 = 3;
              v87 = (PopSimulate & 0x40) == 0;
              v71 = (char *)&PopCapabilities + 4;
            }
          }
          else
          {
            v72 = 2;
            v87 = (PopSimulate & 8) == 0;
            v71 = (char *)&PopCapabilities + 3;
          }
          if ( !v87 )
            v71 = 0LL;
          goto LABEL_299;
        }
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 < 8 )
          goto LABEL_358;
        v59 = PopLogSleepDisabled(*(unsigned int *)Pool2, *((unsigned int *)Pool2 + 1), 0LL, 0LL);
LABEL_200:
        IsAppContainerOrIdentifyLevelContext = v59;
        v60 = v59 < 0;
        goto LABEL_201;
      }
      if ( (int)v8 <= 38 )
      {
        if ( (_DWORD)v8 != 38 )
        {
          if ( (int)v8 > 32 )
          {
            v109 = v8 - 33;
            if ( !v109 )
              goto LABEL_564;
            v110 = v109 - 1;
            if ( !v110 )
              goto LABEL_564;
            v111 = v110 - 1;
            if ( v111 )
            {
              v112 = v111 - 1;
              if ( v112 )
              {
                if ( v112 != 1 || !Pool2 || v16 )
                  goto LABEL_307;
                if ( PreviousMode == 1 )
                {
                  if ( v14 >= 4 )
                  {
                    IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2 + 2, v14 - 4, 0LL);
                    if ( IsAppContainerOrIdentifyLevelContext >= 0 )
                      IsAppContainerOrIdentifyLevelContext = 0;
                  }
                  else
                  {
                    IsAppContainerOrIdentifyLevelContext = -1073741811;
                  }
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
                  {
                    PopDiagTraceServiceNotification(Pool2);
                    goto LABEL_123;
                  }
                  goto LABEL_22;
                }
                goto LABEL_425;
              }
              if ( !v16 )
                goto LABEL_307;
              if ( !(_DWORD)dword_140C3D020 || !qword_140C3D018 )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741275;
                goto LABEL_21;
              }
              Length_4 = dword_140C3D020 + 8;
              v113 = ExAllocatePool2(256LL, (unsigned int)(dword_140C3D020 + 8), 544040269LL);
              v114 = (_DWORD *)v113;
              if ( v113 )
              {
                Src = (void *)v113;
                v150 = 1;
                memmove((void *)(v113 + 8), qword_140C3D018, (unsigned int)dword_140C3D020);
                *v114 = (unsigned int)dword_140C3D020 >> 4;
                goto LABEL_123;
              }
            }
            else
            {
              if ( Pool2 || !v16 )
                goto LABEL_307;
              if ( (_BYTE)v12 )
              {
                PopReleasePolicyLock(v12, v9, v10);
                v153 = 0;
              }
              IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Length_4);
              if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
                goto LABEL_445;
              v115 = (void *)ExAllocatePool2(64LL, Length_4, 544040269LL);
              Src = v115;
              if ( v115 )
              {
                v150 = 1;
                WakeSource = PopGetWakeSource(v115, &Length_4);
                goto LABEL_443;
              }
            }
          }
          else
          {
            switch ( (_DWORD)v8 )
            {
              case 0x20:
                goto LABEL_564;
              case 0x19:
                if ( !Pool2 )
                  goto LABEL_307;
                if ( v16 )
                  goto LABEL_307;
                if ( Length )
                  goto LABEL_307;
                if ( v14 < 0x1C )
                  goto LABEL_307;
                v104 = (unsigned int *)(Pool2 + 3);
                v105 = *((_DWORD *)Pool2 + 6);
                if ( !v105 )
                  goto LABEL_307;
                v159 = (int *)Pool2 + 5;
                if ( *((_DWORD *)Pool2 + 5) > 2u )
                  goto LABEL_307;
                InputBuffer = v15;
                if ( *(_DWORD *)Pool2 != 1 )
                {
                  IsAppContainerOrIdentifyLevelContext = -1073741736;
                  goto LABEL_22;
                }
                v106 = v105 + 28;
                v107 = -1;
                if ( v106 >= 0x1C )
                  v107 = v106;
                Length_4 = v107;
                IsAppContainerOrIdentifyLevelContext = v106 < 0x1C ? 0xC0000095 : 0;
                if ( v106 < 0x1C )
                  goto LABEL_22;
                if ( Size[0] < v107 )
                  goto LABEL_307;
                ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v155;
                v59 = PopSetPowerSettingValue((const GUID *)(v155 + 4), ProcessSessionId, *v159, *v104, v155 + 28);
                goto LABEL_200;
              case 0x1C:
                if ( qword_140C6B030 )
                  qword_140C6B030(1LL);
                PopHiberBootForceMonitorOff = 1;
                SettingValue = PoPowerOffMonitor();
                goto LABEL_97;
            }
            if ( (_DWORD)v8 != 29 )
            {
              if ( (unsigned int)(v8 - 30) <= 1 && Pool2 && !v16 )
              {
                if ( v14 < 8 )
                  goto LABEL_358;
                if ( (_DWORD)v8 == 30 )
                  PopDiagTraceAppPowerMessage(Pool2);
                else
                  PopDiagTraceAppPowerMessageEnd(Pool2);
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            if ( Pool2 || !v16 )
              goto LABEL_307;
            Length_4 = 4;
            v61 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            Src = v61;
            if ( v61 )
            {
              v150 = 1;
              *v61 = PopConsoleDisplayState;
              goto LABEL_123;
            }
          }
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          goto LABEL_21;
        }
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 == 8 )
        {
          WakeSource = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
        }
        else
        {
          if ( v14 != 4 )
            goto LABEL_444;
          WakeSource = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
        }
LABEL_443:
        IsAppContainerOrIdentifyLevelContext = WakeSource;
LABEL_445:
        v60 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_201:
        InputBuffer = v15;
        if ( v60 )
          goto LABEL_22;
LABEL_123:
        v20 = Length;
        goto LABEL_19;
      }
      if ( (_DWORD)v8 == 44 )
      {
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 != 24 )
          goto LABEL_358;
        v59 = PopPowerRequestActionInfo(Pool2);
        goto LABEL_200;
      }
      if ( (int)v8 <= 44 )
      {
        switch ( (_DWORD)v8 )
        {
          case '\'':
            if ( Pool2 && !v16 && v14 == 24 )
            {
              PopShutdownListenerInsertCallback(Pool2);
              goto LABEL_123;
            }
            goto LABEL_307;
          case '(':
            if ( Pool2 && v14 == 4 && !v16 )
            {
              v157 = *(_DWORD *)Pool2 != 0;
              PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v157);
              goto LABEL_123;
            }
            goto LABEL_307;
          case ')':
            if ( Pool2 )
              goto LABEL_307;
            if ( !v16 )
              goto LABEL_307;
            v20 = Length;
            if ( Length != 64 )
              goto LABEL_307;
            PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
            v77 = PopEsState;
            PopReleaseRwLock(&PopEsLock);
            v78 = (char)v161[6];
            if ( v77 == 1 )
              v78 = 1;
            LOBYTE(v161[6]) = v78;
            LOBYTE(v161[7]) = TtmIsEnabled();
            if ( (unsigned __int8)TtmIsEnabled() )
            {
              IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
              v156 = IsAppContainerOrIdentifyLevelContext;
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_22;
              PopPowerRequestNotifyTtmSessionInitialized();
            }
            PopAcquirePolicyLock(v79);
            LODWORD(v161[2]) = 0;
            v161[0] = &PopNoMoreInput;
            v161[1] = &PopHiberBootForceMonitorOff;
            LODWORD(v161[3]) = byte_140C3D911 != 0;
            HIDWORD(v161[3]) = dword_140C3D90C;
            HIDWORD(v161[2]) = dword_140C3D92C;
            v161[4] = (HANDLE)qword_140C3D930;
            HIDWORD(v161[6]) = HIDWORD(qword_140C3D938);
            v161[5] = (HANDLE)__PAIR64__(dword_140C3D940, qword_140C3D938);
            BYTE1(v161[6]) = PopLidOpened;
            _m_prefetchw(&PopLidStateIsReliable);
            BYTE1(v161[7]) = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
            Src = v161;
            Length_4 = 64;
            v80 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is started\n", v80);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
            PopReleasePolicyLock(v82, v81, v83);
            Pool2 = v155;
            goto LABEL_19;
        }
        v58 = (unsigned int)(v8 - 42);
        if ( (_DWORD)v8 != 42 )
          goto LABEL_232;
        if ( !Pool2 || v14 != 16 || v16 )
          goto LABEL_307;
        if ( !*((_BYTE *)Pool2 + 13) || !*((_BYTE *)Pool2 + 12) )
        {
LABEL_191:
          if ( *((_BYTE *)Pool2 + 14) )
          {
            if ( *((_BYTE *)Pool2 + 12) )
              ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)Pool2 + 4);
            if ( *((_BYTE *)Pool2 + 14) )
              PopDiagTraceSessionDisplayStateChange(
                *((_DWORD *)Pool2 + 1) == 0,
                *(_DWORD *)Pool2,
                *((unsigned __int8 *)Pool2 + 12),
                *((_DWORD *)Pool2 + 2));
          }
          goto LABEL_123;
        }
        if ( PopPlatformAoAc && !PopConsoleDisplayState )
        {
          if ( *((_DWORD *)Pool2 + 1) != 2 )
          {
LABEL_188:
            LOBYTE(v58) = *((_BYTE *)Pool2 + 15);
            PopProcessSessionDisplayStateChange(v58, *((unsigned int *)Pool2 + 2));
LABEL_189:
            PopSetDisplayStatus(*((unsigned int *)Pool2 + 1));
            PopUpdateConsoleDisplayState(*((unsigned int *)Pool2 + 1));
            if ( *((_DWORD *)Pool2 + 1) == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_191;
          }
          DbgkWerCaptureLiveKernelDump(
            (unsigned int)L"InvalidDisplayStateTransition",
            160,
            2049,
            *((_DWORD *)Pool2 + 2),
            *(unsigned int *)Pool2,
            0LL,
            0LL,
            0LL,
            0);
        }
        if ( *((_DWORD *)Pool2 + 1) == 2 )
          goto LABEL_189;
        goto LABEL_188;
      }
      v67 = v8 - 45;
      if ( v67 )
      {
        v68 = v67 - 1;
        if ( !v68 )
        {
          if ( !Pool2 )
            goto LABEL_307;
          if ( v14 < 2 )
            goto LABEL_307;
          if ( !v16 )
            goto LABEL_307;
          v69 = *(_WORD *)Pool2;
          if ( v69 >= KeQueryActiveGroupCount() )
            goto LABEL_307;
          v70 = PopProcessorInformation(v161, v9, v69, &Length_4);
          goto LABEL_251;
        }
        v117 = v68 - 1;
        if ( !v117 )
        {
          if ( !Pool2 || v14 != 16 )
            goto LABEL_307;
          v120 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v120;
          if ( v120 >= 0 )
            goto LABEL_123;
          InputBuffer = v15;
          if ( v120 == -1073741536 )
            goto LABEL_123;
          goto LABEL_22;
        }
        v118 = v117 - 1;
        if ( v118 )
        {
LABEL_563:
          if ( v118 != 1 )
            goto LABEL_307;
          goto LABEL_564;
        }
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_425;
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 == 16 )
        {
          v119 = 0LL;
LABEL_474:
          WakeSource = PpmParkApplyForcedMask(Pool2, v119);
          goto LABEL_443;
        }
        if ( v14 == 24 )
        {
          v119 = Pool2 + 2;
          goto LABEL_474;
        }
        if ( v14 != 2 )
          goto LABEL_444;
        WakeSource = PpmParkClearForcedMask(Pool2);
        goto LABEL_443;
      }
      if ( Pool2 || !v16 )
        goto LABEL_307;
      WakeTimerList = PopGetPowerRequestListInfo(&Src, &Length_4);
    }
    IsAppContainerOrIdentifyLevelContext = WakeTimerList;
    InputBuffer = v15;
    if ( WakeTimerList < 0 )
      goto LABEL_22;
    v150 = 1;
    goto LABEL_123;
  }
  if ( (int)v8 <= 74 )
  {
    if ( (_DWORD)v8 == 74 )
    {
      if ( PreviousMode )
        goto LABEL_425;
      if ( !Pool2 || v14 != 16 || v16 || Length )
        goto LABEL_307;
      SettingValue = PopPdcCsDeviceNotification(Pool2);
      goto LABEL_97;
    }
    if ( (int)v8 <= 62 )
    {
      if ( (_DWORD)v8 == 62 )
      {
        if ( Pool2 )
        {
          if ( v14 == 40 )
          {
            if ( v16 )
            {
              v20 = Length;
              if ( Length == 16 )
              {
                v85 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                PopSessionConnectionChange(v85, v155, v16);
                v86 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v155;
                LOBYTE(v10) = *v155;
                LOBYTE(v9) = v155[1];
                if ( qword_140C6B028 )
                  qword_140C6B028(v86, v9, v10);
                goto LABEL_19;
              }
            }
          }
        }
        goto LABEL_307;
      }
      if ( (int)v8 > 56 )
      {
        v36 = v8 - 57;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v51 = v37 - 1;
            if ( v51 )
            {
              v135 = v51 - 1;
              if ( v135 )
              {
                if ( v135 == 1 )
                {
                  if ( Pool2 )
                  {
                    if ( v14 == 16 )
                    {
                      if ( v16 )
                      {
                        v20 = Length;
                        if ( Length == 8 )
                          goto LABEL_19;
                      }
                    }
                  }
                }
              }
              else if ( Pool2 && !v16 )
              {
                if ( v14 < 8 )
                  goto LABEL_358;
                PopEnforceResiliencyScenarios(Pool2);
                goto LABEL_123;
              }
              goto LABEL_307;
            }
            if ( !Pool2 || !v16 )
              goto LABEL_307;
            if ( v14 != 16 || Length < 4 )
              goto LABEL_358;
            SettingValue = PopGetSettingValue(Pool2, v16, Length);
          }
          else
          {
            if ( !v16 )
              goto LABEL_307;
            if ( v15 && v14 != 20 || Length != 8 )
              goto LABEL_358;
            SettingValue = PopGetSettingNotificationName((__int64)Pool2, (__int64 *)v16);
          }
          goto LABEL_97;
        }
        if ( !ExVerifySuite(PhoneNT) )
          goto LABEL_564;
        if ( !Pool2 || v14 != 1 || v16 )
          goto LABEL_307;
        LOBYTE(v136) = *(_BYTE *)Pool2;
        IsAppContainerOrIdentifyLevelContext = PopUserPresentOverride(v136);
        v98 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_531:
        if ( v98 )
          goto LABEL_21;
        goto LABEL_123;
      }
      if ( (_DWORD)v8 == 56 )
      {
        if ( Pool2 && v16 )
        {
          if ( v14 != 8 )
            goto LABEL_358;
          v20 = Length;
          if ( Length != 4 )
            goto LABEL_358;
          IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                                   *(_DWORD *)Pool2,
                                                   *((_DWORD *)Pool2 + 1),
                                                   (unsigned int *)v161);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_21;
          Src = v161;
          Length_4 = 4;
          goto LABEL_19;
        }
        goto LABEL_307;
      }
      v122 = v8 - 51;
      if ( !v122 )
      {
        if ( !Pool2 || !v16 )
          goto LABEL_307;
        if ( v14 < 4 )
          goto LABEL_358;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v126);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(unsigned int *)Pool2, &Size[1]);
        PopReleasePolicyLock(v128, v127, v129);
        v130 = 5LL;
LABEL_507:
        PopReleaseTransitionLock(v130);
        InputBuffer = v15;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_22;
        v65 = (__int64 *)&Size[1];
LABEL_238:
        Src = v65;
        Length_4 = 8;
        goto LABEL_123;
      }
      v123 = v122 - 1;
      if ( v123 )
      {
        v124 = v123 - 1;
        if ( v124 )
        {
          v125 = v124 - 1;
          if ( v125 )
          {
            if ( v125 != 1 )
              goto LABEL_307;
            if ( !(_BYTE)KdDebuggerEnabled )
              goto LABEL_425;
            if ( !Pool2 || v16 )
              goto LABEL_307;
            if ( v14 == 8 )
            {
              WakeSource = PpmSetSimulatedIdle((__int64)Pool2);
              goto LABEL_443;
            }
            if ( v14 == 4 )
            {
              WakeSource = PpmClearSimulatedIdle((struct _PROCESSOR_NUMBER *)Pool2);
              goto LABEL_443;
            }
LABEL_444:
            IsAppContainerOrIdentifyLevelContext = -1073741811;
            goto LABEL_445;
          }
        }
      }
LABEL_564:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_21;
    }
    if ( (_DWORD)v8 == 68 )
    {
      if ( !Pool2 || v14 != 8 || v16 || Length )
        goto LABEL_307;
      SettingValue = PopMonitorInvocation(Pool2);
      goto LABEL_97;
    }
    if ( (int)v8 <= 68 )
    {
      v52 = v8 - 63;
      if ( !v52 )
      {
        if ( Pool2 || v16 )
          goto LABEL_307;
        v92 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is closed\n", v92);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v92);
        if ( (unsigned __int8)TtmIsEnabled() )
        {
          PopPowerRequestNotifyTtmSessionUninitialized();
          TtmCleanupCurrentSession();
        }
        goto LABEL_173;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        if ( Pool2 && v14 == 8 && !v16 )
        {
          v91 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          Pool2 = v155;
          PopSessionWinlogonNotification(v91, (__int64)v155);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      v54 = v53 - 1;
      if ( !v54 )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          goto LABEL_210;
        if ( Pool2 || !v16 )
          goto LABEL_307;
        PopFilterCapabilities(&PopCapabilities, v161);
        if ( BYTE2(v161[2]) )
          PopReadHiberbootPolicy((char *)&v161[2] + 2);
        v57 = (HANDLE *)((char *)&v161[2] + 2);
LABEL_164:
        Src = v57;
        Length_4 = 1;
        goto LABEL_123;
      }
      v55 = v54 - 1;
      if ( !v55 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_307;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
LABEL_163:
        LOBYTE(v161[0]) = IsDevicePotentialDripsConstraint;
        v57 = v161;
        goto LABEL_164;
      }
      if ( v55 != 1 || !Pool2 || v14 != 216 || v16 && Length != 160 )
        goto LABEL_307;
      SettingValue = PopPdcInvocation(Pool2, v16);
LABEL_97:
      IsAppContainerOrIdentifyLevelContext = SettingValue;
      goto LABEL_21;
    }
    switch ( (_DWORD)v8 )
    {
      case 'E':
        if ( !Pool2 && !v16 )
        {
          IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings((unsigned int)(v8 - 69));
          byte_140C3DAD4 = PopPlatformAoAc;
          goto LABEL_21;
        }
        goto LABEL_307;
      case 'F':
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_123;
      case 'G':
        goto LABEL_210;
    }
    if ( (_DWORD)v8 != 72 )
      goto LABEL_542;
LABEL_232:
    if ( !Pool2 || !v16 )
      goto LABEL_307;
    if ( v14 != 40 || Length != 8 )
      goto LABEL_358;
    IsAppContainerOrIdentifyLevelContext = PopPowerRequestCreateUserModeRequest(
                                             (unsigned __int64)Pool2,
                                             (_DWORD)v8 == 72,
                                             v161);
    InputBuffer = v15;
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_22;
    v65 = (__int64 *)v161;
    goto LABEL_238;
  }
  if ( (int)v8 <= 86 )
  {
    if ( (_DWORD)v8 == 86 )
    {
      if ( !Pool2 || !v16 )
        goto LABEL_307;
      IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2, v14, 0LL);
      InputBuffer = v15;
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, v161);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          Src = v161;
          Length_4 = 52;
          goto LABEL_123;
        }
      }
      goto LABEL_22;
    }
    if ( (int)v8 <= 80 )
    {
      if ( (_DWORD)v8 == 80 )
        goto LABEL_564;
      v43 = v8 - 75;
      if ( !v43 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_307;
        LODWORD(v161[0]) = PopCapturePlatformRole();
        goto LABEL_122;
      }
      v138 = v43 - 1;
      if ( v138 )
      {
        v139 = v138 - 1;
        if ( v139 )
        {
          v118 = v139 - 1;
          if ( !v118 )
          {
            if ( PreviousMode == 1 )
            {
              if ( v16 )
                goto LABEL_307;
              v20 = Length;
              if ( Length )
                goto LABEL_307;
              if ( Pool2 )
              {
                if ( v14 != 4 )
                  goto LABEL_307;
                PpmSetExitLatencySamplingPercentage((int *)Pool2);
              }
              else
              {
                PpmClearExitLatencySamplingPercentage();
              }
LABEL_19:
              if ( !Src || !v16 )
                goto LABEL_20;
              if ( v20 >= Length_4 )
              {
                memmove((void *)v16, Src, Length_4);
LABEL_20:
                IsAppContainerOrIdentifyLevelContext = 0;
LABEL_21:
                InputBuffer = v15;
                goto LABEL_22;
              }
LABEL_358:
              IsAppContainerOrIdentifyLevelContext = -1073741789;
              goto LABEL_21;
            }
LABEL_425:
            IsAppContainerOrIdentifyLevelContext = -1073741790;
            goto LABEL_21;
          }
          goto LABEL_563;
        }
        if ( Pool2 || v16 )
          goto LABEL_307;
        v140 = PopErrataReportingIncorrectLidState;
        if ( !(unsigned __int8)TtmIsEnabled() )
        {
          v143 = 0;
          if ( !PopLidOpened )
            v143 = PopConsoleExternalDisplayConnected == 0;
          if ( !v143 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v140 )
          {
            LOBYTE(v10) = v143;
            PopDiagTraceDisplayBurstWin32kCallout(v141, v9, v10);
          }
          goto LABEL_123;
        }
        v142 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( v142 != -1 )
          TtmNotifySessionDisplayBurst(v142, 6LL);
LABEL_173:
        Pool2 = v155;
        goto LABEL_123;
      }
      if ( Pool2 || !v16 )
        goto LABEL_307;
      LODWORD(v161[0]) = qword_140C3D3E8;
      v161[1] = (HANDLE)qword_140C3D580;
      v161[2] = (HANDLE)qword_140C3D588;
      if ( !PopSleepStats )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        goto LABEL_21;
      }
      v99 = (__int128 *)v161;
LABEL_373:
      Src = v99;
      Length_4 = 24;
      goto LABEL_123;
    }
    v62 = v8 - 81;
    if ( !v62 )
      goto LABEL_564;
    v63 = v62 - 1;
    if ( !v63 )
      goto LABEL_564;
    v64 = v63 - 1;
    if ( v64 )
    {
      v144 = v64 - 1;
      if ( v144 )
      {
        if ( v144 == 1 )
        {
          v145 = *((_DWORD *)Pool2 + 2);
          v146 = (_DWORD *)*Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            PopPowerRequestReferenceAcquire(v146, v145);
          else
            PopPowerRequestReferenceRelease(v146, v145);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      if ( !Pool2 || v16 )
        goto LABEL_307;
      if ( v14 < 0x10 || v14 < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
        goto LABEL_358;
      v59 = PopThermalProcessUsermodeEvent(Pool2);
      goto LABEL_200;
    }
    if ( Pool2 || !v16 )
      goto LABEL_307;
    PopCurrentPowerStatePrecise(v161, 0LL);
LABEL_114:
    Src = v161;
    Length_4 = 32;
    goto LABEL_123;
  }
  if ( (int)v8 <= 92 )
  {
    if ( (_DWORD)v8 == 92 )
    {
      if ( !Pool2 || !v16 )
        goto LABEL_307;
      if ( v14 != 12 )
        goto LABEL_358;
      v20 = Length;
      if ( Length != 8 )
        goto LABEL_358;
      IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerCreate(Pool2, v161);
      InputBuffer = v15;
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        Src = v161;
        Length_4 = 8;
        goto LABEL_19;
      }
      goto LABEL_22;
    }
    if ( (_DWORD)v8 == 87 )
    {
      if ( Pool2 )
      {
        if ( v14 >= 8 )
        {
          v45 = *(_DWORD *)Pool2;
          v9 = *((unsigned int *)Pool2 + 1);
          if ( (unsigned int)(*(_DWORD *)Pool2 - 92) > 0xFA3 && v45 < 4107 )
          {
            if ( (unsigned int)(v45 - 4096) <= 0xA )
            {
              if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
                && !PopCapabilityCheck(L"terminalPowerManagement") )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741727;
                goto LABEL_21;
              }
              v20 = Length;
              v46 = TtmDispatchApi(
                      v45,
                      (_DWORD)Pool2,
                      v14,
                      (_DWORD)v16,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v150);
            }
            else
            {
              v20 = Length;
              v46 = PopPowerInformationInternal(
                      v45,
                      v9,
                      (_DWORD)Pool2,
                      v14,
                      (__int64)v16,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v150);
            }
            IsAppContainerOrIdentifyLevelContext = v46;
            v23 = v46 < 0;
            goto LABEL_18;
          }
        }
      }
      goto LABEL_307;
    }
    if ( (_DWORD)v8 != 88 )
    {
      if ( (_DWORD)v8 != 89 )
      {
        if ( (_DWORD)v8 == 90 )
        {
          if ( Pool2 && v14 >= 4 && !v16 )
          {
            PopUpdatePowerButtonHoldState(*(_DWORD *)Pool2 != 0);
            goto LABEL_123;
          }
          goto LABEL_307;
        }
        if ( !PopPlatformAoAc )
        {
LABEL_210:
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          goto LABEL_21;
        }
        if ( !Pool2 || v14 != 336 || !v16 )
          goto LABEL_307;
        IsDevicePotentialDripsConstraint = PopFxIsDevicePotentialDripsConstraint(Pool2);
        goto LABEL_163;
      }
      if ( !Pool2 || !v16 )
        goto LABEL_307;
      if ( v14 < 4 )
        goto LABEL_358;
      PopAcquireTransitionLock(6LL);
      PopAcquirePolicyLock(v131);
      IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(unsigned int *)Pool2, &Size[1]);
      PopReleasePolicyLock(v133, v132, v134);
      v130 = 6LL;
      goto LABEL_507;
    }
LABEL_542:
    if ( !Pool2 && !v16 )
    {
      v137 = 23LL;
      if ( (_DWORD)v8 != 88 )
        v137 = 11LL;
      PopScreenOff(v137);
      goto LABEL_20;
    }
    goto LABEL_307;
  }
  v18 = v8 - 93;
  if ( !v18 )
  {
    if ( Pool2 && v16 )
    {
      if ( v14 != 8 )
        goto LABEL_358;
      v20 = Length;
      if ( Length < 0xC )
        goto LABEL_358;
      v21 = PopEtEnergyTrackerQuery(*Pool2, v16, Length);
LABEL_17:
      IsAppContainerOrIdentifyLevelContext = v21;
      v23 = v21 < 0;
LABEL_18:
      InputBuffer = v15;
      if ( v23 )
        goto LABEL_22;
      goto LABEL_19;
    }
    goto LABEL_307;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( Pool2 )
    {
      if ( !v16 )
      {
        v20 = Length;
        if ( !Length )
        {
          if ( v14 != 32 )
            goto LABEL_358;
          LOBYTE(v9) = PreviousMode;
          v21 = PopBlackBoxUpdate(Pool2, v9);
          goto LABEL_17;
        }
      }
    }
    goto LABEL_307;
  }
  v66 = v19 - 1;
  if ( !v66 )
  {
    if ( Pool2 && v14 == 1 && !v16 )
    {
      ExNotifyCallback(PipCslCallbackObject, Pool2, 0LL);
      goto LABEL_123;
    }
LABEL_307:
    InputBuffer = v15;
LABEL_626:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    goto LABEL_22;
  }
  v147 = v66 - 1;
  if ( !v147 )
  {
    if ( !Pool2 || v16 )
      goto LABEL_307;
    if ( !v14 )
      goto LABEL_358;
    LOBYTE(v12) = *(_BYTE *)Pool2;
    v59 = PopSendSuspendResumeNotifications(v12);
    goto LABEL_200;
  }
  if ( v147 != 1 )
    goto LABEL_307;
  if ( !Pool2 )
    goto LABEL_307;
  if ( !v14 )
    goto LABEL_307;
  if ( !v16 )
    goto LABEL_307;
  v20 = Length;
  if ( !Length )
    goto LABEL_307;
  if ( v14 < 0x20 || Length < 0x10 )
    goto LABEL_358;
  IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, v161);
  InputBuffer = v15;
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    Src = v161;
    Length_4 = 16;
    goto LABEL_19;
  }
LABEL_22:
  v24 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v150 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v153 )
    PopReleasePolicyLock(v24, v9, v10);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (_QWORD *)v162 )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
