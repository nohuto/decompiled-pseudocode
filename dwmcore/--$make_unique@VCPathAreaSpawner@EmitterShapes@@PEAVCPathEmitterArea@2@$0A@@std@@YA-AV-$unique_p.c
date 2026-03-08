/*
 * XREFs of ??$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA?AV?$unique_ptr@VCPathAreaSpawner@EmitterShapes@@U?$default_delete@VCPathAreaSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterArea@EmitterShapes@@@Z @ 0x18023FB60
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique<EmitterShapes::CPathAreaSpawner,EmitterShapes::CPathEmitterArea *,0>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  v4 = operator new(0x10uLL);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &EmitterShapes::CPathAreaSpawner::`vftable';
    v4[1] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v4 = 0LL;
  }
  result = a1;
  *a1 = v4;
  return result;
}
