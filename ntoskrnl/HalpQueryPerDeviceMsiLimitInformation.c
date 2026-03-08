/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1407923B0
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
