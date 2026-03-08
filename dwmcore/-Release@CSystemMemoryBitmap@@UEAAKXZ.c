/*
 * XREFs of ?Release@CSystemMemoryBitmap@@UEAAKXZ @ 0x1800F59C0
 * Callers:
 *     ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x180119230 (-Release@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?Release@CBitmap@@W7EAAKXZ @ 0x180119250 (-Release@CBitmap@@W7EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x180119270 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x180119290 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WIA@EAAKXZ @ 0x1801192B0 (-Release@CWICBitmapWrapper@@WIA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x18011A6B0 (-Release@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?Release@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011A710 (-Release@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011A790 (-Release@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::Release(CSystemMemoryBitmap *this)
{
  return CMILRefCountBaseT<IBitmapSource>::InternalRelease((char *)this - 24);
}
