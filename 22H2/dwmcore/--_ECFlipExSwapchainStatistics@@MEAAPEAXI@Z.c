/*
 * XREFs of ??_ECFlipExSwapchainStatistics@@MEAAPEAXI@Z @ 0x18020D070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CFlipExSwapchainStatistics *__fastcall CFlipExSwapchainStatistics::`vector deleting destructor'(
        CFlipExSwapchainStatistics *this,
        char a2)
{
  *((_QWORD *)this + 2) = &CFlipExSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x28);
    else
      operator delete(this);
  }
  return this;
}
