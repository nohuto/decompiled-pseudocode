/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C00A9A0C
 * Callers:
 *     GreMakeBitmapStock @ 0x1C00A9790 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C00A98A0 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02B73B0 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02BA520 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
