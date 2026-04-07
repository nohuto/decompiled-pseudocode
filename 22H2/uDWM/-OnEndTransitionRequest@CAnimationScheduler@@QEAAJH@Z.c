/*
 * XREFs of ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x180032E94
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180032EE8 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180032D20 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequest(CAnimationScheduler *this, unsigned int a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(this, a2, 0LL);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
