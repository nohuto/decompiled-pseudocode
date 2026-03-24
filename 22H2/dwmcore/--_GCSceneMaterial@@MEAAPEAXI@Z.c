/*
 * XREFs of ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1801EA490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1801EA414 (--1CSceneMaterial@@MEAA@XZ.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::`scalar deleting destructor'(CSceneMaterial *this, char a2)
{
  CSceneMaterial::~CSceneMaterial(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50);
    else
      operator delete(this);
  }
  return this;
}
