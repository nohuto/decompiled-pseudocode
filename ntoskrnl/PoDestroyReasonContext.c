/*
 * XREFs of PoDestroyReasonContext @ 0x1402BDBE4
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B8EEC (PopPowerRequestCreateUserModeRequest.c)
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1402CDBB0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x1402F5CD0 (ExpDeleteTimer.c)
 *     NtSetTimer @ 0x1403AD470 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C09C0 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058B800 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 *     PopPowerRequestDelete @ 0x14073B0E0 (PopPowerRequestDelete.c)
 *     PoCreateThermalRequest @ 0x14084B9E0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14097FC00 (PoDeleteThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B46D2C (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B6EC5C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
