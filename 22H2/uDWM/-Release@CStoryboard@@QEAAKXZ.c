/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x18002F7A0
 * Callers:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800047C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x180009BE0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000A070 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002FA58 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180030050 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180030C54 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180030FF0 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800310DC (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035040 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180035D74 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180042E00 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800AE330 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800AEC70 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800AECB0 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002FA58 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
