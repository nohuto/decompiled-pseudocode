/*
 * XREFs of CmpProtectPoolEx @ 0x140296D24
 * Callers:
 *     HvpProtectBinPartial @ 0x14070B090 (HvpProtectBinPartial.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140296D3C (ExProtectPoolEx.c)
 */

__int64 CmpProtectPoolEx()
{
  return ExProtectPoolEx();
}
