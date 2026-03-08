/*
 * XREFs of PoStartPowerStateTasks @ 0x1409866E4
 * Callers:
 *     PoPowerOffMonitor @ 0x14058CE20 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140A9A284 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14067F6E8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
