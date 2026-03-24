/*
 * XREFs of PoEndPowerStateTasks @ 0x140774BD8
 * Callers:
 *     PoPowerOffMonitor @ 0x140382960 (PoPowerOffMonitor.c)
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PnprWakeDevices @ 0x1409AEEDC (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140725A94 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
