/*
 * XREFs of ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801A38B8
 * Callers:
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801A0C7C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1801A1E8C (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E80CC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 */

char __fastcall CManipulationContext::VisualHasActiveInteraction(struct CVisual *a1, unsigned int a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v4; // r11
  char v5; // r10
  CInteraction *v6; // rax

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = 0;
  if ( InteractionInternal )
  {
    v6 = CVisual::GetInteractionInternal(v4);
    if ( (unsigned int)CInteraction::GetTotalNumContacts(v6) > a2 )
      return 1;
  }
  return v5;
}
