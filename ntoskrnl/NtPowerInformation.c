/*
 * XREFs of NtPowerInformation @ 0x14068AB90
 * Callers:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14059FED4 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405A00D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A0478 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140688C14 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14068AB00 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140862A50 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096BD7C (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     TtmpCalloutArmWatchdog @ 0x1409A0268 (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutCreateWatchdog @ 0x1409A030C (TtmpCalloutCreateWatchdog.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1409A036C (TtmpCalloutDestroyWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A03F0 (TtmpCalloutWatchdogCallback.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     PopDisksRegisteredForIdle @ 0x1402FF94C (PopDisksRegisteredForIdle.c)
 *     KeQueryActiveGroupCount @ 0x1403598D0 (KeQueryActiveGroupCount.c)
 *     ExVerifySuite @ 0x1403A1420 (ExVerifySuite.c)
 *     PpmHeteroHgsBackupInit @ 0x1403A6744 (PpmHeteroHgsBackupInit.c)
 *     PopEventCalloutDispatch @ 0x1403B127C (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1403D0C10 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140581B64 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmClearSimulatedIdle @ 0x140581BAC (PpmClearSimulatedIdle.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1405836EC (PpmSetExitLatencySamplingPercentage.c)
 *     PpmSetSimulatedIdle @ 0x1405837CC (PpmSetSimulatedIdle.c)
 *     PopCapabilityCheck @ 0x140584CB8 (PopCapabilityCheck.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14058832C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PoPowerOffMonitor @ 0x14058CE20 (PoPowerOffMonitor.c)
 *     PopShutdownListenerInsertCallback @ 0x140596410 (PopShutdownListenerInsertCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140597038 (PopUpdatePowerButtonHoldState.c)
 *     PpmParkSetLpiCap @ 0x14059ADFC (PpmParkSetLpiCap.c)
 *     ExGetWakeTimerList @ 0x140609248 (ExGetWakeTimerList.c)
 *     PopFreeSessionState @ 0x14067F574 (PopFreeSessionState.c)
 *     PopSessionWinlogonNotification @ 0x14067F97C (PopSessionWinlogonNotification.c)
 *     PopBlackBoxUpdate @ 0x14068BFB0 (PopBlackBoxUpdate.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14073AC00 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestActionInfo @ 0x14073ACE4 (PopPowerRequestActionInfo.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     PopGetSettingValue @ 0x14073CFC0 (PopGetSettingValue.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopMonitorInvocation @ 0x140756DE8 (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x140757094 (PopProcessSessionDisplayStateChange.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 *     PspIsContextAdmin @ 0x140781848 (PspIsContextAdmin.c)
 *     PopProcessorInformation @ 0x14078A138 (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x14078F3D0 (PopCurrentPowerState.c)
 *     ExCheckFullProcessInformationAccess @ 0x140791A18 (ExCheckFullProcessInformationAccess.c)
 *     PopCapturePlatformRole @ 0x140796DC4 (PopCapturePlatformRole.c)
 *     PopSessionConnectionChange @ 0x14079A150 (PopSessionConnectionChange.c)
 *     PopDiagTraceSessionStates @ 0x14079A284 (PopDiagTraceSessionStates.c)
 *     PopIsRunningAsLocalSystem @ 0x14079C550 (PopIsRunningAsLocalSystem.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PopResetCurrentPolicies @ 0x140829F88 (PopResetCurrentPolicies.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x14082A334 (PopVerifySystemPowerPolicy.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x14082B35C (PopHibernateEvaluation.c)
 *     PopEtEnergyTrackerCreate @ 0x14084F34C (PopEtEnergyTrackerCreate.c)
 *     PopPdcInvocation @ 0x140856C3C (PopPdcInvocation.c)
 *     PopCurrentPowerStatePrecise @ 0x140870DD8 (PopCurrentPowerStatePrecise.c)
 *     PopUpdateConsoleDisplayState @ 0x140870EA4 (PopUpdateConsoleDisplayState.c)
 *     PopLogSleepDisabled @ 0x14087118C (PopLogSleepDisabled.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14087EC10 (DbgkWerCaptureLiveKernelDump.c)
 *     PopSetDisplayStatus @ 0x140880858 (PopSetDisplayStatus.c)
 *     PopLoggingInformation @ 0x14097DDE4 (PopLoggingInformation.c)
 *     PopReadHiberbootPolicy @ 0x14097DFFC (PopReadHiberbootPolicy.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x14097E750 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14097E7CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopApplyAdminPolicy @ 0x140981178 (PopApplyAdminPolicy.c)
 *     PopGetPowerRequestListInfo @ 0x140981250 (PopGetPowerRequestListInfo.c)
 *     PpmClearSimulatedLoad @ 0x1409837F0 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140983BA4 (PpmSetSimulatedLoad.c)
 *     PopGetWakeSource @ 0x140984368 (PopGetWakeSource.c)
 *     PopSetHiberFileSize @ 0x140986084 (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x140986128 (PopSetHiberFileType.c)
 *     PopSetHiberPersistedRegValue @ 0x1409861D8 (PopSetHiberPersistedRegValue.c)
 *     PopSendSuspendResumeNotifications @ 0x140987648 (PopSendSuspendResumeNotifications.c)
 *     PopThermalProcessUsermodeEvent @ 0x140987DC8 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x1409897B4 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x1409898D4 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x14098B884 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopDiagTraceServiceNotification @ 0x14098E46C (PopDiagTraceServiceNotification.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140990BB0 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 *     PopBatteryDeviceState @ 0x1409920CC (PopBatteryDeviceState.c)
 *     PopBlackBoxDirectAccess @ 0x140993F78 (PopBlackBoxDirectAccess.c)
 *     PopUmpoSendLegacyEvent @ 0x1409948A0 (PopUmpoSendLegacyEvent.c)
 *     PopPdcCsDeviceNotification @ 0x140994E6C (PopPdcCsDeviceNotification.c)
 *     PopScreenOff @ 0x140995234 (PopScreenOff.c)
 *     PpmParkApplyForcedMask @ 0x140996E54 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140996F54 (PpmParkClearForcedMask.c)
 *     PopUserPresentOverride @ 0x140998B50 (PopUserPresentOverride.c)
 *     TtmCleanupCurrentSession @ 0x1409A0EB0 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409A0FC0 (TtmInitCurrentSession.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A1344 (TtmNotifySessionDisplayBurst.c)
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140B4743C (PopInitPlatformSettings.c)
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
  _BYTE *Pool2; // r15
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
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  LUID v34; // rcx
  int v35; // r14d
  int v36; // r14d
  NTSTATUS SettingValue; // eax
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  int v52; // r14d
  int v53; // r14d
  int v54; // r14d
  char IsDevicePotentialDripsConstraint; // al
  HANDLE *v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  bool v59; // sf
  _DWORD *v60; // rax
  int v61; // r14d
  int v62; // r14d
  int v63; // r14d
  __int64 *v64; // rax
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  USHORT v68; // bx
  int v69; // eax
  _BYTE *v70; // rcx
  int v71; // r9d
  int v72; // edx
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // ebx
  char v77; // al
  int v78; // ecx
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r14d
  unsigned int v84; // eax
  __int64 v85; // rcx
  bool v86; // zf
  int v87; // r14d
  int v88; // r14d
  int v89; // r14d
  unsigned int v90; // eax
  int v91; // ebx
  HANDLE *v92; // rax
  int v93; // ecx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  bool v97; // sf
  __int128 *v98; // rax
  int v99; // r14d
  int v100; // r14d
  int v101; // r14d
  int v102; // r14d
  unsigned int *v103; // r14
  int v104; // ecx
  unsigned int v105; // eax
  unsigned int v106; // ecx
  unsigned int ProcessSessionId; // eax
  int v108; // r14d
  int v109; // r14d
  int v110; // r14d
  int v111; // r14d
  __int64 v112; // rax
  _DWORD *v113; // rbx
  void *v114; // rax
  NTSTATUS WakeSource; // eax
  int v116; // r14d
  int v117; // r14d
  _BYTE *v118; // rdx
  int v119; // eax
  int WakeTimerList; // eax
  int v121; // r14d
  int v122; // r14d
  int v123; // r14d
  int v124; // r14d
  int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rcx
  int v130; // ecx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  int v134; // r14d
  __int64 v135; // rcx
  __int64 v136; // rcx
  int v137; // r14d
  int v138; // r14d
  char v139; // r14
  __int64 v140; // rcx
  unsigned int v141; // eax
  bool v142; // bl
  int v143; // r14d
  unsigned int v144; // edx
  _DWORD *v145; // rcx
  int v146; // r14d
  ULONG Length; // [rsp+50h] [rbp-6E8h]
  unsigned int Length_4; // [rsp+54h] [rbp-6E4h] BYREF
  char v149; // [rsp+58h] [rbp-6E0h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+59h] [rbp-6DFh]
  void *Src; // [rsp+60h] [rbp-6D8h] BYREF
  char v152; // [rsp+68h] [rbp-6D0h]
  char v153; // [rsp+69h] [rbp-6CFh]
  _BYTE *v154; // [rsp+70h] [rbp-6C8h]
  int v155; // [rsp+78h] [rbp-6C0h]
  BOOL v156; // [rsp+7Ch] [rbp-6BCh] BYREF
  _DWORD Size[3]; // [rsp+84h] [rbp-6B4h] BYREF
  unsigned __int64 v158; // [rsp+90h] [rbp-6A8h]
  PVOID P[3]; // [rsp+98h] [rbp-6A0h] BYREF
  HANDLE v160[192]; // [rsp+B0h] [rbp-688h] BYREF
  _BYTE v161[64]; // [rsp+6B0h] [rbp-88h] BYREF

  v158 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v153 = 0;
  memset(v160, 0, sizeof(v160));
  v156 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  Src = 0LL;
  Length_4 = 0;
  Pool2 = 0LL;
  v154 = 0LL;
  P[0] = 0LL;
  LOBYTE(v12) = 0;
  v152 = 0;
  v149 = 0;
  if ( (unsigned int)v8 > 0x61 )
    goto LABEL_626;
  v13 = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v13;
  v14 = InputBuffer != 0LL ? InputBufferLength : 0;
  Size[0] = v14;
  v15 = (char *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
  P[1] = v15;
  Length = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (volatile void *)(v158 & -(__int64)(Length != 0));
  if ( v13 )
  {
    if ( (unsigned int)v8 <= 0x22 && (v12 = 0x7C30200C0LL, _bittest64(&v12, v8))
      || (v26 = (unsigned int)(v8 - 39), (unsigned int)v26 <= 0x3A)
      && (v12 = 0x4104F0071C2E50FLL, _bittest64(&v12, v26)) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      InputBuffer = v15;
      Pool2 = v154;
      goto LABEL_22;
    }
    v27 = (unsigned int)(v8 - 37);
    if ( (unsigned int)v27 <= 0x3A && (v12 = 0x608801808940903LL, _bittest64(&v12, v27)) || (unsigned int)(v8 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
      v155 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v154;
        goto LABEL_22;
      }
    }
    if ( (unsigned int)(v8 - 92) <= 1 )
    {
      LOBYTE(v12) = v13;
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v12);
      v155 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        Pool2 = v154;
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
          v155 = -1073741790;
          InputBuffer = v15;
          Pool2 = v154;
          goto LABEL_22;
        }
      }
    }
    if ( (_DWORD)v8 == 71 && !(unsigned __int8)PopIsRunningAsLocalSystem() )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      v155 = -1073741790;
      InputBuffer = v15;
      Pool2 = v154;
      goto LABEL_22;
    }
    if ( v15 )
    {
      v29 = (unsigned int)(v8 - 11);
      if ( (unsigned int)v29 > 0x3D || (v12 = 0x2001800900000001LL, !_bittest64(&v12, v29)) )
      {
        if ( PsIsCurrentThreadInServerSilo(v12, v9) )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          v155 = -1073741637;
          InputBuffer = v15;
          Pool2 = v154;
          goto LABEL_22;
        }
      }
      v30 = (unsigned int)(v8 - 38);
      if ( (unsigned int)v30 <= 0x39 && (v31 = 0x218000004422401LL, _bittest64(&v31, v30)) || (_DWORD)v8 == 9 )
      {
        if ( !(unsigned __int8)PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          v155 = -1073741790;
          InputBuffer = v15;
          Pool2 = v154;
          goto LABEL_22;
        }
      }
      v32 = (unsigned int)(v8 - 37);
      if ( (unsigned int)v32 > 0x3B || (v33 = 0xFAE005C28F40BC3LL, !_bittest64(&v33, v32)) )
      {
        if ( (unsigned int)(v8 - 2) > 1 && (_DWORD)v8 != 11 )
        {
          v34 = SeShutdownPrivilege;
          if ( (_DWORD)v8 == 10 )
            v34 = SeCreatePagefilePrivilege;
          v158 = (unsigned __int64)v34;
          if ( !SeSinglePrivilegeCheck(v34, v13) )
          {
            IsAppContainerOrIdentifyLevelContext = -1073741727;
            v155 = -1073741727;
            InputBuffer = v15;
            Pool2 = v154;
            goto LABEL_22;
          }
        }
      }
      v14 = Size[0];
      if ( Size[0] && ((unsigned __int64)&v15[Size[0]] > 0x7FFFFFFF0000LL || &v15[Size[0]] < v15) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( Size[0] > 0x40u )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, Size[0], 544040269LL);
        v154 = Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          v155 = -1073741670;
          InputBuffer = v15;
          goto LABEL_22;
        }
      }
      else
      {
        Pool2 = v161;
        v154 = v161;
      }
      memmove(Pool2, v15, Size[0]);
    }
    else
    {
      Pool2 = v154;
      v14 = Size[0];
    }
    if ( v16 )
      ProbeForWrite(v16, Length, 1u);
    LOBYTE(v12) = v152;
  }
  else
  {
    Pool2 = (_BYTE *)((unsigned __int64)InputBuffer & -(__int64)(v14 != 0));
    v154 = Pool2;
  }
  v17 = (unsigned int)(v8 - 38);
  if ( (unsigned int)v17 > 0x3B || (v9 = 0xFFFE3BE75BE26EDLL, !_bittest64(&v9, v17)) )
  {
    if ( (unsigned int)v8 > 0x1F || (v43 = -234812256, !_bittest(&v43, v8)) )
    {
      PopAcquirePolicyLock(v12);
      LOBYTE(v12) = 1;
      v152 = 1;
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
              v99 = v8 - 19;
              if ( v99 )
              {
                v100 = v99 - 1;
                if ( v100 )
                {
                  v101 = v100 - 1;
                  if ( v101 )
                  {
                    v102 = v101 - 1;
                    if ( v102 )
                    {
                      if ( v102 == 1 && !Pool2 && v16 )
                      {
                        IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v156);
                        InputBuffer = v15;
                        if ( IsAppContainerOrIdentifyLevelContext < 0 )
                          goto LABEL_22;
                        Src = P[0];
                        Length_4 = v156;
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
              v46 = v8 - 13;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( !v47 )
                {
                  if ( Pool2 || !v16 )
                    goto LABEL_307;
                  v64 = &qword_140C3CDA8;
                  goto LABEL_238;
                }
                v48 = v47 - 1;
                if ( !v48 )
                {
                  if ( Pool2 || !v16 )
                    goto LABEL_307;
                  v64 = &qword_140C3CDB0;
                  goto LABEL_238;
                }
                v49 = v48 - 1;
                if ( v49 )
                {
                  if ( v49 == 1 && Pool2 && !v16 )
                  {
                    if ( v14 < 0x10 )
                      goto LABEL_358;
                    if ( !(_QWORD)PopPowerStateNotifyHandler || !*(_QWORD *)Pool2 )
                    {
                      PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                      goto LABEL_123;
                    }
                  }
                  goto LABEL_307;
                }
                if ( Pool2 || !v16 )
                  goto LABEL_307;
                if ( dword_140C03588 )
                  LODWORD(v160[0]) |= 1u;
                if ( dword_140C03558 )
                  LODWORD(v160[0]) |= 2u;
LABEL_122:
                Src = v160;
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
            HIDWORD(v160[0]) = dword_140C3C984;
            LODWORD(v160[1]) = dword_140C3C98C - dword_140C3C988;
            BYTE4(v160[1]) = PopCoolingMode;
            Src = v160;
            Length_4 = 16;
            goto LABEL_123;
          }
          if ( (_DWORD)v8 != 6 )
          {
            if ( (int)v8 <= 6 )
            {
              if ( (_DWORD)v8 && (v38 = v8 - 1) != 0 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  v40 = v39 - 1;
                  if ( v40 )
                  {
                    v41 = v40 - 1;
                    if ( !v41 )
                    {
                      if ( Pool2 )
                      {
                        if ( (PopSimulate & 1) == 0 )
                          goto LABEL_307;
                        if ( v14 < 0x4C )
                          goto LABEL_358;
                        PopCapabilities = *(_OWORD *)Pool2;
                        unk_140C3D6F0 = *((_OWORD *)Pool2 + 1);
                        xmmword_140C3D700 = *((_OWORD *)Pool2 + 2);
                        xmmword_140C3D710 = *((_OWORD *)Pool2 + 3);
                        qword_140C3D720 = *((_QWORD *)Pool2 + 8);
                        dword_140C3D728 = *((_DWORD *)Pool2 + 18);
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
                      byte_140C3D6F5 = PopDisksRegisteredForIdle();
                      PopFilterCapabilities(&PopCapabilities, v160);
                      Src = v160;
                      Length_4 = 76;
                      goto LABEL_173;
                    }
                    if ( v41 != 1 || Pool2 || !v16 )
                      goto LABEL_307;
                    PopCurrentPowerState(v160);
                    goto LABEL_114;
                  }
                }
                if ( !Pool2 || !v16 )
                  goto LABEL_307;
                if ( v14 < 0xE8 )
                  goto LABEL_358;
                IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, v160);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_22;
                v92 = v160;
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
                v92 = (HANDLE *)&unk_140C3D3A4;
              }
LABEL_351:
              Src = v92;
              Length_4 = 232;
              goto LABEL_123;
            }
            v83 = v8 - 7;
            if ( !v83 )
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
            v87 = v83 - 1;
            if ( !v87 )
            {
              if ( Pool2 || !v16 )
                goto LABEL_307;
              v92 = (HANDLE *)PopPolicy;
              goto LABEL_351;
            }
            v88 = v87 - 1;
            if ( !v88 )
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
              v98 = &PopAdminPolicy;
              goto LABEL_373;
            }
            v89 = v88 - 1;
            if ( !v89 )
            {
              if ( !Pool2 || v16 )
                goto LABEL_307;
              if ( !v14 )
                goto LABEL_358;
              PopAcquireTransitionLock(3LL);
              PopAcquirePolicyLock(v93);
              PopHiberEnabledReg = *Pool2 != 0;
              PopSetHiberPersistedRegValue(0LL);
              IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0LL, 0LL, 0LL);
              PopReleasePolicyLock(v95, v94, v96);
              PopReleaseTransitionLock(3LL);
              v97 = IsAppContainerOrIdentifyLevelContext < 0;
              goto LABEL_531;
            }
            if ( v89 != 1 || Pool2 || !v16 )
              goto LABEL_307;
            v69 = PopProcessorInformation(v160, v9, KeGetCurrentPrcb()->Group, &Length_4);
            Pool2 = v154;
LABEL_251:
            InputBuffer = v15;
            IsAppContainerOrIdentifyLevelContext = v69;
            if ( v69 < 0 )
              goto LABEL_22;
            Src = v160;
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
              && ((_DWORD)v9 != 4 || (void (__fastcall __noreturn *)())qword_140C3D688 != PopShutdownHandler) )
            {
              goto LABEL_307;
            }
          }
          *(_OWORD *)((char *)&PopPowerStateHandlers + 24 * v9) = *(_OWORD *)Pool2;
          *((_QWORD *)&PopPowerStateHandlers + 3 * v9 + 2) = *((_QWORD *)Pool2 + 2);
          *(_WORD *)((char *)&PopPowerStateHandlers + 24 * v9 + 5) = 0;
          *((_BYTE *)&PopPowerStateHandlers + 24 * v9 + 7) = 0;
          v70 = 0LL;
          v71 = 0;
          if ( (_DWORD)v9 )
          {
            v72 = v9 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                v74 = v73 - 1;
                if ( v74 )
                {
                  v75 = v74 - 1;
                  if ( !v75 )
                  {
                    v70 = (char *)&PopCapabilities + 7;
LABEL_299:
                    v9 = v71 & (unsigned int)-(*((_BYTE *)&PopPowerStateHandlers + 8 * v10 + 4) != 0);
                    if ( (int)v9 > (int)qword_140C3D720 )
                      LODWORD(qword_140C3D720) = *((_BYTE *)&PopPowerStateHandlers + 8 * v10 + 4) != 0 ? v71 : 0;
                    if ( v70 && *v70 != 1 )
                    {
                      *v70 = 1;
                      PopResetCurrentPolicies();
                    }
                    goto LABEL_123;
                  }
                  if ( v75 != 2 )
                    goto LABEL_299;
                  v71 = 4;
                  v86 = (PopSimulate & 0x2000) == 0;
                  v70 = &unk_140C3D6F1;
                }
                else
                {
                  v71 = 5;
                  v86 = (PopSimulate & 0x2000) == 0;
                  v70 = (char *)&PopCapabilities + 6;
                }
              }
              else
              {
                v71 = 4;
                v86 = (PopSimulate & 0x20) == 0;
                v70 = (char *)&PopCapabilities + 5;
              }
            }
            else
            {
              v71 = 3;
              v86 = (PopSimulate & 0x40) == 0;
              v70 = (char *)&PopCapabilities + 4;
            }
          }
          else
          {
            v71 = 2;
            v86 = (PopSimulate & 8) == 0;
            v70 = (char *)&PopCapabilities + 3;
          }
          if ( !v86 )
            v70 = 0LL;
          goto LABEL_299;
        }
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 < 8 )
          goto LABEL_358;
        v58 = PopLogSleepDisabled(*(unsigned int *)Pool2, *((unsigned int *)Pool2 + 1), 0LL, 0LL);
LABEL_200:
        IsAppContainerOrIdentifyLevelContext = v58;
        v59 = v58 < 0;
        goto LABEL_201;
      }
      if ( (int)v8 <= 38 )
      {
        if ( (_DWORD)v8 != 38 )
        {
          if ( (int)v8 > 32 )
          {
            v108 = v8 - 33;
            if ( !v108 )
              goto LABEL_564;
            v109 = v108 - 1;
            if ( !v109 )
              goto LABEL_564;
            v110 = v109 - 1;
            if ( v110 )
            {
              v111 = v110 - 1;
              if ( v111 )
              {
                if ( v111 != 1 || !Pool2 || v16 )
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
              if ( !(_DWORD)dword_140C3CA80 || !qword_140C3CA78 )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741275;
                goto LABEL_21;
              }
              Length_4 = dword_140C3CA80 + 8;
              v112 = ExAllocatePool2(256LL, (unsigned int)(dword_140C3CA80 + 8), 544040269LL);
              v113 = (_DWORD *)v112;
              if ( v112 )
              {
                Src = (void *)v112;
                v149 = 1;
                memmove((void *)(v112 + 8), qword_140C3CA78, (unsigned int)dword_140C3CA80);
                *v113 = (unsigned int)dword_140C3CA80 >> 4;
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
                v152 = 0;
              }
              IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Length_4);
              if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
                goto LABEL_445;
              v114 = (void *)ExAllocatePool2(64LL, Length_4, 544040269LL);
              Src = v114;
              if ( v114 )
              {
                v149 = 1;
                WakeSource = PopGetWakeSource(v114, &Length_4);
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
                v103 = (unsigned int *)(Pool2 + 24);
                v104 = *((_DWORD *)Pool2 + 6);
                if ( !v104 )
                  goto LABEL_307;
                v158 = (unsigned __int64)(Pool2 + 20);
                if ( *((_DWORD *)Pool2 + 5) > 2u )
                  goto LABEL_307;
                InputBuffer = v15;
                if ( *(_DWORD *)Pool2 != 1 )
                {
                  IsAppContainerOrIdentifyLevelContext = -1073741736;
                  goto LABEL_22;
                }
                v105 = v104 + 28;
                v106 = -1;
                if ( v105 >= 0x1C )
                  v106 = v105;
                Length_4 = v106;
                IsAppContainerOrIdentifyLevelContext = v105 < 0x1C ? 0xC0000095 : 0;
                if ( v105 < 0x1C )
                  goto LABEL_22;
                if ( Size[0] < v106 )
                  goto LABEL_307;
                ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v154;
                v58 = PopSetPowerSettingValue(v154 + 4, ProcessSessionId, *(unsigned int *)v158, *v103, v154 + 28);
                goto LABEL_200;
              case 0x1C:
                if ( qword_140C6ABC0 )
                  qword_140C6ABC0(1LL);
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
            v60 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 544040269LL);
            Src = v60;
            if ( v60 )
            {
              v149 = 1;
              *v60 = PopConsoleDisplayState;
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
        v59 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_201:
        InputBuffer = v15;
        if ( v59 )
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
        v58 = PopPowerRequestActionInfo(Pool2);
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
              v156 = *(_DWORD *)Pool2 != 0;
              PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v156);
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
            v76 = PopEsState;
            PopReleaseRwLock((ULONG_PTR)&PopEsLock);
            v77 = (char)v160[6];
            if ( v76 == 1 )
              v77 = 1;
            LOBYTE(v160[6]) = v77;
            LOBYTE(v160[7]) = TtmIsEnabled();
            if ( (unsigned __int8)TtmIsEnabled() )
            {
              IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
              v155 = IsAppContainerOrIdentifyLevelContext;
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_22;
              PopPowerRequestNotifyTtmSessionInitialized();
            }
            PopAcquirePolicyLock(v78);
            LODWORD(v160[2]) = 0;
            v160[0] = &PopNoMoreInput;
            v160[1] = &PopHiberBootForceMonitorOff;
            LODWORD(v160[3]) = byte_140C3D491 != 0;
            HIDWORD(v160[3]) = dword_140C3D48C;
            HIDWORD(v160[2]) = dword_140C3D4AC;
            v160[4] = (HANDLE)qword_140C3D4B0;
            HIDWORD(v160[6]) = HIDWORD(qword_140C3D4B8);
            v160[5] = (HANDLE)__PAIR64__(dword_140C3D4C0, qword_140C3D4B8);
            BYTE1(v160[6]) = PopLidOpened;
            _m_prefetchw(&PopLidStateIsReliable);
            BYTE1(v160[7]) = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
            Src = v160;
            Length_4 = 64;
            v79 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is started\n", v79);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
            PopReleasePolicyLock(v81, v80, v82);
            Pool2 = v154;
            goto LABEL_19;
        }
        v57 = (unsigned int)(v8 - 42);
        if ( (_DWORD)v8 != 42 )
          goto LABEL_232;
        if ( !Pool2 || v14 != 16 || v16 )
          goto LABEL_307;
        if ( !Pool2[13] || !Pool2[12] )
        {
LABEL_191:
          if ( Pool2[14] )
          {
            if ( Pool2[12] )
              ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)(Pool2 + 4));
            if ( Pool2[14] )
              PopDiagTraceSessionDisplayStateChange(
                *((_DWORD *)Pool2 + 1) == 0,
                *(_DWORD *)Pool2,
                (unsigned __int8)Pool2[12],
                *((_DWORD *)Pool2 + 2));
          }
          goto LABEL_123;
        }
        if ( PopPlatformAoAc && !PopConsoleDisplayState )
        {
          if ( *((_DWORD *)Pool2 + 1) != 2 )
          {
LABEL_188:
            LOBYTE(v57) = Pool2[15];
            PopProcessSessionDisplayStateChange(v57, *((unsigned int *)Pool2 + 2));
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
      v66 = v8 - 45;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( !v67 )
        {
          if ( !Pool2 )
            goto LABEL_307;
          if ( v14 < 2 )
            goto LABEL_307;
          if ( !v16 )
            goto LABEL_307;
          v68 = *(_WORD *)Pool2;
          if ( v68 >= KeQueryActiveGroupCount() )
            goto LABEL_307;
          v69 = PopProcessorInformation(v160, v9, v68, &Length_4);
          goto LABEL_251;
        }
        v116 = v67 - 1;
        if ( !v116 )
        {
          if ( !Pool2 || v14 != 16 )
            goto LABEL_307;
          v119 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v119;
          if ( v119 >= 0 )
            goto LABEL_123;
          InputBuffer = v15;
          if ( v119 == -1073741536 )
            goto LABEL_123;
          goto LABEL_22;
        }
        v117 = v116 - 1;
        if ( v117 )
        {
LABEL_563:
          if ( v117 != 1 )
            goto LABEL_307;
          goto LABEL_564;
        }
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_425;
        if ( !Pool2 || v16 )
          goto LABEL_307;
        if ( v14 == 16 )
        {
          v118 = 0LL;
LABEL_474:
          WakeSource = PpmParkApplyForcedMask(Pool2, v118);
          goto LABEL_443;
        }
        if ( v14 == 24 )
        {
          v118 = Pool2 + 16;
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
    v149 = 1;
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
                v84 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                PopSessionConnectionChange(v84, v154, v16);
                v85 = (unsigned int)PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                Pool2 = v154;
                LOBYTE(v10) = *v154;
                LOBYTE(v9) = v154[1];
                if ( qword_140C6ABB8 )
                  qword_140C6ABB8(v85, v9, v10);
                goto LABEL_19;
              }
            }
          }
        }
        goto LABEL_307;
      }
      if ( (int)v8 > 56 )
      {
        v35 = v8 - 57;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v50 = v36 - 1;
            if ( v50 )
            {
              v134 = v50 - 1;
              if ( v134 )
              {
                if ( v134 == 1 )
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
            SettingValue = PopGetSettingNotificationName(Pool2, v16);
          }
          goto LABEL_97;
        }
        if ( !ExVerifySuite(PhoneNT) )
          goto LABEL_564;
        if ( !Pool2 || v14 != 1 || v16 )
          goto LABEL_307;
        LOBYTE(v135) = *Pool2;
        IsAppContainerOrIdentifyLevelContext = PopUserPresentOverride(v135);
        v97 = IsAppContainerOrIdentifyLevelContext < 0;
LABEL_531:
        if ( v97 )
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
                                                   (unsigned int *)v160);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_21;
          Src = v160;
          Length_4 = 4;
          goto LABEL_19;
        }
        goto LABEL_307;
      }
      v121 = v8 - 51;
      if ( !v121 )
      {
        if ( !Pool2 || !v16 )
          goto LABEL_307;
        if ( v14 < 4 )
          goto LABEL_358;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v125);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(unsigned int *)Pool2, &Size[1]);
        PopReleasePolicyLock(v127, v126, v128);
        v129 = 5LL;
LABEL_507:
        PopReleaseTransitionLock(v129);
        InputBuffer = v15;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_22;
        v64 = (__int64 *)&Size[1];
LABEL_238:
        Src = v64;
        Length_4 = 8;
        goto LABEL_123;
      }
      v122 = v121 - 1;
      if ( v122 )
      {
        v123 = v122 - 1;
        if ( v123 )
        {
          v124 = v123 - 1;
          if ( v124 )
          {
            if ( v124 != 1 )
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
      v51 = v8 - 63;
      if ( !v51 )
      {
        if ( Pool2 || v16 )
          goto LABEL_307;
        v91 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u is closed\n", v91);
        PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
        PopFreeSessionState(v91);
        if ( (unsigned __int8)TtmIsEnabled() )
        {
          PopPowerRequestNotifyTtmSessionUninitialized();
          TtmCleanupCurrentSession();
        }
        goto LABEL_173;
      }
      v52 = v51 - 1;
      if ( !v52 )
      {
        if ( Pool2 && v14 == 8 && !v16 )
        {
          v90 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
          Pool2 = v154;
          PopSessionWinlogonNotification(v90, (__int64)v154);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        if ( PsIsCurrentThreadInServerSilo(v12, v9) )
          goto LABEL_210;
        if ( Pool2 || !v16 )
          goto LABEL_307;
        PopFilterCapabilities(&PopCapabilities, v160);
        if ( BYTE2(v160[2]) )
          PopReadHiberbootPolicy((char *)&v160[2] + 2);
        v56 = (HANDLE *)((char *)&v160[2] + 2);
LABEL_164:
        Src = v56;
        Length_4 = 1;
        goto LABEL_123;
      }
      v54 = v53 - 1;
      if ( !v54 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_307;
        IsDevicePotentialDripsConstraint = PopPlatformAoAc;
LABEL_163:
        LOBYTE(v160[0]) = IsDevicePotentialDripsConstraint;
        v56 = v160;
        goto LABEL_164;
      }
      if ( v54 != 1 || !Pool2 || v14 != 216 || v16 && Length != 160 )
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
          byte_140C3D6F4 = PopPlatformAoAc;
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
    LOBYTE(v9) = (_DWORD)v8 == 72;
    IsAppContainerOrIdentifyLevelContext = PopPowerRequestCreateUserModeRequest((int)Pool2, v9, v160);
    InputBuffer = v15;
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_22;
    v64 = (__int64 *)v160;
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
        IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, v160);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          Src = v160;
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
      v42 = v8 - 75;
      if ( !v42 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_307;
        LODWORD(v160[0]) = PopCapturePlatformRole();
        goto LABEL_122;
      }
      v137 = v42 - 1;
      if ( v137 )
      {
        v138 = v137 - 1;
        if ( v138 )
        {
          v117 = v138 - 1;
          if ( !v117 )
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
        v139 = PopErrataReportingIncorrectLidState;
        if ( !(unsigned __int8)TtmIsEnabled() )
        {
          v142 = 0;
          if ( !PopLidOpened )
            v142 = PopConsoleExternalDisplayConnected == 0;
          if ( !v142 )
            PopEventCalloutDispatch(10, 6LL);
          if ( !v139 )
          {
            LOBYTE(v10) = v142;
            PopDiagTraceDisplayBurstWin32kCallout(v140, v9, v10);
          }
          goto LABEL_123;
        }
        v141 = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( v141 != -1 )
          TtmNotifySessionDisplayBurst(v141, 6LL);
LABEL_173:
        Pool2 = v154;
        goto LABEL_123;
      }
      if ( Pool2 || !v16 )
        goto LABEL_307;
      LODWORD(v160[0]) = qword_140C3D028;
      v160[1] = (HANDLE)qword_140C3D1C0;
      v160[2] = (HANDLE)qword_140C3D1C8;
      if ( !PopSleepStats )
      {
        IsAppContainerOrIdentifyLevelContext = -1073741823;
        goto LABEL_21;
      }
      v98 = (__int128 *)v160;
LABEL_373:
      Src = v98;
      Length_4 = 24;
      goto LABEL_123;
    }
    v61 = v8 - 81;
    if ( !v61 )
      goto LABEL_564;
    v62 = v61 - 1;
    if ( !v62 )
      goto LABEL_564;
    v63 = v62 - 1;
    if ( v63 )
    {
      v143 = v63 - 1;
      if ( v143 )
      {
        if ( v143 == 1 )
        {
          v144 = *((_DWORD *)Pool2 + 2);
          v145 = *(_DWORD **)Pool2;
          if ( Pool2[12] )
            PopPowerRequestReferenceAcquire(v145, v144);
          else
            PopPowerRequestReferenceRelease(v145, v144);
          goto LABEL_123;
        }
        goto LABEL_307;
      }
      if ( !Pool2 || v16 )
        goto LABEL_307;
      if ( v14 < 0x10 || v14 < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
        goto LABEL_358;
      v58 = PopThermalProcessUsermodeEvent(Pool2);
      goto LABEL_200;
    }
    if ( Pool2 || !v16 )
      goto LABEL_307;
    PopCurrentPowerStatePrecise(v160, 0LL);
LABEL_114:
    Src = v160;
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
      IsAppContainerOrIdentifyLevelContext = PopEtEnergyTrackerCreate(Pool2, v160);
      InputBuffer = v15;
      if ( IsAppContainerOrIdentifyLevelContext >= 0 )
      {
        Src = v160;
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
          v44 = *(_DWORD *)Pool2;
          v9 = *((unsigned int *)Pool2 + 1);
          if ( (unsigned int)(*(_DWORD *)Pool2 - 92) > 0xFA3 && v44 < 4107 )
          {
            if ( (unsigned int)(v44 - 4096) <= 0xA )
            {
              if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
                && !PopCapabilityCheck(L"terminalPowerManagement") )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741727;
                goto LABEL_21;
              }
              v20 = Length;
              v45 = TtmDispatchApi(
                      v44,
                      (_DWORD)Pool2,
                      v14,
                      (_DWORD)v16,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v149);
            }
            else
            {
              v20 = Length;
              v45 = PopPowerInformationInternal(
                      v44,
                      v9,
                      (_DWORD)Pool2,
                      v14,
                      (__int64)v16,
                      Length,
                      (__int64)&Src,
                      (__int64)&Length_4,
                      (__int64)&v149);
            }
            IsAppContainerOrIdentifyLevelContext = v45;
            v23 = v45 < 0;
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
      PopAcquirePolicyLock(v130);
      IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(unsigned int *)Pool2, &Size[1]);
      PopReleasePolicyLock(v132, v131, v133);
      v129 = 6LL;
      goto LABEL_507;
    }
LABEL_542:
    if ( !Pool2 && !v16 )
    {
      v136 = 23LL;
      if ( (_DWORD)v8 != 88 )
        v136 = 11LL;
      PopScreenOff(v136);
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
      v21 = PopEtEnergyTrackerQuery(*(_QWORD *)Pool2, v16, Length);
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
  v65 = v19 - 1;
  if ( !v65 )
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
  v146 = v65 - 1;
  if ( !v146 )
  {
    if ( !Pool2 || v16 )
      goto LABEL_307;
    if ( !v14 )
      goto LABEL_358;
    LOBYTE(v12) = *Pool2;
    v58 = PopSendSuspendResumeNotifications(v12);
    goto LABEL_200;
  }
  if ( v146 != 1 )
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
  IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, v160);
  InputBuffer = v15;
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    Src = v160;
    Length_4 = 16;
    goto LABEL_19;
  }
LABEL_22:
  v24 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v149 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v152 )
    PopReleasePolicyLock(v24, v9, v10);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != v161 )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
