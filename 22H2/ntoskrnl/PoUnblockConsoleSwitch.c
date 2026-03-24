/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140774BB0
 * Callers:
 *     PoPowerOffMonitor @ 0x140382960 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AEEDC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140725A94 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
