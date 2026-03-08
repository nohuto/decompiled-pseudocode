/*
 * XREFs of ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18020D838
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180222D50 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::GetEffectiveOffset(CVisual *this, float *a2, float *a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4

  v4 = *((float *)this + 31);
  v5 = *((float *)this + 32);
  v6 = *((float *)this + 30);
  *a2 = v4;
  *a3 = v5;
  *a4 = v6;
  return v4 != 0.0 || v5 != 0.0 || v6 != 0.0;
}
