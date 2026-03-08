/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180022770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800227E8 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *const near *const *v5; // rax
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rdx
  float v8; // xmm0_4

  v3 = 0;
  if ( a2 == 5 )
  {
    v8 = *((float *)this + 58) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v8;
  }
  else
  {
    v5 = &CComponentTransform3D::k_rgAnimDef;
    while ( 1 )
    {
      v6 = *v5;
      if ( a2 == **(_DWORD **)v5 )
        break;
      if ( ++v5 == &CComponentTransform2D::k_rgAnimDef )
        goto LABEL_10;
    }
    if ( v6 )
    {
      CResource::GetPropertyImpl(this, (const struct AnimationHelper::AnimatedProperty *)v6, a3);
      return v3;
    }
LABEL_10:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x78u, 0LL);
  }
  return v3;
}
