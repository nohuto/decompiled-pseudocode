/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x180232290
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x18022EA40 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022FD00 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180231420 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18023233C (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180232410 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18022E7B4 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802355DC (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, int a2, char a3)
{
  __int64 v5; // rdi
  struct CResource *v6; // rdi

  if ( (unsigned __int64)a2 < 2 )
  {
    v5 = *((_QWORD *)this + a2 + 44);
    if ( v5 )
    {
      v6 = *(struct CResource **)(v5 + 16);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 80) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 92LL) )
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
              *((_QWORD *)this + 80),
              this,
              v6,
              (unsigned int)a2);
        }
        *((_BYTE *)v6 + 216) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v6);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
