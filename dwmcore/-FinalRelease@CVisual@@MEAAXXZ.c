/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x18009A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E7E28 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E7FD8 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 */

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
