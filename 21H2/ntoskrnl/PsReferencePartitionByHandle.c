/*
 * XREFs of PsReferencePartitionByHandle @ 0x1407DE8D0
 * Callers:
 *     EtwpSetPartitionContext @ 0x14063383C (EtwpSetPartitionContext.c)
 *     MiInitializeCreateSectionPacket @ 0x1406FD6C0 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x1407DE5F0 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407E6840 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 *     PsCreatePartition @ 0x14085BC40 (PsCreatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140936BF8 (IopSetFileMemoryPartitionInformation.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x14096E4D8 (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspSetJobMemoryPartition @ 0x1409B08E8 (PspSetJobMemoryPartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r8
  void *v10; // r8
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
  }
  else if ( a1 == -2LL )
  {
    Next = (struct _SINGLE_LIST_ENTRY *)PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Next = v11;
  }
  if ( PsReferencePartitionSafe((__int64)Next) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
