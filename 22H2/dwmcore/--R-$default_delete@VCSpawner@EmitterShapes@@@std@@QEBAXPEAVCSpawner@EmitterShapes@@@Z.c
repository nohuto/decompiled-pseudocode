/*
 * XREFs of ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801C288C
 * Callers:
 *     ?SetEmitFrom@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum@ParticleEmitFrom@@@Z @ 0x1801C6BB8 (-SetEmitFrom@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum.c)
 *     ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801C6CB0 (-SetEmitterGeometry@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAA.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x180243AB4 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18024510C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180245FD0 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<EmitterShapes::CSpawner>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1LL);
  return result;
}
