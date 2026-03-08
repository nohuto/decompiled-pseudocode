/*
 * XREFs of MiSegmentDelete @ 0x1406A6FD4
 * Callers:
 *     MiDestroySection @ 0x1402017AC (MiDestroySection.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 *     MiDereferenceControlAreaProbe @ 0x140214FAC (MiDereferenceControlAreaProbe.c)
 *     ObFastReplaceObject @ 0x140217FC8 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MiDeleteSegmentPages @ 0x14034BEB8 (MiDeleteSegmentPages.c)
 *     MiReleaseControlAreaCharges @ 0x14034C8D8 (MiReleaseControlAreaCharges.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14036CBB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeletePageFileSectionNodes @ 0x1407F349C (MiDeletePageFileSectionNodes.c)
 *     MiLogSectionCreate @ 0x140A2C970 (MiLogSectionCreate.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // rbp
  volatile __int64 *v2; // r15
  int v3; // ebx
  int v5; // edi
  ULONG_PTR v6; // rdx
  _QWORD *v7; // r14
  __int64 v8; // r12
  void *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  BOOL v14; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)a1;
  v2 = (volatile __int64 *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v6 = a1 + 128;
  v14 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v7 = (_QWORD *)MiPrepareSegmentForDeletion(a1, v6);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v7);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v8 = MiDeleteSegmentPages((__int64 *)a1);
  v9 = 0LL;
  v10 = MiReleaseControlAreaCharges(a1, 0LL);
  if ( (v3 & 0x82) == 0x80 )
    v9 = (void *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*(unsigned __int64 **)(a1 + 96), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    MiDeletePageFileSectionNodes(a1);
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v14, v10);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v11 = 8LL * *(_QWORD *)(a1 + 120);
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v8;
}
