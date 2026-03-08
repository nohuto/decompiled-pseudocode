/*
 * XREFs of ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z @ 0x1802AE710
 * Callers:
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@WBEA@EAAPEAXI@Z @ 0x18011E7F0 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@WBEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ @ 0x1802AE66C (--1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::`vector deleting destructor'(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
