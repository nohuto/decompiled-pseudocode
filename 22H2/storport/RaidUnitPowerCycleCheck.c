/*
 * XREFs of RaidUnitPowerCycleCheck @ 0x1C003FCB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E58 (RaidUnitAdaptiveIdleTimeout.c)
 */

void __fastcall RaidUnitPowerCycleCheck(__int64 a1, __int64 a2)
{
  RaidUnitAdaptiveIdleTimeout(a2);
}
