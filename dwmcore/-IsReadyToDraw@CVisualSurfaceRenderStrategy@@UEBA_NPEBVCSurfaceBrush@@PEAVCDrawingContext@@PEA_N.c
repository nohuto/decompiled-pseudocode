/*
 * XREFs of ?IsReadyToDraw@CVisualSurfaceRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800DFEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisualSurfaceRenderStrategy::IsReadyToDraw(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  bool result; // al
  __int64 v5; // rcx

  result = 0;
  *a4 = 0;
  v5 = *((_QWORD *)a2 + 13);
  if ( *(_QWORD *)(v5 + 64) )
  {
    if ( *(float *)(v5 + 88) > 0.0 )
      return *(float *)(v5 + 92) > 0.0;
  }
  return result;
}
