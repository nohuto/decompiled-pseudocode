/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C02AA0AC
 * Callers:
 *     GreSetDIBColorTable @ 0x1C02D3CA0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02D72D0 (NtGdiGetColorSpaceforBitmap.c)
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
