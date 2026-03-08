/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F70A0
 * Callers:
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119190 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801191B0 (-QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801191D0 (-QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801191F0 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180119210 (-QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A690 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A6F0 (-QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A770 (-QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapSource>::InternalQueryInterface((char *)this - 24, a2, a3);
}
