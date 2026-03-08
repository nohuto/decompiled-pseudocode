/*
 * XREFs of ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x180100080
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1801000BC (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  CSecondarySysmemBitmap::~CSecondarySysmemBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC8uLL);
  return this;
}
