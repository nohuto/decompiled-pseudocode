/*
 * XREFs of ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800AB270
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800314F4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180035460 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180035D44 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180039DA0 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::OnAnimationComplete(CTransitionVisualController *this, int a2)
{
  CAnimationEngine *v3; // rax
  __int64 v4; // rcx
  CAnimationEngine *v5; // rdi

  if ( *((_DWORD *)this + 22) == a2 )
  {
    v3 = CDesktopManager::AcquireAnimationEngine();
    v5 = v3;
    if ( v3 )
    {
      CAnimationEngine::UnregisterForAnimationCompleteNotification(v3, this);
      CAnimationEngine::Release(v5);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(
        v4,
        (__int64)&UdwmTransitionVisualController_NotifyComplete,
        *((unsigned int *)this + 26));
    CTransitionVisualController::CleanupTransition(this);
  }
  return 0LL;
}
