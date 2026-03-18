/*
 * XREFs of ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0
 * Callers:
 *     ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0008710 (-SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0008830 (-SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0085FF0 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00AF420 (-SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00BE0B0 (-SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0215B40 (-SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02166A0 (-SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0216F10 (-SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02179B0 (-SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02181F0 (-SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0219C80 (-SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C021CBE0 (-SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C021E620 (-SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C021F190 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C022AA70 (-SetFloatProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02306A0 (-SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0231D80 (-SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0232110 (-SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02322A0 (-SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0232AC0 (-SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02338B0 (-SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0234450 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0099CF0 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetFloatProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  _BYTE *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v7 = *((_QWORD *)TargetProperty + 2);
  if ( *(float *)(v6 + v7) != a3 )
  {
    *(float *)(v6 + v7) = a3;
    *(_DWORD *)(v6 + 16) |= *((_DWORD *)TargetProperty + 6);
    *v5 = 1;
  }
  return 0LL;
}
