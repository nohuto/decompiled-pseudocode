/*
 * XREFs of TriggerSDRWhiteLevelChangedWnf @ 0x1C02FD4F0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C51F0 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall TriggerSDRWhiteLevelChangedWnf(__int64 a1)
{
  int updated; // eax
  __int64 v2; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v2 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_SDR_WHITE_LEVEL_CHANGED WNF, Status = 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v2;
}
