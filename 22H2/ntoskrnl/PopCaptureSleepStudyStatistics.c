/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x140570498
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x1408FA218 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E0C70 (KeReleaseSpinLock.c)
 *     PopGetPowerSettingValue @ 0x14034AED4 (PopGetPowerSettingValue.c)
 *     memset @ 0x140413800 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140565CB0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140565CF0 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x140566DDC (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140567518 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140567880 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x14056CCBC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x14056CF7C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x14056FDE0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140570350 (PopCalculateIdleInformation.c)
 *     PopGetModernStandbyTransitionReason @ 0x140576440 (PopGetModernStandbyTransitionReason.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x14057B81C (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057B950 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopIsHibernateSupported @ 0x1406F4158 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1406F4274 (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x14078DA18 (PopDirectedDripsNotify.c)
 *     PopNetCheckOpportunisticDs @ 0x14078E30C (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x14078E330 (PopNetCheckUserConnectivityPolicy.c)
 *     PopCurrentPowerStatePrecise @ 0x14078E344 (PopCurrentPowerStatePrecise.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E1134 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E1748 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408E4B60 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408E4D10 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E510C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408E57F8 (PopFxResetSocSubsystemAccounting.c)
 *     PopDiagTraceCsConsumption @ 0x1408E8BC8 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408E8D0C (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408E8F84 (PopDiagTraceCsExitReason.c)
 *     PopGetEnergyCounter @ 0x1408EDCC0 (PopGetEnergyCounter.c)
 *     PopQueryInputSuppressionCount @ 0x1408EEDEC (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x1408F1EB8 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408F1ECC (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408F51DC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F66E0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14094F074 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14094F100 (ExStopRecordingIRTimerExpiries.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  char IsHibernateSupported; // r14
  char IsLockConsoleTimeoutActive; // r15
  int v9; // ecx
  __int64 v10; // r13
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  KIRQL v31; // al
  __int64 v33; // [rsp+28h] [rbp-A9h]
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  __int64 v36; // [rsp+28h] [rbp-A9h]
  __int64 v37; // [rsp+28h] [rbp-A9h]
  __int64 v38; // [rsp+28h] [rbp-A9h]
  int v39; // [rsp+38h] [rbp-99h] BYREF
  int v40; // [rsp+3Ch] [rbp-95h] BYREF
  int v41; // [rsp+40h] [rbp-91h] BYREF
  int v42; // [rsp+44h] [rbp-8Dh] BYREF
  int v43; // [rsp+48h] [rbp-89h] BYREF
  int v44; // [rsp+4Ch] [rbp-85h] BYREF
  int v45; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-7Dh] BYREF
  __int64 v47; // [rsp+58h] [rbp-79h] BYREF
  __int64 v48; // [rsp+60h] [rbp-71h] BYREF
  __int64 v49; // [rsp+68h] [rbp-69h] BYREF
  __int128 v50; // [rsp+70h] [rbp-61h] BYREF
  __int128 v51; // [rsp+80h] [rbp-51h]
  _OWORD v52[2]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v53[80]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v54; // [rsp+150h] [rbp+7Fh] BYREF

  v3 = 0;
  v48 = 0LL;
  v39 = 0;
  v54 = 0;
  v49 = 0LL;
  memset(v52, 0, sizeof(v52));
  v50 = 0LL;
  v51 = 0LL;
  memset(v53, 0, 0x4CuLL);
  v40 = 0;
  v45 = 0;
  v44 = 0;
  IsHibernateSupported = 0;
  IsLockConsoleTimeoutActive = 0;
  v42 = 0;
  v43 = 0;
  v41 = 0;
  PopCurrentPowerStatePrecise(v52, 0LL);
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 && a1[1] == *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  PopAcquirePolicyLock(v9);
  v10 = MEMORY[0xFFFFF78000000008];
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 && a1[1] == *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4 )
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation((__int64)&v50);
    PpmGetPlatformSelectionVetoCounts(dword_140C50080, &v48, &v49);
    PopCsConsumption = HIDWORD(v52[0]);
    qword_140C4FF10 = *((_QWORD *)&v50 + 1);
    dword_140C4FF20 = DWORD2(v51);
    qword_140C4FF18 = v50;
    qword_140C4FF98 = v51;
    qword_140C4FFA0 = v48;
    qword_140C4FFA8 = v49;
    dword_140C4FFD0 = DWORD2(v52[0]);
    qword_140C4FF08 = v10;
    qword_140C4FF40 = 0LL;
    qword_140C4FF28 = 0LL;
    qword_140C4FF30 = 0LL;
    qword_140C4FF50 = 0LL;
    qword_140C4FF88 = 0LL;
    qword_140C4FF90 = 0LL;
    qword_140C4FF60 = 0LL;
    qword_140C4FF70 = 0LL;
    qword_140C4FF80 = 0LL;
    qword_140C4FFE0 = 0LL;
    qword_140C4FFE8 = 0LL;
    qword_140C4FFF0 = 0LL;
    byte_140C4FFCC = 0;
    PopNetIsDisconnectStandbyActive(&v39);
    v11 = KeAcquireSpinLockRaiseToDpc(&qword_140C235D8);
    qword_140C235C8 = 0LL;
    qword_140C235D0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140C235E0 = 1;
    KeReleaseSpinLock(&qword_140C235D8, v11);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140C4FFC0 = (dword_140C2334C == 0) | byte_140C4FFC0 & 0xFE;
    byte_140C4FFC1 ^= (byte_140C4FFC1 ^ PopNetIsCompliantNicPresent()) & 1;
    if ( (((v39 - 1) & 0xFFFFFFFC) != 0 || v39 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy()
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      byte_140C4FFC1 &= ~2u;
    }
    else
    {
      byte_140C4FFC1 |= 2u;
    }
    if ( PopDiagCachedAggregatorIntent )
    {
      dword_140C4FFFC = PopDiagCachedAggregatorIntent;
      dword_140C50000 = 6;
      PopDiagCachedAggregatorAction = 6;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v12, 3, &v40, v33, &v54);
    byte_140C4FFC1 ^= (byte_140C4FFC1 ^ (4 * v40)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v13, 3, &v41, v34, &v54);
    dword_140C4FFB0 = v41;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v14, 3, &v42, v35, &v54);
    dword_140C4FFB4 = v42;
    byte_140C4FFB8 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v15, 3, &v43, v36, &v54);
    dword_140C4FFBC = v43;
    byte_140C4FFD5 = (char)KdDebuggerEnabled;
    v3 = PopFilterCapabilities(&PopCapabilities, v53);
    if ( v3 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v53);
    byte_140C4FFD4 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v16, 3, &v44, v37, &v54);
    dword_140C4FFD8 = v44;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v17, 3, &v45, v38, &v54);
    dword_140C4FFDC = v45;
    _InterlockedExchange64(&qword_140C50040, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C50080) )
      v3 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140C50080);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140C4FFC4 = PopAggressiveStandbyEnabledActions;
    dword_140C4FFC8 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v18) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v18, 0LL);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v20, (unsigned int)ModernStandbyTransitionReason);
    LOBYTE(v21) = 1;
    PopStatsNotifyPowerRequestCsState(v22, v21);
    v47 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v47);
    PopIdleWakeNotifyModernStandbyEnter();
    v46 = 0;
    PopQueryInputSuppressionCount(&v46, v23);
    v25 = v46;
    dword_140C4FFF8 = v46;
  }
  else
  {
    PopIdleWakeNotifyModernStandbyExit();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v47 = a3;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v26, dword_140C50080);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v27, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    PopDiagTraceCsExitReason(a3, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140C50080) )
    {
      PopFxLogSocSubsystemBlockingTimes(v28, (unsigned int)dword_140C50080);
      v3 = PopFxLogSocSubsystemMetadata(v29, (unsigned int)dword_140C50080);
    }
    PopStatsNotifyPowerRequestCsState(v28, 0LL);
    v30 = PopGetModernStandbyTransitionReason(0LL, 0LL);
    PopClearConnectedStandbyMarker(v30);
    qword_140C4FF08 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140C235D8);
    dword_140C235E0 = 0;
    KeReleaseSpinLock(&qword_140C235D8, v31);
  }
  PopReleasePolicyLock(v25, v24);
  return (unsigned int)v3;
}
