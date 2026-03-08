/*
 * XREFs of ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022580
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180022658 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorBrush::SetProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 AnimatablePropertyInfo; // rax
  unsigned int v5; // ecx
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 1LL;
  v11[1] = &CColorBrush::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v11, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(AnimatablePropertyInfo + 24))(
           a1 + *(int *)(AnimatablePropertyInfo + 32),
           AnimatablePropertyInfo,
           v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x37u, 0LL);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x3Bu, 0LL);
  }
  return v9;
}
