/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1403C24C4
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140879704 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x1402BCC10 (PopGetPowerSettingValue.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C2A80 (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1403C2AE8 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1403C2BA4 (PopDiagGetPowerSchemeInfo.c)
 *     PopCalculateIdleInformation @ 0x1403C2C3C (PopCalculateIdleInformation.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1403C2CD0 (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopFxStartDeviceAccounting @ 0x1403C2E60 (PopFxStartDeviceAccounting.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140581E30 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140582B3C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140583970 (PpmSnapDripsAccountingSnapshot.c)
 *     PopDiagTraceFxRundown @ 0x140586438 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14058975C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059B664 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopQueryInputSuppressionCount @ 0x14079C78C (PopQueryInputSuppressionCount.c)
 *     PopIsHibernateSupported @ 0x140870C14 (PopIsHibernateSupported.c)
 *     PopDirectedDripsNotify @ 0x140872AF4 (PopDirectedDripsNotify.c)
 *     PopGetEnergyCounter @ 0x140872DDC (PopGetEnergyCounter.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140879AD8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140879AFC (PopQueryPowerButtonSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x140879B0C (PopNetIsCompliantNicPresent.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140879B20 (PopIsLockConsoleTimeoutActive.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140879C0C (ExStartRecordingIRTimerExpiries.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140879C70 (PopNetIsDisconnectStandbyActive.c)
 *     PopSetConnectedStandbyMarker @ 0x140879CCC (PopSetConnectedStandbyMarker.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140879DFC (PopQueryRemainingSystemIdleTime.c)
 *     PopDiagTraceCsEnterReason @ 0x140879FA8 (PopDiagTraceCsEnterReason.c)
 *     PopClearConnectedStandbyMarker @ 0x14097D6A8 (PopClearConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140982038 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1409821EC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxResetSocSubsystemAccounting @ 0x140982D5C (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x14098A384 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsExitReason @ 0x14098A4C8 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckAdaptiveCsState @ 0x140993634 (PopNetCheckAdaptiveCsState.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14099366C (PopNetCheckUserConnectivityPolicy.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1409F87CC (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  char IsHibernateSupported; // r13
  char IsLockConsoleTimeoutActive; // r12
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  KIRQL v34; // al
  __int64 v35; // r8
  unsigned __int64 v36; // r14
  unsigned int i; // esi
  __int64 v38; // rcx
  __int64 j; // rdx
  __int64 v40; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  int v43; // eax
  _DWORD *v44; // r8
  __int64 v45; // r8
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int ModernStandbyTransitionReason; // eax
  KIRQL v53; // al
  unsigned __int64 v54; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v58; // eax
  unsigned int v59; // [rsp+30h] [rbp-D0h] BYREF
  int v60; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh] BYREF
  int v65; // [rsp+48h] [rbp-B8h] BYREF
  int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int128 v72; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+80h] [rbp-80h]
  __int128 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  _BYTE v76[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v77; // [rsp+100h] [rbp+0h] BYREF
  __int128 v78; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  v68 = 0;
  v70 = 0LL;
  v61 = 0;
  v59 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  memset(v76, 0, 0x4CuLL);
  v62 = 0;
  v75 = 0LL;
  IsHibernateSupported = 0;
  v60 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v69) = *(_DWORD *)(a3 + 8);
  v14 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v13 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v67 = 0;
  v66 = 0;
  v64 = 0;
  v65 = 0;
  v63 = 0;
  v74 = 0LL;
  if ( v13 )
    v14 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v14 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140C6AC48 )
  {
    qword_140C6AC48(a4 + 19);
    v9 = a4[19] / 0xAuLL;
    a4[19] = v9;
  }
  PopAcquirePolicyLock(v10, v9);
  v15 = MEMORY[0xFFFFF78000000008];
  v16 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v16 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v16 )
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, (unsigned int)PopSleepstudyStopReason);
    v69 = (__int64)a4;
    PopDirectedDripsNotify(1LL, &v69);
    PpmIdleCaptureCsVetoAccounting(v48, (unsigned int)dword_140CF7A00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v49, 10LL * a4[4], 10LL * a4[5]);
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140CF7A00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v50, (unsigned int)dword_140CF7A00);
      v4 = PopFxLogSocSubsystemMetadata(v51, (unsigned int)dword_140CF7A00);
    }
    ModernStandbyTransitionReason = PopGetModernStandbyTransitionReason(0LL);
    PopClearConnectedStandbyMarker(ModernStandbyTransitionReason);
    qword_140CF7888 = 0LL;
    v53 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C618);
    dword_140C3C620 = 0;
    v54 = v53;
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C618);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v54 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v13 = (v58 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v58;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v54);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation(&v72);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140CF7A00, &v70, &v71);
    PopCsConsumption = v60;
    qword_140CF7890 = *((_QWORD *)&v72 + 1);
    dword_140CF78A0 = DWORD2(v73);
    qword_140CF7898 = v72;
    qword_140CF7918 = v73;
    qword_140CF7920 = v70;
    qword_140CF7928 = v71;
    dword_140CF7958 = v69;
    qword_140CF7888 = v15;
    qword_140CF78C0 = 0LL;
    qword_140CF78A8 = 0LL;
    qword_140CF78B0 = 0LL;
    qword_140CF78D0 = 0LL;
    qword_140CF7908 = 0LL;
    qword_140CF7910 = 0LL;
    qword_140CF78E0 = 0LL;
    qword_140CF78F0 = 0LL;
    qword_140CF7900 = 0LL;
    qword_140CF7968 = 0LL;
    qword_140CF7970 = 0LL;
    qword_140CF7978 = 0LL;
    byte_140CF7954 = 0;
    PopNetIsDisconnectStandbyActive(&v61);
    v17 = KeAcquireSpinLockRaiseToDpc(&qword_140C3C618);
    qword_140C3C608 = 0LL;
    qword_140C3C610 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C3C620 = 1;
    KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3C618);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v17);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140CF7948 = (dword_140C3D48C == 0) | byte_140CF7948 & 0xFE;
    byte_140CF7949 ^= (byte_140CF7949 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v61 - 1) & 0xFFFFFFFC) != 0 || v61 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && (unsigned int)PopNetCheckAdaptiveCsState() != 1 )
    {
      byte_140CF7949 &= ~2u;
    }
    else
    {
      byte_140CF7949 |= 2u;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v18, 3, &v62, 4u, &v59);
    byte_140CF7949 ^= (byte_140CF7949 ^ (4 * v62)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v19, 3, &v63, 4u, &v59);
    dword_140CF7930 = v63;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v20, 3, &v64, 4u, &v59);
    dword_140CF7934 = v64;
    byte_140CF7938 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v21, 3, &v65, 4u, &v59);
    dword_140CF793C = v65;
    PopQueryRemainingSystemIdleTime(&dword_140CF7940, &dword_140CF7944);
    byte_140CF795D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v76);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v76);
    byte_140CF795C = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v22, 3, &v66, 4u, &v59);
    dword_140CF7960 = v66;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v23, 3, &v67, 4u, &v59);
    dword_140CF7964 = v67;
    PopGetPowerSettingValue((__int64)&GUID_ACTIVE_POWERSCHEME, v24, 3, &v78, 0x10u, &v59);
    PopGetPowerSettingValue((__int64)&GUID_POWERSCHEME_PERSONALITY, v25, 3, &v77, 0x10u, &v59);
    PopDiagGetPowerSchemeInfo(&v78, &v77, &v68);
    dword_140CF7988 = v68;
    _InterlockedExchange64(&qword_140CF79C0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140CF7A00) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140CF7A00);
    PopFxStartDeviceAccounting();
    if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v34 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v35 = PpmPlatformStates;
      v36 = v34;
      for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
      {
        v38 = 448LL * i + v35 + 80;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v38 + 28); *(_QWORD *)(*(_QWORD *)(v38 + 32) + (v40 << 6) + 56) = 0LL )
        {
          v40 = (unsigned int)j;
          j = (unsigned int)(j + 1);
        }
        LOBYTE(v35) = 1;
        LOBYTE(j) = 4;
        PpmIdleCsVetoAccountingUpdateBlock(v38, j, v35);
        v35 = PpmPlatformStates;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
      if ( KiIrqlFlags )
      {
        v41 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v44 = v42->SchedulerAssist;
          v13 = (v43 & v44[5]) == 0;
          v44[5] &= v43;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(v36);
    }
    dword_140CF794C = PopAggressiveStandbyEnabledActions;
    dword_140CF7950 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    if ( PpmPlatformStates && dword_140CF7A00 != -1 )
    {
      v45 = 26LL;
      v46 = (__int64 *)(1016LL * (unsigned int)dword_140CF7A00 + 208 + *(_QWORD *)(PpmPlatformStates + 48));
      v26 = &PpmDripsAccountingSnapshot;
      do
      {
        v47 = *v46;
        v46 += 4;
        *v26++ = v47;
        --v45;
      }
      while ( v45 );
    }
    LOBYTE(v26) = 1;
    v27 = (unsigned int)PopGetModernStandbyTransitionReason(v26);
    PopDiagTraceCsEnterReason(v27);
    PopSetConnectedStandbyMarker(v28, (unsigned int)v27);
    v69 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v69);
    PopIdleWakeNotifyModernStandbyEnter();
    v60 = 0;
    PopQueryInputSuppressionCount(&v60);
    dword_140CF7980 = v60;
    v60 = 0;
    PopQueryPowerButtonSuppressionCount(&v60);
    dword_140CF7984 = v60;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
