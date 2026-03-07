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
