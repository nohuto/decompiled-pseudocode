/*
 * XREFs of CmpProtectPool @ 0x14036D7E4
 * Callers:
 *     HvpFreeBin @ 0x1407E9ED8 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140296D3C (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
