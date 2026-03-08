/*
 * XREFs of TriggerSDRWhiteLevelChangedWnf @ 0x1C02F86C0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorSetSDRWhiteLevelOverride @ 0x1C03C0994 (MonitorSetSDRWhiteLevelOverride.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall TriggerSDRWhiteLevelChangedWnf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int updated; // eax
  __int64 v5; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v5 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_SDR_WHITE_LEVEL_CHANGED WNF, Status = 0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v5;
}
