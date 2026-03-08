/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x180009628
 * Callers:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C31F4 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  struct CEffect *EffectInternal; // rbx

  v1 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           58LL) )
    {
      v1 = *((float *)EffectInternal + 20);
    }
  }
  return fminf(1.0, fmaxf(v1, 0.0));
}
