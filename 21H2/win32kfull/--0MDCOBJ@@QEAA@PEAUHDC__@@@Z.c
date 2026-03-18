/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AC700
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00EB910 (NtGdiSelectBitmap.c)
 *     GreRealizePalette @ 0x1C01470CC (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
