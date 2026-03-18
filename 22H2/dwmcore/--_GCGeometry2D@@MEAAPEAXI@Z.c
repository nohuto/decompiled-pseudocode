/*
 * XREFs of ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x1801C2FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x18012E412 (--1CGeometry2D@@MEAA@XZ.c)
 */

CGeometry2D *__fastcall CGeometry2D::`scalar deleting destructor'(CGeometry2D *this, char a2)
{
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
