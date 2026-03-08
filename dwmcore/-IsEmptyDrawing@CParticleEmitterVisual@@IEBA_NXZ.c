/*
 * XREFs of ?IsEmptyDrawing@CParticleEmitterVisual@@IEBA_NXZ @ 0x18023E3B0
 * Callers:
 *     ?IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ @ 0x18023E3A0 (-IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x1802435B8 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsEmptyDrawing(CParticleEmitterVisual *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 332) )
    return 1;
  v2 = *((_QWORD *)this + 101);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
    return 1;
  return v1;
}
