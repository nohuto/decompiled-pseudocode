/*
 * XREFs of ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0
 * Callers:
 *     ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024D220 (-GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024DA40 (-GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024DD90 (-GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024E290 (-GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024ED40 (-GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024F450 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0250EF0 (-GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0251230 (-GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0251410 (-GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C02529B0 (-GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0253700 (-GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0254440 (-GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C02620E0 (-GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0263000 (-GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C02656E0 (-GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0006CE0 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2,
        float *a3)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ecx
  __int64 result; // rax

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v6 = *(_DWORD *)(v4 + *((_QWORD *)TargetProperty + 2));
  result = 0LL;
  *v5 = v6;
  return result;
}
