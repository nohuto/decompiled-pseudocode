/*
 * XREFs of PoEndPowerStateTasks @ 0x140986590
 * Callers:
 *     PoPowerOffMonitor @ 0x14058CE20 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
