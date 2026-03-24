/*
 * XREFs of ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001A230
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180069D3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801DFB34 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  char v1; // dl
  char result; // al

  v1 = 0;
  if ( *((float *)this + 38) > 0.0 || (result = 0, *((float *)this + 39) > 0.0) )
    result = 1;
  if ( !*((_BYTE *)this + 184) )
  {
    if ( *((float *)this + 40) > 0.0
      || *((float *)this + 41) > 0.0
      || *((float *)this + 42) > 0.0
      || *((float *)this + 43) > 0.0
      || *((float *)this + 44) > 0.0
      || *((float *)this + 45) > 0.0 )
    {
      v1 = 1;
    }
    return v1 | result;
  }
  return result;
}
