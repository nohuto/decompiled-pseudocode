/*
 * XREFs of ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x1801EBDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1801EBD74 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 */

CSceneSurfaceMaterialInput *__fastcall CSceneSurfaceMaterialInput::`vector deleting destructor'(
        CSceneSurfaceMaterialInput *this,
        char a2)
{
  CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x70);
    else
      operator delete(this);
  }
  return this;
}
