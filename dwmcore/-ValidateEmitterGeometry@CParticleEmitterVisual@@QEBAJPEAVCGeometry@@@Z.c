/*
 * XREFs of ?ValidateEmitterGeometry@CParticleEmitterVisual@@QEBAJPEAVCGeometry@@@Z @ 0x1801C72B0
 * Callers:
 *     ?SetEmitterGeometry@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x1801C3A80 (-SetEmitterGeometry@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::ValidateEmitterGeometry(CParticleEmitterVisual *this, struct CGeometry *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 138LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 102LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 59LL) )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 126LL) == 0
         ? 0x88980403
         : 0;
  }
}
