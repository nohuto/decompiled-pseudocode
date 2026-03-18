/*
 * XREFs of ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD830
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BD5D4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18009701C (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098C90 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA890 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC720 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ecx

  v1 = 0;
  if ( *((_DWORD *)this + 72) == 4 && (*((_BYTE *)this + 216) & 2) != 0 )
  {
    *((_DWORD *)this + 72) = 2;
    if ( (CNotificationResource::ShouldNotify(this) || CPtrArrayBase::GetCount((CPtrArrayBase *)(v4 + 24)))
      && (v6 = CExpressionManager::QueueAnimationStateChange(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 424LL),
                 v5,
                 (int *)this),
          v1 = v6,
          v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x57Du, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
    {
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
        this);
    }
  }
  return v1;
}
