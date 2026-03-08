/*
 * XREFs of HalpInitSystemPhase0 @ 0x140B72924
 * Callers:
 *     HalInitSystem @ 0x140A887A0 (HalInitSystem.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A88D44 (HalpInitSystemHelper.c)
 */

bool __fastcall HalpInitSystemPhase0(__int64 a1)
{
  return (int)HalpInitSystemHelper(7u, 16, a1) >= 0;
}
