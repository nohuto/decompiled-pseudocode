/*
 * XREFs of ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x180204C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020E944 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollScaleKeyframeAnimation *__fastcall CScrollScaleKeyframeAnimation::`vector deleting destructor'(
        CScrollScaleKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x2E0);
    else
      operator delete(this);
  }
  return this;
}
