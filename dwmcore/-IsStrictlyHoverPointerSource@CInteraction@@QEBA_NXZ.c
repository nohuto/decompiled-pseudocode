/*
 * XREFs of ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1801A159C
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A0564 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1100 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 * Callees:
 *     ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x1801AD494 (-SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ.c)
 */

bool __fastcall CInteraction::IsStrictlyHoverPointerSource(CInteraction *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_QWORD *)this + 35) )
    return (unsigned int)CInteractionProcessor::SupportsAnyPointerType((CInteraction *)((char *)this + 352)) == 0;
  return v1;
}
