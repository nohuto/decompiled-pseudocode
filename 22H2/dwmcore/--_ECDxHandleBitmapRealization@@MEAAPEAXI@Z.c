/*
 * XREFs of ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800FAA40
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@OBEA@EAAPEAXI@Z @ 0x180122160 (--_ECDxHandleBitmapRealization@@OBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DB54 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::`vector deleting destructor'(
        CDxHandleBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1F8uLL);
  return this;
}
