/*
 * XREFs of ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x180016870
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DEffect@@MEAA@XZ @ 0x180016AC4 (--1CD2DEffect@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CD2DEffect *__fastcall CD2DEffect::`scalar deleting destructor'(CD2DEffect *this, char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
