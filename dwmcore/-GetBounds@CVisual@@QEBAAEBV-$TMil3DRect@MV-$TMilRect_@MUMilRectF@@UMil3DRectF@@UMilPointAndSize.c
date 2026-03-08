/*
 * XREFs of ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800148F4
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801D0138 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     _lambda_4d6035b5fdecd7bb0589f89584db9c3e_::operator() @ 0x1801E94EC (_lambda_4d6035b5fdecd7bb0589f89584db9c3e_--operator().c)
 *     _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801E958C (_lambda_f7805202518b118888e0b3d23c76c683_--operator().c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1802151A8 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall CVisual::GetBounds(__int64 a1, __int64 a2)
{
  __int128 *result; // rax

  if ( a1 != *(_QWORD *)(a2 + 64) )
    return (__int128 *)(a1 + 148);
  result = (__int128 *)(a2 + 72);
  if ( !*(_QWORD *)(a2 + 64) )
    return &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  return result;
}
