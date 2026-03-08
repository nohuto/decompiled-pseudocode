/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1407C40A0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068A4D8 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IoFreeMiniCompletionPacket @ 0x1406F4D80 (IoFreeMiniCompletionPacket.c)
 *     IopFreeCompletionListPackets @ 0x1406F7B38 (IopFreeCompletionListPackets.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1403144E0 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(ULONG_PTR BugCheckParameter2)
{
  void (__fastcall *v2)(ULONG_PTR, _QWORD); // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // rdi

  if ( *(_BYTE *)(BugCheckParameter2 + 16) != 4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[7].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
      P = CurrentPrcb->PPLookasideList[7].L;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
      {
        ++P->FreeMisses;
        ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
        return;
      }
      if ( *(_BYTE *)(BugCheckParameter2 + 16) != 3 )
      {
LABEL_7:
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter2);
        return;
      }
    }
    else if ( *(_BYTE *)(BugCheckParameter2 + 16) != 3 )
    {
      goto LABEL_7;
    }
    ExReturnPoolQuota(BugCheckParameter2);
    goto LABEL_7;
  }
  v2 = *(void (__fastcall **)(ULONG_PTR, _QWORD))(BugCheckParameter2 + 56);
  if ( v2 )
  {
    v2(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 64));
  }
  else if ( *(_BYTE *)(BugCheckParameter2 + 72) )
  {
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
}
