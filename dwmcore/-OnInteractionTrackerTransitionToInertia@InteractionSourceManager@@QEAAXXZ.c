void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  struct CInteraction *ActiveInteraction; // rdi
  struct CManipulation *ActiveManipulation; // rbx
  float v4; // xmm3_4

  ActiveInteraction = InteractionSourceManager::GetActiveInteraction(this);
  if ( ActiveInteraction )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Interaction_NullptrSmackdown>::GetImpl'::`2'::impl)
      || ActiveManipulation )
    {
      LODWORD(v4) = HIDWORD(*((_QWORD *)ActiveManipulation + 49));
      if ( COERCE_FLOAT(*(_OWORD *)((char *)ActiveManipulation + 392)) != 0.0 || v4 != 0.0 )
        CInteraction::ReportInertiaStart(
          (__int64)ActiveInteraction,
          HIDWORD(*((_QWORD *)ActiveManipulation + 53)),
          COERCE_FLOAT(*(_OWORD *)((char *)ActiveManipulation + 392)),
          v4);
    }
  }
}
