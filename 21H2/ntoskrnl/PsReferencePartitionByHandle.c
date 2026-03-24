/*
 * XREFs of PsReferencePartitionByHandle @ 0x140692204
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405B0AA0 (EtwpSetPartitionContext.c)
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1405FA740 (NtAllocateVirtualMemory.c)
 *     NtManagePartition @ 0x140691E80 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406944E8 (MiAllocateVirtualMemoryCommon.c)
 *     MiInitializeCreateSectionPacket @ 0x140705930 (MiInitializeCreateSectionPacket.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1408942EC (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14090953C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090CD70 (NtCreatePartition.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, __int64 a2, __int64 a3, ULONG Tag, _QWORD *a5)
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
    result = ObpReferenceObjectByHandleWithTag(a1, Tag, (__int64)&v11, 0LL, 0LL);
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
