/*
 * XREFs of PoStartPowerStateTasks @ 0x140989794
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F350 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x140A9D3C4 (PnprQuiesceDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140682AC8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
