/*
 * XREFs of MiLockTrackerCompare @ 0x1405A1F80
 * Callers:
 *     PspJobIoRateVolumeEntryInsert @ 0x1405A2018 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A2150 (PspJobIoRateVolumeEntryReference.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405A2268 (PspJobIoRateVolumeEntryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLockTrackerCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
