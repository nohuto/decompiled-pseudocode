/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180274E50
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18023545C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180134BCA (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x18020C8D4 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180275568 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  struct CManipulation *ActiveManipulation; // rax
  __int64 v3; // r9
  _OWORD *v4; // rax
  float v5; // xmm3_4

  if ( InteractionSourceManager::GetActiveInteraction(this) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    if ( ActiveManipulation )
    {
      v4 = (_OWORD *)((char *)ActiveManipulation + 392);
      LODWORD(v5) = HIDWORD(*(_QWORD *)v4);
      if ( COERCE_FLOAT(*v4) != 0.0 || v5 != 0.0 )
        CInteraction::ReportInertiaStart(v3, HIDWORD(*((_QWORD *)v4 + 4)), COERCE_FLOAT(*v4), v5);
    }
  }
}
