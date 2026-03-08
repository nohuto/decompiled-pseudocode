/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14040AFD4
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting @ 0x14040AF08 (Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 33140);
  v3 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 2288) = v3;
  *(_QWORD *)(a1 + 33144) += v3;
  result = Feature_Servicing_SoftParkFixes__private_IsEnabledNoReporting();
  if ( (_DWORD)result )
    return KiUpdateSoftParkElectionStatisticsOnInsertion(*(_QWORD *)(a1 + 34888), a2);
  return result;
}
