/*
 * XREFs of ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180036584
 * Callers:
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180008214 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000A40C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000B148 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180031D34 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800359EC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180035ABC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800AB4E0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACAB0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACF4C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD51C (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800B5C7C (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800B5D24 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B81F0 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800B83B0 (-_CleanupAnimation@CThumbnailTransition@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CAnimationEngine *CDesktopManager::AcquireAnimationEngine(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 116));
    v0 = CDesktopManager::s_pDesktopManagerInstance;
  }
  return (struct CAnimationEngine *)*((_QWORD *)v0 + 26);
}
