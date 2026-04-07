/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088
 * Callers:
 *     _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x180006474 (_lambda_95d8fb2efa1b08d320c8654ffeeb34da_--operator().c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180008F04 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000A0D4 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180030050 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180030C54 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180031034 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003141C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180032D20 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035040 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003527C (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180035D74 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180035E98 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800AFB90 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800B0314 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008144 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180008214 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180035568 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

void __fastcall CStoryboard::Abandon(CStoryboard *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)this + 6) != 4 )
  {
    CStoryboard::_NotifyStoryboardState(this, 2LL);
    CStoryboard::ScheduleStopAnimation(this);
    v2 = *((_OWORD *)this + 3);
    v3 = *((_QWORD *)this + 6) - *(_QWORD *)&GUID_NULL.Data1;
    v5 = v2;
    if ( !v3 )
      v3 = *((_QWORD *)&v5 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v3 )
    {
      v5 = v2;
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
        &v5,
        1LL);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
}
