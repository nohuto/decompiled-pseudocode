/*
 * XREFs of ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x1800515E0
 * Callers:
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x180057F70 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180057F80 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180057F90 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180057FA0 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180057FB0 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x1800580B0 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x1800580C0 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180058180 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180058190 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCompoundBitmapLock::AddRef(CCompoundBitmapLock *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
