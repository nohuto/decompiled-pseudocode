/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC8E8
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056CD0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BD5D4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18022F120 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x180233EFC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x180234070 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18023C17C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18009701C (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098C90 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA890 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC720 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx

  v2 = 0;
  if ( (CNotificationResource::ShouldNotify(this) || CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 24)))
    && (v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL), 1, (int *)this),
        v2 = v4,
        v4 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x554u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
  {
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
      *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
      this);
  }
  *((_DWORD *)this + 72) = 1;
  return v2;
}
