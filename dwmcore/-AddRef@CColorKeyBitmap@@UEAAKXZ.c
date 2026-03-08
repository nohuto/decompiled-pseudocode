/*
 * XREFs of ?AddRef@CColorKeyBitmap@@UEAAKXZ @ 0x1800FFBC0
 * Callers:
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x180119070 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@W7EAAKXZ @ 0x180119090 (-AddRef@CSystemMemoryBitmap@@W7EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x1801190B0 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ @ 0x1801190D0 (-AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x1801190F0 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x18011A650 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011A6D0 (-AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011A730 (-AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x18011A7B0 (-AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x18011FD10 (-AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x18011FD90 (-AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::AddRef(CColorKeyBitmap *this)
{
  return CMILRefCountImpl::AddReference((CColorKeyBitmap *)((char *)this - 8));
}
