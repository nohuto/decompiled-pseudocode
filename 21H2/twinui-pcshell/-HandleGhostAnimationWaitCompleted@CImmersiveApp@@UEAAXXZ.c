/*
 * XREFs of ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x1801ED860
 * Callers:
 *     <none>
 * Callees:
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1801ED42C (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

void __fastcall CImmersiveApp::HandleGhostAnimationWaitCompleted(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted((CImmersiveApp *)((char *)this + 184));
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 112));
}
