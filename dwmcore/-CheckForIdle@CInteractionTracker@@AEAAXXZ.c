/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18022E664
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18012E9A8 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022FD00 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180231420 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ @ 0x18012E92E (-HasActiveCustomAnimation@CInteractionTracker@@AEAA_NXZ.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18022F8EC (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18022F90C (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18022FBA8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTracker@@@Z @ 0x180234280 (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 */

void __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this)
{
  int v2; // ecx
  int v3; // ecx
  CInteractionTrackerBindingManager *v4; // rcx
  CInteractionTracker *v5; // rcx
  CInteractionTracker *v6; // rcx

  v2 = *((_DWORD *)this + 44) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 312LL))(*((_QWORD *)this + 41))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 312LL))(*((_QWORD *)this + 42))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 312LL))(*((_QWORD *)this + 43)))
      || CInteractionTracker::HasRunningDefaultPositionAnimation(this)
      || CInteractionTracker::HasRunningDefaultScaleAnimation(v5) )
    {
      return;
    }
    if ( CInteractionTracker::IsOutOfBounds(v6) )
    {
LABEL_17:
      CInteractionTracker::TransitionToInertia(this, 0LL);
      return;
    }
LABEL_8:
    CInteractionTracker::TransitionToIdle(this);
    return;
  }
  if ( v3 != 1 )
    goto LABEL_8;
  if ( CInteractionTracker::HasActiveCustomAnimation(this) )
    return;
  if ( CInteractionTracker::IsOutOfBounds(this) )
    goto LABEL_17;
  v4 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 80);
  if ( !v4 || !CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(v4, this) )
    goto LABEL_8;
}
