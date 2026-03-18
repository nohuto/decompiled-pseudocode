/*
 * XREFs of HalpTimerPowerCriticalTransitionCallback @ 0x140509360
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerPowerChange @ 0x1405092A0 (HalpTimerPowerChange.c)
 */

__int64 __fastcall HalpTimerPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  LOBYTE(a2) = a3;
  return HalpTimerPowerChange(a1, a2);
}
