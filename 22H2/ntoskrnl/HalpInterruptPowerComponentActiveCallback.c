/*
 * XREFs of HalpInterruptPowerComponentActiveCallback @ 0x14051A930
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptPowerChange @ 0x14051A894 (HalpInterruptPowerChange.c)
 */

__int64 __fastcall HalpInterruptPowerComponentActiveCallback(ULONG_PTR a1)
{
  return HalpInterruptPowerChange(a1, 1);
}
