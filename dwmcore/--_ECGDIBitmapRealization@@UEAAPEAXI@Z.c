/*
 * XREFs of ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800FF090
 * Callers:
 *     ??_ECGDIBitmapRealization@@WBEA@EAAPEAXI@Z @ 0x18011DFD0 (--_ECGDIBitmapRealization@@WBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18003DA64 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CGDIBitmapRealization *__fastcall CGDIBitmapRealization::`vector deleting destructor'(
        CGDIBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x218uLL);
  return this;
}
