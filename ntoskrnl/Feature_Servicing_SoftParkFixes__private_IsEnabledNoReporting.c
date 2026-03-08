/*
 * XREFs of Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08
 * Callers:
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiShouldSoftParkElectionBePerformed @ 0x140258430 (KiShouldSoftParkElectionBePerformed.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98 (Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14040AFD4 (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 *     KiPerformSoftParkElectionRound @ 0x14040B194 (KiPerformSoftParkElectionRound.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x14057C0D8 (KiTallyHeteroSoftParkElectionVotes.c)
 * Callees:
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledFallback @ 0x14040AEE8 (Feature_Servicing_SoftParkFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting()
{
  if ( (Feature_Servicing_SoftParkFixes__private_featureState & 2) != 0 )
    return Feature_Servicing_SoftParkFixes__private_featureState & 1;
  else
    return Feature_Servicing_SoftParkFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SoftParkFixes__private_featureState,
             0);
}
