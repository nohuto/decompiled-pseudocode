/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1406A0CB0
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098F9D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
