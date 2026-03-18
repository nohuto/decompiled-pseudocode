/*
 * XREFs of ??_GCShapeVisual@@UEAAPEAXI@Z @ 0x18001DA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A7CC (--1CVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CShapeVisual *__fastcall CShapeVisual::`scalar deleting destructor'(CShapeVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x2C0uLL);
    else
      operator delete(this);
  }
  return this;
}
