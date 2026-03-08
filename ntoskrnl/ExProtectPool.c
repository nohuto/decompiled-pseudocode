/*
 * XREFs of ExProtectPool @ 0x1406054CC
 * Callers:
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14030B674 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
