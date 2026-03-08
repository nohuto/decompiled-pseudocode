/*
 * XREFs of ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x1800A7E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x1800A7F34 (--1CBitmapLock@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
