/*
 * XREFs of ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1801ED27C
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x1801ED6B0 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1801EDBD0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180035650 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  if ( (*((_BYTE *)this + 212) & 4) != 0 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 4);
}
