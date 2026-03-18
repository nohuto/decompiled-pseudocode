/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C02A79CC
 * Callers:
 *     GreSetDIBColorTable @ 0x1C02D1F00 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02D5620 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
    return *((_QWORD *)this + 24) != 0LL;
  return result;
}
