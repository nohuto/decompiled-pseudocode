/*
 * XREFs of ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x18019AFEC
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801A184C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::LockTree(struct CVisualTree *a1, char a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)a1 + 2) + 672LL);
  if ( a2 )
    AcquireSRWLockShared(v2);
  else
    ReleaseSRWLockShared(v2);
}
