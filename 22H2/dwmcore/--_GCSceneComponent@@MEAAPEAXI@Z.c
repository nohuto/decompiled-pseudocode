/*
 * XREFs of ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18020AD70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x18020AD18 (--1CSceneComponent@@MEAA@XZ.c)
 */

CSceneComponent *__fastcall CSceneComponent::`scalar deleting destructor'(CSceneComponent *this, char a2)
{
  CSceneComponent::~CSceneComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48);
    else
      operator delete(this);
  }
  return this;
}
