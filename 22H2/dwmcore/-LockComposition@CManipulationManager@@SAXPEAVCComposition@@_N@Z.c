/*
 * XREFs of ?LockComposition@CManipulationManager@@SAXPEAVCComposition@@_N@Z @ 0x1800DA9CC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18004DE8C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180233EB0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::LockComposition(struct CComposition *a1, char a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)((char *)a1 + 520);
  if ( a2 )
    AcquireSRWLockShared(v2);
  else
    ReleaseSRWLockShared(v2);
}
