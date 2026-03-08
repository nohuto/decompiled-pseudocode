/*
 * XREFs of ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800982C4
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800985D4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBaseExpression::TryGetTargetValue(CBaseExpression *this, struct CExpressionValue *a2)
{
  __int64 v2; // rax
  char v3; // bl
  CBaseExpression *v4; // r9
  int v5; // eax
  unsigned int v6; // ecx

  v2 = *((_QWORD *)this + 23);
  v3 = 0;
  v4 = this;
  if ( v2 && (this = *(CBaseExpression **)(v2 + 16)) != 0LL )
  {
    v5 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, struct CExpressionValue *))(*(_QWORD *)this + 136LL))(
           this,
           *((unsigned int *)v4 + 48),
           a2);
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB310, 2u, v5, 0x554u, 0LL);
    else
      return 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802EB310, 2u, -2147024890, 0x553u, 0LL);
  }
  return v3;
}
