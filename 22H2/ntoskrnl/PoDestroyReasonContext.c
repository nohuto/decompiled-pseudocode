/*
 * XREFs of PoDestroyReasonContext @ 0x14034BC54
 * Callers:
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x140248B10 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x14025FA00 (ExpDeleteTimer.c)
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x140376410 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14056EE50 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x1406F73C0 (PopPowerRequestCreateInfo.c)
 *     NtSetThreadExecutionState @ 0x1406F8710 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x140772400 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x14079AB80 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408E2A20 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A710FC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7528 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
  {
    if ( *(_DWORD *)P )
    {
      v3 = (void *)P[3];
      if ( v3 )
        ExFreePoolWithTag(v3, 0x78435250u);
    }
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
