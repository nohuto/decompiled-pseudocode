/*
 * XREFs of PdcPoLowPower @ 0x1403AADA0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned __int8)a1;
  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH, 4LL, &v3);
  PopReleasePolicyLock();
  return 0LL;
}
