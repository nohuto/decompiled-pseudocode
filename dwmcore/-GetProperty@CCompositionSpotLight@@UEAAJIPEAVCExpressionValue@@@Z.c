__int64 __fastcall CCompositionSpotLight::GetProperty(
        CCompositionSpotLight *this,
        __int64 a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  unsigned int v6; // ecx
  __int64 v7; // r8
  struct CExpressionValue *v8; // r11
  float v10; // xmm0_4
  __int64 v11; // [rsp+28h] [rbp-20h]
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( (_DWORD)a2 == 9 )
  {
    v10 = *((float *)this + 95);
    goto LABEL_9;
  }
  if ( (_DWORD)a2 == 14 )
  {
    v10 = *((float *)this + 96);
LABEL_9:
    *((_BYTE *)a3 + 76) = 1;
    *((_DWORD *)a3 + 18) = 18;
    *(float *)a3 = v10 * 57.295776;
    return v3;
  }
  v12[0] = 13LL;
  v12[1] = &CCompositionSpotLight::k_rgAnimDef;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v12,
                                                                               a2,
                                                                               0LL);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, v8);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, v7, -2147024809, 0x94u, (void *)(v7 & v11));
  }
  return v3;
}
