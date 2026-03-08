/*
 * XREFs of ??_ECBitmap@@MEAAPEAXI@Z @ 0x18027E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@MEAA@XZ @ 0x1800A7974 (--1CBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
