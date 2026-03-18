/*
 * XREFs of ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x1802B3C00
 * Callers:
 *     ??_ECDxHandleYUVBitmapRealization@@OBEA@EAAPEAXI@Z @ 0x180122EA0 (--_ECDxHandleYUVBitmapRealization@@OBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802B3A30 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::`scalar deleting destructor'(
        CDxHandleYUVBitmapRealization *this,
        char a2)
{
  CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
