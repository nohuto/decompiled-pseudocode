/*
 * XREFs of ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90
 * Callers:
 *     ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C000CCF0 (-SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C000CD40 (-SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C000CE80 (-SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C000DD20 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C005A930 (-SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C005AA30 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00B3220 (-SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00C3000 (-SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00C4980 (-SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024D2C0 (-SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024DB90 (-SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024E3F0 (-SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024EE60 (-SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C024F670 (-SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0251020 (-SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0262C10 (-SetFloatProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02682B0 (-SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C02696D0 (-SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0269860 (-SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026A080 (-SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026ADD0 (-SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026B690 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0006CE0 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
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
