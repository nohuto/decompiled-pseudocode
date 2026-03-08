/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1801000F0
 * Callers:
 *     ?Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x18011FD70 (-Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x18011FDF0 (-Release@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::Release(CSecondarySysmemBitmap *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease((char *)this - 24);
}
