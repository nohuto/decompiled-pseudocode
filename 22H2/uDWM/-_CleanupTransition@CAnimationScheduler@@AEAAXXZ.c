/*
 * XREFs of ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180031470
 * Callers:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003141C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800351AC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800354A0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x1800314B0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800314F4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003167C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_CleanupTransition(CAnimationScheduler *this)
{
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  if ( !*((_DWORD *)this + 10) )
  {
    CTransitionVisualController::CleanupTransition(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                   + 31));
    CWindowPropertyTracker::StopTrackingAllWindows((CAnimationScheduler *)((char *)this + 48));
  }
}
