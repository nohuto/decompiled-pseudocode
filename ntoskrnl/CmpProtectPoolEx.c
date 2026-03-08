/*
 * XREFs of CmpProtectPoolEx @ 0x14030BC68
 * Callers:
 *     HvpProtectBinPartial @ 0x1407A4030 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14030B674 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  return ExProtectPoolEx(a1, a2, a3, a4);
}
