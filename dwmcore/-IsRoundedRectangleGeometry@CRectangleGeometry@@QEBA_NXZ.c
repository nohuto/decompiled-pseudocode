/*
 * XREFs of ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x180018E28
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  char v1; // dl
  bool result; // al

  v1 = 1;
  result = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0;
  if ( !*((_BYTE *)this + 196) )
  {
    if ( (*((float *)this + 42) <= 0.0 || *((float *)this + 43) <= 0.0)
      && (*((float *)this + 46) <= 0.0 || *((float *)this + 47) <= 0.0)
      && (*((float *)this + 44) <= 0.0 || *((float *)this + 45) <= 0.0) )
    {
      v1 = 0;
    }
    return v1 | result;
  }
  return result;
}
