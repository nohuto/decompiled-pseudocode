/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1802ACB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800F4ACC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
