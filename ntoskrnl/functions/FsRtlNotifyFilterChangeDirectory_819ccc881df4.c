void __stdcall FsRtlNotifyFilterChangeDirectory(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PVOID FsContext,
        PSTRING FullDirectoryName,
        BOOLEAN WatchTree,
        BOOLEAN IgnoreBuffer,
        ULONG CompletionFilter,
        PIRP NotifyIrp,
        PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PFILTER_REPORT_CHANGE FilterCallback)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v16; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _QWORD *v18; // rax
  __int64 Pool2; // rdx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v23; // r8
  __int16 v24; // cx
  __int16 v25; // r8
  unsigned int v26; // eax

  if ( NotifyList->Flink == NotifyList && !NotifyIrp )
    return;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  LOBYTE(v16) = 1;
  ++*((_DWORD *)NotifySync + 16);
  if ( !NotifyIrp )
  {
    FsRtlCheckNotifyForDelete(NotifyList, FsContext);
    goto LABEL_36;
  }
  CurrentStackLocation = NotifyIrp->Tail.Overlay.CurrentStackLocation;
  NotifyIrp->IoStatus.Status = 0;
  NotifyIrp->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_19;
  v18 = FsRtlIsNotifyOnList(NotifyList, (__int64)FsContext);
  Pool2 = (__int64)v18;
  if ( v18 )
  {
    v25 = *((_WORD *)v18 + 36);
    if ( (v25 & 4) == 0 )
    {
      if ( (v25 & 0x20) != 0 )
      {
        CurrentStackLocation->Control |= v16;
        NotifyIrp->IoStatus.Status = -1073741738;
      }
      else
      {
        if ( (v25 & 0xA) != 2 )
        {
          v26 = *((_DWORD *)v18 + 26);
          if ( v26 && (v25 & 8) == 0 )
          {
            *(_DWORD *)(Pool2 + 104) = 0;
            *(_DWORD *)(Pool2 + 108) = 0;
            FsRtlNotifyCompleteIrp(NotifyIrp, Pool2, v26, 0, 0);
            goto LABEL_36;
          }
          goto LABEL_16;
        }
        *((_WORD *)v18 + 36) = v25 & 0xFFFD;
        NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
        NotifyIrp->IoStatus.Status = 268;
      }
LABEL_21:
      IofCompleteRequest(NotifyIrp, v16);
      goto LABEL_36;
    }
LABEL_19:
    CurrentStackLocation->Control |= v16;
    NotifyIrp->IoStatus.Status = 267;
    goto LABEL_21;
  }
  Pool2 = ExAllocatePool2(288LL, 152LL, 1316115270LL);
  *(_QWORD *)Pool2 = NotifySync;
  *(_QWORD *)(Pool2 + 8) = FsContext;
  *(_QWORD *)(Pool2 + 128) = CurrentStackLocation->FileObject->FsContext;
  *(_QWORD *)(Pool2 + 16) = TraverseCallback;
  *(_QWORD *)(Pool2 + 24) = SubjectContext;
  SubjectContext = 0LL;
  *(_QWORD *)(Pool2 + 64) = FilterCallback;
  *(_QWORD *)(Pool2 + 136) = FullDirectoryName;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v16 = 1;
  if ( WatchTree )
    *(_WORD *)(Pool2 + 72) |= 1u;
  if ( FullDirectoryName )
  {
    v24 = 2;
    if ( FullDirectoryName->Length < 2u || FullDirectoryName->Buffer[1] )
    {
      *(_BYTE *)(Pool2 + 144) = 1;
      v24 = 1;
    }
    else
    {
      *(_BYTE *)(Pool2 + 144) = 2;
    }
    if ( FullDirectoryName->Length == v24 )
      *(_WORD *)(Pool2 + 72) |= 0x10u;
  }
  else
  {
    *(_BYTE *)(Pool2 + 144) = 1;
  }
  *(_DWORD *)(Pool2 + 76) = CompletionFilter;
  if ( !IgnoreBuffer )
    *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)(Pool2 + 120) = NotifyIrp->Tail.Overlay.Thread->Process;
  v20 = (struct _LIST_ENTRY *)(Pool2 + 32);
  Blink = NotifyList->Blink;
  if ( Blink->Flink != NotifyList )
LABEL_35:
    __fastfail(3u);
  v20->Flink = NotifyList;
  *(_QWORD *)(Pool2 + 40) = Blink;
  Blink->Flink = v20;
  NotifyList->Blink = v20;
  *(_DWORD *)(Pool2 + 112) = 1;
LABEL_16:
  NotifyIrp->IoStatus.Information = Pool2;
  NotifyIrp->Tail.Overlay.CurrentStackLocation->Control |= v16;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&NotifyIrp->Tail.Overlay.ListEntry;
  v23 = *(struct _LIST_ENTRY **)(Pool2 + 56);
  if ( v23->Flink != (struct _LIST_ENTRY *)(Pool2 + 48) )
    goto LABEL_35;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
  NotifyIrp->Tail.Overlay.ListEntry.Blink = v23;
  v23->Flink = &p_ListEntry->ListEntry;
  *(_QWORD *)(Pool2 + 56) = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v16);
  FsRtlNotifySetCancelRoutine((__int64)NotifyIrp, 0LL);
LABEL_36:
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
  if ( SubjectContext )
  {
    if ( FullDirectoryName )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
}
