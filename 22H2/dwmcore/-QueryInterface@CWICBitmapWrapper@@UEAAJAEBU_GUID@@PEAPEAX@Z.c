/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F7CE0
 * Callers:
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D340 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D360 (-QueryInterface@CSystemMemoryBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D380 (-QueryInterface@CSystemMemoryBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D3A0 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D3C0 (-QueryInterface@CSystemMemoryBitmap@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E840 (-QueryInterface@CSystemMemoryBitmap@@$4PPPPPPPM@KA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E8A0 (-QueryInterface@CBitmap@@$4PPPPPPPM@HI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011E920 (-QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@JI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseT<IBitmapSource>::InternalQueryInterface((char *)this - 24, a2, a3);
}
