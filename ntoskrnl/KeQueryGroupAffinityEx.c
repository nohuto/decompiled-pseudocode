/*
 * XREFs of KeQueryGroupAffinityEx @ 0x1403B16A0
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x140257FD0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1402584D0 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14036DF98 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2)
{
  if ( a2 >= *a1 )
    return 0LL;
  else
    return *(_QWORD *)&a1[4 * a2 + 4];
}
