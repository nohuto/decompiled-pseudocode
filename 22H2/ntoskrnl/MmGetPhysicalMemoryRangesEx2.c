/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x14076F3C0
 * Callers:
 *     PfpMemoryRangesQuery @ 0x14037E7CC (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407CCD10 (MmGetPhysicalMemoryRanges.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407D5690 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403574E0 (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F428 (MiGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(ULONG_PTR **a1, unsigned int a2)
{
  ULONG_PTR *v3; // rax
  ULONG_PTR *v4; // rdi
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
    PsDereferencePartition(v4[22]);
  return PhysicalMemoryRanges;
}
