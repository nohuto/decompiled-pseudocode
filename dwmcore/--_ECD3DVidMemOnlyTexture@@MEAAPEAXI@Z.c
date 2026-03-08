/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1802BC520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DVidMemOnlyTexture@@MEAA@XZ @ 0x1802BC4DC (--1CD3DVidMemOnlyTexture@@MEAA@XZ.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  CD3DVidMemOnlyTexture::~CD3DVidMemOnlyTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
