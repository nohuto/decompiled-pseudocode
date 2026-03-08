/*
 * XREFs of ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x1801A1550
 * Callers:
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1324 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3770 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1100 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 */

bool __fastcall CManipulationContext::IsInteractionDescendantOfVisual(
        const struct CInteraction *a1,
        const struct CVisual *a2)
{
  __int64 v2; // r8
  const struct CVisual *VisualEffectiveParentImpl; // rax
  bool v5; // bl

  v2 = *((_QWORD *)a1 + 14);
  VisualEffectiveParentImpl = 0LL;
  if ( v2 )
    VisualEffectiveParentImpl = *(const struct CVisual **)(v2 + 16);
  v5 = 0;
  while ( VisualEffectiveParentImpl && !v5 )
  {
    v5 = VisualEffectiveParentImpl == a2;
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(
                                  VisualEffectiveParentImpl,
                                  (bool *)a2);
  }
  return v5;
}
