/*
 * XREFs of ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1802BC060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x1802BBEF8 (--1CD3DTexture@@MEAA@XZ.c)
 */

CD3DTexture *__fastcall CD3DTexture::`scalar deleting destructor'(CD3DTexture *this, char a2)
{
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
