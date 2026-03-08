/*
 * XREFs of PsReferencePartitionByHandle @ 0x14070591C
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405FF3A0 (EtwpSetPartitionContext.c)
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1407C4A70 (MiAllocateVirtualMemoryCommon.c)
 *     MiInitializeCreateSectionPacket @ 0x1407D0AE0 (MiInitializeCreateSectionPacket.c)
 *     SmProcessCompressionInfoRequest @ 0x140840C00 (SmProcessCompressionInfoRequest.c)
 *     PsCreatePartition @ 0x140855A0C (PsCreatePartition.c)
 *     SmProcessConfigRequest @ 0x1408582AC (SmProcessConfigRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140944B5C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 *     SmProcessListRequest @ 0x1409D3FBC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D489C (SmProcessSystemStoreTrimRequest.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PsReferencePartitionByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        ULONG Tag,
        PVOID *DesiredAccess)
{
  int v5; // ebx
  PVOID Next; // rcx
  char v9; // al
  PVOID v10; // rcx
  NTSTATUS result; // eax
  PVOID Handle; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  Handle = 0LL;
  if ( a1 == (void *)-1LL )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
LABEL_3:
    Handle = Next;
    goto LABEL_4;
  }
  if ( a1 == (void *)-2LL )
  {
    Next = PspSystemPartition;
    goto LABEL_3;
  }
  result = ObReferenceObjectByHandleWithTag(a1, a2, PsPartitionType, a3, Tag, &Handle, 0LL);
  if ( result < 0 )
    return result;
  Next = Handle;
LABEL_4:
  v9 = PsReferencePartitionSafe((__int64)Next);
  v10 = Handle;
  if ( v9 )
    *DesiredAccess = Handle;
  else
    v5 = -1073740640;
  if ( (unsigned __int64)a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
