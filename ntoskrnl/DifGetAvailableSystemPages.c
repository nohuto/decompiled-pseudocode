/*
 * XREFs of DifGetAvailableSystemPages @ 0x1405F61D4
 * Callers:
 *     VfLwSPEntry @ 0x1405F6278 (VfLwSPEntry.c)
 * Callees:
 *     MmCreatePartition @ 0x1403A6A3C (MmCreatePartition.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407059DC (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 result; // rax

  if ( DifIsVolatileMode )
  {
    DifpLwSPAvailableSystemPages = *(_QWORD *)(*(_QWORD *)qword_140C67048 + 17216LL);
    return 0LL;
  }
  else
  {
    result = MmCreatePartition((union _SLIST_HEADER **)&DifpSystemPartition, 1);
    if ( (int)result >= 0 )
    {
      if ( DifpSystemPartition )
      {
        memset(&DifpSPMemoryInfo, 0, 0xF0uLL);
        dword_140D18944 = -1;
        dword_140D18948 = -1;
        result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
        if ( (int)result >= 0 )
          DifpLwSPAvailableSystemPages = qword_140D18978;
      }
      else
      {
        return 3221225506LL;
      }
    }
  }
  return result;
}
