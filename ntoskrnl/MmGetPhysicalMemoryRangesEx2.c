/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x1408362B0
 * Callers:
 *     PfpMemoryRangesQuery @ 0x140392CCC (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140836270 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPhysicalMemoryRanges @ 0x140836290 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x140836318 (MiGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(void **a1, unsigned int a2)
{
  void ***v3; // rax
  void ***v4; // rdi
  __int64 PhysicalMemoryRanges; // rbx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 2) != 0 && a1 )
    return 0LL;
  v3 = MiPartitionObjectToPartition(a1, 0, &v7);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(v3, a2);
  if ( v7 )
    PsDereferencePartition((__int64)v4[25]);
  return PhysicalMemoryRanges;
}
