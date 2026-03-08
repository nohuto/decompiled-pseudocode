/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14040B024
 * Callers:
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1403BD0A8 (KiRemoveThreadFromReadyQueue.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1402AE1AC (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting @ 0x14040AF98 (Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_DWORD *)(a1 + 33140);
  *(_QWORD *)(a1 + 33144) -= *(unsigned int *)(a2 + 2288);
  MmGetMinWsPagePriority();
  result = Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(0);
  if ( (_DWORD)result )
    return KiUpdateSoftParkElectionStatisticsOnRemoval(*(_QWORD *)(a1 + 34888), a2, 0);
  return result;
}
