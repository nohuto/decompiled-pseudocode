/*
 * XREFs of ??$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleEdgeSpawner@EmitterShapes@@U?$default_delete@VCRectangleEdgeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x18023FC88
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z @ 0x180240084 (--0CRectangleEdgeSpawner@EmitterShapes@@QEAA@MMMM@Z.c)
 */

__int64 *__fastcall std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
        __int64 *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  EmitterShapes::CRectangleEdgeSpawner *v9; // rcx
  __int64 v10; // rax

  v9 = (EmitterShapes::CRectangleEdgeSpawner *)operator new(0x90uLL);
  v10 = 0LL;
  if ( v9 )
    v10 = EmitterShapes::CRectangleEdgeSpawner::CRectangleEdgeSpawner(v9, *a2, *a3, *a4, *a5);
  *a1 = v10;
  return a1;
}
