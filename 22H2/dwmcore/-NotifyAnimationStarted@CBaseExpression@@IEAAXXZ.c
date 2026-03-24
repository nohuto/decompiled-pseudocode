/*
 * XREFs of ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D5088
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800AC820 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z @ 0x1801B0394 (-LogAnimationStarted@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@II@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801D9ADC (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

void __fastcall CBaseExpression::NotifyAnimationStarted(CBaseExpression *this)
{
  bool v1; // zf
  CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct CResource *v5; // r8
  unsigned int v6; // r9d

  v1 = (*((_BYTE *)this + 208) & 0x40) == 0;
  *((_DWORD *)this + 66) = 4;
  if ( !v1 )
  {
    AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
    CAnimationLoggingManager::LogAnimationStarted(
      AnimationLoggingManagerNoRef,
      *(_QWORD *)(v4 + 160),
      v5,
      v6,
      *(_DWORD *)(v3 + 184));
  }
}
