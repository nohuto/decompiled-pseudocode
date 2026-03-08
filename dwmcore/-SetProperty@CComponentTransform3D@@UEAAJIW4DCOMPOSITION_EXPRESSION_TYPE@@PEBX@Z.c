/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800226E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  const struct AnimationHelper::AnimatedProperty *const near *const *v5; // rcx
  const struct AnimationHelper::AnimatedProperty *const near *v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  float v11; // xmm0_4
  float v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 == 5 && a3 == 18 )
  {
    v6 = (const struct AnimationHelper::AnimatedProperty *const near *)&CComponentTransform3D::sc_RotationAngle;
    v11 = *a4 * 0.017453292;
    a4 = &v12;
    v12 = v11;
LABEL_8:
    v7 = (*((__int64 (__fastcall **)(__int64, const struct AnimationHelper::AnimatedProperty *const near *, float *))v6
          + 3))(
           a1 + *((int *)v6 + 8),
           v6,
           a4);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x50u, 0LL);
  }
  else
  {
    v5 = &CComponentTransform3D::k_rgAnimDef;
    while ( 1 )
    {
      v6 = *v5;
      if ( a2 == **(_DWORD **)v5 && (a3 == *((_DWORD *)v6 + 1) || !a3) )
        break;
      if ( ++v5 == &CComponentTransform2D::k_rgAnimDef )
        goto LABEL_15;
    }
    if ( v6 )
      goto LABEL_8;
LABEL_15:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024809, 0x54u, 0LL);
  }
  return v9;
}
