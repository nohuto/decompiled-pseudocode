/*
 * XREFs of ??_GCGDISectionBitmapRealization@@UEAAPEAXI@Z @ 0x1800F4A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800F4ACC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CGDISectionBitmapRealization *__fastcall CGDISectionBitmapRealization::`scalar deleting destructor'(
        CGDISectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1F8uLL);
  return this;
}
