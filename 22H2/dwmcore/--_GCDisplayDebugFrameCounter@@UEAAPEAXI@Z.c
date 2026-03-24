/*
 * XREFs of ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x180153B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180161BE4 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

CDisplayDebugFrameCounter *__fastcall CDisplayDebugFrameCounter::`scalar deleting destructor'(
        CDisplayDebugFrameCounter *this,
        char a2)
{
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x28);
    else
      operator delete(this);
  }
  return this;
}
