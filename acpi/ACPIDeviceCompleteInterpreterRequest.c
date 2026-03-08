/*
 * XREFs of ACPIDeviceCompleteInterpreterRequest @ 0x1C001C610
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001C540 (ACPIDeviceCompleteGenericPhase.c)
 */

void __fastcall ACPIDeviceCompleteInterpreterRequest(__int64 a1)
{
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
}
