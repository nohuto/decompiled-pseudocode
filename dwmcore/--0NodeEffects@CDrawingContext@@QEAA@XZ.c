/*
 * XREFs of ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180092178
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180091F48 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801D30F4 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x180092384 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 */

CDrawingContext::NodeEffects *__fastcall CDrawingContext::NodeEffects::NodeEffects(CDrawingContext::NodeEffects *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_BYTE *)this + 196) = 0;
  *((_QWORD *)this + 4) = 1065353216LL;
  *((_DWORD *)this + 11) = 1065353216;
  CMILMatrix::SetToZeroMatrix((CDrawingContext::NodeEffects *)((char *)this + 116));
  return this;
}
