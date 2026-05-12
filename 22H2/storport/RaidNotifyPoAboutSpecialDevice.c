/*
 * XREFs of RaidNotifyPoAboutSpecialDevice @ 0x1C0058FC0
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0014D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0015B9C (RaidAdapterDeviceUsageNotificationIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidNotifyPoAboutSpecialDevice(__int64 a1, int a2)
{
  _DWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = a1;
  v3[1] = 0;
  v5 = 16LL;
  v3[0] = 59 - (a2 != 0);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, v3, 0x18u, 0LL, 0);
}
