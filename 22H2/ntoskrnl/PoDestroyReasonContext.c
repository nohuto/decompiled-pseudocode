/*
 * XREFs of PoDestroyReasonContext @ 0x14032D130
 * Callers:
 *     NtCancelTimer @ 0x14032E090 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14032E400 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x140360A70 (ExpDeleteTimer.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimer @ 0x1403B2290 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C6280 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058DD30 (PoRegisterSystemState.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     NtSetThreadExecutionState @ 0x1407A92D0 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14084ED90 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x140982CB0 (PoDeleteThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B51BB0 (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B72EA4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994 (Feature_2932140347__private_IsEnabledDeviceUsage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  void *v5; // rcx

  v4 = P;
  if ( !*(_DWORD *)P )
  {
    P = (_QWORD *)P[1];
    if ( P )
      ObfDereferenceObjectWithTag(P, 0x67446F50u);
  }
  if ( (unsigned int)Feature_2932140347__private_IsEnabledDeviceUsage(P, a2, a3, a4) )
  {
    if ( *(_DWORD *)v4 )
    {
      v5 = (void *)v4[3];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x78435250u);
    }
  }
  ExFreePoolWithTag(v4, 0x78435250u);
}
