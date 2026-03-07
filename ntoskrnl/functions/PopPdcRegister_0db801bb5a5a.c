__int64 __fastcall PopPdcRegister(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8

  v2 = 0;
  if ( a2 )
  {
    PopAcquirePolicyLock(a1);
    PopModernStandbyTransitionInfo = 0LL;
    *(_OWORD *)&PoPdcCallbacks = *(_OWORD *)(a1 + 8);
    *((_OWORD *)&PoPdcCallbacks + 1) = *(_OWORD *)(a1 + 24);
    *((_OWORD *)&PoPdcCallbacks + 2) = *(_OWORD *)(a1 + 40);
    *((_OWORD *)&PoPdcCallbacks + 3) = *(_OWORD *)(a1 + 56);
    *((_OWORD *)&PoPdcCallbacks + 4) = *(_OWORD *)(a1 + 72);
    *((_OWORD *)&PoPdcCallbacks + 5) = *(_OWORD *)(a1 + 88);
    *((_OWORD *)&PoPdcCallbacks + 6) = *(_OWORD *)(a1 + 104);
    *((_OWORD *)&PoPdcCallbacks + 7) = *(_OWORD *)(a1 + 120);
    *((_OWORD *)&PoPdcCallbacks + 8) = *(_OWORD *)(a1 + 136);
    *((_OWORD *)&PoPdcCallbacks + 9) = *(_OWORD *)(a1 + 152);
    *((_OWORD *)&PoPdcCallbacks + 10) = *(_OWORD *)(a1 + 168);
    *((_OWORD *)&PoPdcCallbacks + 11) = *(_OWORD *)(a1 + 184);
    *((_OWORD *)&PoPdcCallbacks + 12) = *(_OWORD *)(a1 + 200);
    *a2 = PdcPoResiliencyClient;
    a2[1] = PdcPoLowPower;
    a2[2] = PdcPoSetPowerAction;
    a2[3] = PdcPoReportButton;
    a2[4] = PdcPoReportLidState;
    a2[5] = PdcPoRecordButton;
    a2[6] = PdcPoVerifyActionPolicy;
    a2[7] = PdcPoVerifyPowerState;
    a2[8] = PopBlockSessionSwitch;
    a2[9] = PopControlMonitor;
    a2[10] = PopNotifyCsStateExited;
    a2[11] = PdcPoCurrentPdcPhase;
    a2[12] = PdcPoIdleScanEnabled;
    a2[13] = PdcPoPpmRegisterProfiles;
    a2[14] = PdcPoPpmApplyProfile;
    a2[15] = PdcPoPpmResetProfile;
    a2[16] = PdcPoNetworkResiliency;
    a2[17] = PpmQueryDripsResidency;
    a2[18] = PdcPoSleepStudyHelperSetPhaseActive;
    a2[19] = PdcPoLidReliabilityUpdateCallback;
    PopReleasePolicyLock(&PoPdcCallbacks + 16, 128LL, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
