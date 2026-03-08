/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x18001F9E0
 * Callers:
 *     ??_ECDecodeBitmap@@WFA@EAAPEAXI@Z @ 0x18011F230 (--_ECDecodeBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003C0DC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
