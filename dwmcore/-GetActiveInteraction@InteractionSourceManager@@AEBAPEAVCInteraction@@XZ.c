/*
 * XREFs of ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x180130A1A
 * Callers:
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180271664 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180271720 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180271D0C (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180130A3E (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

struct CInteraction *__fastcall InteractionSourceManager::GetActiveInteraction(InteractionSourceManager *this)
{
  struct CChainingHelper *ActiveChainingHelper; // rcx
  struct CInteraction *result; // rax

  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(this);
  result = 0LL;
  if ( ActiveChainingHelper )
    return (struct CInteraction *)*((_QWORD *)ActiveChainingHelper + 5);
  return result;
}
