/*
 * XREFs of ?AddRef@CColorKeyBitmap@@UEAAKXZ @ 0x180100800
 * Callers:
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ @ 0x18011D220 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@W7EAAKXZ @ 0x18011D240 (-AddRef@CSystemMemoryBitmap@@W7EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18011D260 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ @ 0x18011D280 (-AddRef@CSystemMemoryBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x18011D2A0 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ @ 0x18011E800 (-AddRef@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ @ 0x18011E880 (-AddRef@CBitmap@@$4PPPPPPPM@HI@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ @ 0x18011E8E0 (-AddRef@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ @ 0x18011E960 (-AddRef@CBitmapLock@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x180123EC0 (-AddRef@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ @ 0x180123F40 (-AddRef@CSecondarySysmemBitmap@@$4PPPPPPPM@JA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::AddRef(CColorKeyBitmap *this)
{
  return CMILRefCountImpl::AddReference((CColorKeyBitmap *)((char *)this - 8));
}
