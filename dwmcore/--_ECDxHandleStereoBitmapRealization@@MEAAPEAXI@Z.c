/*
 * XREFs of ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x1802AFA20
 * Callers:
 *     ??_ECDxHandleStereoBitmapRealization@@OBEA@EAAPEAXI@Z @ 0x18011EA90 (--_ECDxHandleStereoBitmapRealization@@OBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802AF8F8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::`vector deleting destructor'(
        CDxHandleStereoBitmapRealization *this,
        char a2)
{
  CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
