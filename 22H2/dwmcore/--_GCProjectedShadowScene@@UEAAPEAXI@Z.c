/*
 * XREFs of ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x18000E810
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18000E794 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::`scalar deleting destructor'(
        CProjectedShadowScene *this,
        char a2)
{
  unsigned int v4; // r8d

  CProjectedShadowScene::~CProjectedShadowScene(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80, v4);
    else
      operator delete(this);
  }
  return this;
}
