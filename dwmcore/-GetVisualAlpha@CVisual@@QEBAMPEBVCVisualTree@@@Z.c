/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1800095EC
 * Callers:
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18000941C (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800094F0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180038938 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this, CVisual **a2)
{
  if ( this == a2[8] )
    return *(float *)&FLOAT_1_0;
  else
    return fminf(1.0, fmaxf(CVisual::GetOpacityInternal(this), 0.0));
}
