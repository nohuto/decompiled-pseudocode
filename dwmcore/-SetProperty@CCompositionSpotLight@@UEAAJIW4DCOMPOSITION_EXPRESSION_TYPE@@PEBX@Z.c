/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019F00
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180022658 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  int *AnimatablePropertyInfo; // rax
  unsigned int v6; // ecx
  float *v7; // r11
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  float v13; // [rsp+60h] [rbp+18h] BYREF

  if ( (_DWORD)a3 == 18 )
  {
    if ( (_DWORD)a2 == 9 )
    {
      AnimatablePropertyInfo = (int *)&CCompositionSpotLight::sc_InnerConeAngle;
    }
    else
    {
      if ( (_DWORD)a2 != 14 )
        goto LABEL_2;
      AnimatablePropertyInfo = (int *)&CCompositionSpotLight::sc_OuterConeAngle;
    }
    v7 = &v13;
    v13 = *a4 * 0.017453292;
    goto LABEL_3;
  }
LABEL_2:
  v12[0] = 13LL;
  v12[1] = &CCompositionSpotLight::k_rgAnimDef;
  AnimatablePropertyInfo = (int *)AnimationHelper::FindAnimatablePropertyInfo(v12, a2, a3);
  if ( !AnimatablePropertyInfo )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0xD1u, 0LL);
    return v10;
  }
LABEL_3:
  v8 = (*((__int64 (__fastcall **)(__int64, int *, float *))AnimatablePropertyInfo + 3))(
         a1 + AnimatablePropertyInfo[8],
         AnimatablePropertyInfo,
         v7);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCDu, 0LL);
  return v10;
}
