/*
 * XREFs of PopThermalZoneTimerCallback @ 0x14045AA10
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
