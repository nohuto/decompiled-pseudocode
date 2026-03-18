/*
 * XREFs of ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801335E0
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180249540 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800055C8 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180005BE4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180005C04 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180133694 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::ComputeShadowColor(
        CProjectedShadowCaster **this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct CDrawingContext *a3)
{
  __int64 v5; // r8
  float v6; // xmm1_4
  int v7; // eax
  float *EffectiveMaskBrush; // rdi
  float v9; // xmm0_4

  CProjectedShadowCaster::GetColor(this[10], retstr);
  v6 = (float)(CProjectedShadowCaster::GetEffectiveAlpha(
                 this[10],
                 *(const struct CVisualTree **)(v5 + 8056),
                 (bool *)v5)
             * *((float *)this + 25))
     * retstr->a;
  retstr->a = v6;
  v7 = *((_DWORD *)this + 82);
  if ( v7 == 1 )
  {
    EffectiveMaskBrush = (float *)CProjectedShadowCaster::GetEffectiveMaskBrush(this[10]);
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)EffectiveMaskBrush + 56LL))(
           EffectiveMaskBrush,
           22LL) )
    {
      v9 = EffectiveMaskBrush[25] * retstr->a;
LABEL_6:
      retstr->a = v9;
    }
  }
  else if ( v7 == 5 )
  {
    v9 = (float)(CProjectedShadow::GetBlurForBoundary(this, 3LL) / *((float *)this + 24)) * v6;
    goto LABEL_6;
  }
  return retstr;
}
