/*
 * XREFs of PoPowerOffMonitor @ 0x140382960
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140725A94 (PopDispatchStateCallout.c)
 *     PoUnblockConsoleSwitch @ 0x140774BB0 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140774BD8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140774BF8 (PoStartPowerStateTasks.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  __int128 v3; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3 = 0LL;
  DWORD2(v3) = 1;
  v4 = 0LL;
  v2 = PoBlockConsoleSwitch(&v3);
  PoStartPowerStateTasks(&v3);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(&v3, &v2);
  PoEndPowerStateTasks(&v3);
  PoUnblockConsoleSwitch(&v3, v2);
  return v0;
}
