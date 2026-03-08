/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x140518400
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x140518364 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
