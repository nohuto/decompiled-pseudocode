/*
 * XREFs of ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1802313B8
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x180230F84 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
