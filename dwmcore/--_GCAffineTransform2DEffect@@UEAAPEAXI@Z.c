/*
 * XREFs of ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x1801BF830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801BEC48 (--1CFilterEffect@@MEAA@XZ.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::`scalar deleting destructor'(
        CAffineTransform2DEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
