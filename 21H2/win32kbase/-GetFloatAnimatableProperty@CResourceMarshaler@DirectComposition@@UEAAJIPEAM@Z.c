/*
 * XREFs of ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0215740
 * Callers:
 *     ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0215AA0 (-GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0216550 (-GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C02168B0 (-GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0216DC0 (-GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0217890 (-GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0217FC0 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0219B30 (-GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0219EB0 (-GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C021A090 (-GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C021B720 (-GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C021CB40 (-GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C021EE30 (-GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0229590 (-GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C022AFB0 (-GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C022D910 (-GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0099CF0 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
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
