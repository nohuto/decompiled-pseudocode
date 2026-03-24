/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x1404D1950
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x1404D18B4 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
