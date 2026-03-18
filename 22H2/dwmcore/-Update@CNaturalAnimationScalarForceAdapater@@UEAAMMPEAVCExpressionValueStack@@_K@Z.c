/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802776A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x180107AB0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ @ 0x180119B04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_14978362@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapater@@AEBAPEAVCNaturalAnimation@@XZ @ 0x1802775AC (-GetOwner@CNaturalAnimationScalarForceAdapater@@AEBAPEAVCNaturalAnimation@@XZ.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  float v5; // xmm6_4
  struct CNaturalAnimation *v8; // rax
  int v9; // eax
  int v10; // ecx
  struct CNaturalAnimation *Owner; // rax
  int v12; // eax
  int v13; // ecx
  struct CExpressionValue *v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0.0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_14978362>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_14978362>::GetImpl'::`2'::impl) )
  {
    Owner = CNaturalAnimationScalarForceAdapater::GetOwner(this);
    v12 = (*(__int64 (__fastcall **)(struct CNaturalAnimation *, struct CExpressionValueStack *, __int64, _BYTE *))(*(_QWORD *)Owner + 256LL))(
            Owner,
            a3,
            a4,
            v16);
    if ( v12 < 0 )
      ModuleFailFastForHRESULT(v12, retaddr);
    v13 = *((_DWORD *)CNaturalAnimationScalarForceAdapater::GetOwner(this) + 38);
    if ( v13 != 18 )
    {
      if ( v13 != 35 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      goto LABEL_10;
    }
LABEL_12:
    v5 = *(float *)CExpressionValueStack::PeekStackValue(a3, 0);
LABEL_13:
    --*((_DWORD *)a3 + 4);
    return v5;
  }
  v8 = CNaturalAnimationScalarForceAdapater::GetOwner(this);
  v9 = (*(__int64 (__fastcall **)(struct CNaturalAnimation *, struct CExpressionValueStack *, __int64, _BYTE *))(*(_QWORD *)v8 + 256LL))(
         v8,
         a3,
         a4,
         v16);
  if ( v9 < 0 )
    ModuleFailFastForHRESULT(v9, retaddr);
  if ( v9 != 1 )
  {
    v10 = *((_DWORD *)CNaturalAnimationScalarForceAdapater::GetOwner(this) + 38);
    if ( v10 != 18 )
    {
      if ( v10 != 35 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
LABEL_10:
      v14 = CExpressionValueStack::PeekStackValue(a3, 0);
      v5 = *(float *)v14;
      if ( *((_DWORD *)this + 4) )
        v5 = *((float *)v14 + 1);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  return v5;
}
