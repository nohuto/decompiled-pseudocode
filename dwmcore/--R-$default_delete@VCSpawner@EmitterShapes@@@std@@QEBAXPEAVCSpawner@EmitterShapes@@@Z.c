/*
 * XREFs of ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801BF65C
 * Callers:
 *     ?SetEmitFrom@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum@ParticleEmitFrom@@@Z @ 0x1801C3988 (-SetEmitFrom@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJW4Enum.c)
 *     ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801C3A80 (-SetEmitterGeometry@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAA.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1802403D4 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x180241A2C (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802428F0 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<EmitterShapes::CSpawner>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1LL);
  return result;
}
