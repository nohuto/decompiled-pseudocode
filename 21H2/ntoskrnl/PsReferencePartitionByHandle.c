/*
 * XREFs of PsReferencePartitionByHandle @ 0x14067CE44
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405B0CD0 (EtwpSetPartitionContext.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1405F3A38 (MiAllocateVirtualMemoryCommon.c)
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1406E9EA0 (NtAllocateVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x14071CD10 (MiInitializeCreateSectionPacket.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089444C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14090969C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090CED0 (NtCreatePartition.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
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
