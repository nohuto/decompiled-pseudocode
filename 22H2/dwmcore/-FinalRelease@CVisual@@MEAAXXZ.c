/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x18009A480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A6B4 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E89F8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E8BA8 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
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
