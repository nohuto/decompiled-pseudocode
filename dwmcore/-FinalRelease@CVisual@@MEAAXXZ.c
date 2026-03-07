void __fastcall CVisual::FinalRelease(CVisual *this)
{
  CInteraction *InteractionInternal; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    CInteraction::SetVisual(InteractionInternal, 0LL);
    CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
    CVisual::ClearInteraction(this);
  }
}
