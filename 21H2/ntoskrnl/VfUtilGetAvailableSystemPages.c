/*
 * XREFs of VfUtilGetAvailableSystemPages @ 0x1409C76E0
 * Callers:
 *     <none>
 * Callees:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x14067CEFC (MmManagePartitionMemoryInformation.c)
 */

__int64 __fastcall VfUtilGetAvailableSystemPages(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  result = MmCreatePartition(&ViSystemPartition, 1);
  if ( (int)result >= 0 )
  {
    if ( ViSystemPartition )
    {
      memset(&ViSystemPartitionMemoryInfo, 0, 0xF0uLL);
      dword_140C1D404 = -1;
      dword_140C1D408 = -1;
      result = MmManagePartitionMemoryInformation(
                 (ULONG_PTR **)&ViSystemPartition,
                 (__int64)&ViSystemPartitionMemoryInfo);
      if ( (int)result >= 0 )
        *a1 = qword_140C1D438;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
