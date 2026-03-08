/*
 * XREFs of ?FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z @ 0x1801A0EC8
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801A0E30 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 */

void __fastcall CManipulationContext::FindWorkspace(
        struct MCCollections *a1,
        struct CInteraction *a2,
        unsigned int *a3)
{
  struct CInteraction *i; // rax
  struct CManipulationContext *ManipulationContext; // rax

  *a3 = 0;
  if ( a2 )
  {
    for ( i = (struct CInteraction *)*((_QWORD *)a2 + 27); i; i = (struct CInteraction *)*((_QWORD *)i + 27) )
      a2 = i;
    ManipulationContext = CManipulationContext::FindManipulationContext(a1, (__int64)a2, (int *)a3);
    if ( ManipulationContext )
      *a3 = *((_DWORD *)ManipulationContext + 8);
  }
}
