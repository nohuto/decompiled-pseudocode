/*
 * XREFs of ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x18023FB0C
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z @ 0x18023FE14 (--0CLineSpawner@EmitterShapes@@QEAA@Ufloat2@Numerics@Foundation@Windows@@0@Z.c)
 */

__int64 *__fastcall std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rcx
  __int64 v7; // rax

  v6 = operator new(0x20uLL);
  v7 = 0LL;
  if ( v6 )
    v7 = EmitterShapes::CLineSpawner::CLineSpawner(v6, *a2, *a3);
  *a1 = v7;
  return a1;
}
