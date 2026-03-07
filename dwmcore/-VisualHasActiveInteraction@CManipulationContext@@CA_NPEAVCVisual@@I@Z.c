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
