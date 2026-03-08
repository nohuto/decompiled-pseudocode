/*
 * XREFs of ?SetEmitFrom@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum@ParticleEmitFrom@@@Z @ 0x1801C3988
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801BF65C (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetEmitFrom(__int64 a1, int a2)
{
  __int64 v3; // rdx

  if ( a2 != *(_DWORD *)(a1 + 720) )
  {
    *(_DWORD *)(a1 + 720) = a2;
    v3 = *(_QWORD *)(a1 + 6400);
    *(_QWORD *)(a1 + 6400) = 0LL;
    if ( v3 )
      std::default_delete<EmitterShapes::CSpawner>::operator()(a1, v3);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
  }
  return 0LL;
}
