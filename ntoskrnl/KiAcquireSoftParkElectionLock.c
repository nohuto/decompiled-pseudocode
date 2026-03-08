/*
 * XREFs of KiAcquireSoftParkElectionLock @ 0x14040A5D8
 * Callers:
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140256490 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1402AE1AC (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiFlushReadyLists @ 0x14057B934 (KiFlushReadyLists.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireSoftParkElectionLock(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 688);
    }
    while ( result );
  }
  return result;
}
