/*
 * XREFs of CmpProtectPool @ 0x140301FE4
 * Callers:
 *     HvpFreeBin @ 0x14079AE68 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14030B674 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
