/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x18003C0B0
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z @ 0x180123C40 (--_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C1CC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x120uLL);
  return this;
}
