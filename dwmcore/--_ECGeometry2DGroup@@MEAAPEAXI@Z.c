/*
 * XREFs of ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18012A300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x18012E0BE (--1CGeometry2DGroup@@MEAA@XZ.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::`vector deleting destructor'(CGeometry2DGroup *this, char a2)
{
  CGeometry2DGroup::~CGeometry2DGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
