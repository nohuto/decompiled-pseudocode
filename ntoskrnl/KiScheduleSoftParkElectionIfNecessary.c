/*
 * XREFs of KiScheduleSoftParkElectionIfNecessary @ 0x140258400
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiShouldSoftParkElectionBePerformed @ 0x140258430 (KiShouldSoftParkElectionBePerformed.c)
 */

__int64 __fastcall KiScheduleSoftParkElectionIfNecessary(__int64 a1)
{
  __int64 result; // rax

  result = KiShouldSoftParkElectionBePerformed();
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 708) )
    {
      *(_BYTE *)(a1 + 708) = 1;
      return KiInsertQueueDpc(a1 + 720, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
