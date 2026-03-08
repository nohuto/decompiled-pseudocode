/*
 * XREFs of FsRtlNotifyFilterChangeDirectoryLite @ 0x140775CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1402417BC (FsRtlNotifySetCancelRoutine.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlNotifyCompleteIrp @ 0x140704270 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlIsNotifyOnList @ 0x140775FB0 (FsRtlIsNotifyOnList.c)
 *     FsRtlNotifyInitializeSync @ 0x1407760A0 (FsRtlNotifyInitializeSync.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyUninitializeSync @ 0x140870BA0 (FsRtlNotifyUninitializeSync.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14093CF84 (FsRtlCheckNotifyForDeleteLite.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyFilterChangeDirectoryLite(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        PIRP Irp,
        __int64 a7,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        __int64 a9)
{
  PIRP v13; // rbx
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v15; // r9d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 IsNotifyOnList; // rax
  __int64 Pool2; // rdx
  __int16 v19; // cx
  unsigned int v20; // r8d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  struct _LIST_ENTRY *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  PSECURITY_SUBJECT_CONTEXT v25; // rbx
  PNOTIFY_SYNC NotifySync; // [rsp+78h] [rbp+10h] BYREF

  v13 = Irp;
  if ( (_QWORD *)*a2 == a2 && !Irp )
    return;
  if ( !*a1 )
  {
    NotifySync = 0LL;
    FsRtlNotifyInitializeSync(&NotifySync);
    if ( _InterlockedCompareExchange64(a1, (signed __int64)NotifySync, 0LL) )
      FsRtlNotifyUninitializeSync(&NotifySync);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(struct _KTHREAD **)(*a1 + 56) )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)a1);
    *(_QWORD *)(*a1 + 56) = CurrentThread;
  }
  LOBYTE(v15) = 1;
  ++*(_DWORD *)(*a1 + 64);
  if ( !v13 )
  {
    FsRtlCheckNotifyForDeleteLite(a2);
    goto LABEL_31;
  }
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
  v13->IoStatus.Status = 0;
  v13->IoStatus.Information = 0LL;
  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    goto LABEL_27;
  IsNotifyOnList = FsRtlIsNotifyOnList(a2, a3);
  Pool2 = IsNotifyOnList;
  if ( IsNotifyOnList )
  {
    v19 = *(_WORD *)(IsNotifyOnList + 72);
    if ( (v19 & 4) == 0 )
    {
      if ( (v19 & 0x20) != 0 )
      {
        CurrentStackLocation->Control |= v15;
        v13->IoStatus.Status = -1073741738;
      }
      else
      {
        if ( (v19 & 0xA) != 2 )
        {
          v20 = *(_DWORD *)(IsNotifyOnList + 104);
          if ( v20 && (v19 & 8) == 0 )
          {
            *(_DWORD *)(IsNotifyOnList + 104) = 0;
            *(_DWORD *)(IsNotifyOnList + 108) = 0;
            FsRtlNotifyCompleteIrp(v13, IsNotifyOnList, v20, 0, 0);
            goto LABEL_31;
          }
          goto LABEL_12;
        }
        *(_WORD *)(IsNotifyOnList + 72) = v19 & 0xFFFD;
        v13->Tail.Overlay.CurrentStackLocation->Control |= v15;
        v13->IoStatus.Status = 268;
      }
LABEL_25:
      IofCompleteRequest(v13, v15);
      goto LABEL_31;
    }
LABEL_27:
    CurrentStackLocation->Control |= v15;
    v13->IoStatus.Status = 267;
    goto LABEL_25;
  }
  Pool2 = ExAllocatePool2(288LL, 128LL, 1316115270LL);
  *(_WORD *)(Pool2 + 72) |= 0x40u;
  *(_QWORD *)Pool2 = *a1;
  *(_QWORD *)(Pool2 + 8) = a3;
  *(_QWORD *)(Pool2 + 16) = a7;
  *(_QWORD *)(Pool2 + 24) = SubjectContext;
  SubjectContext = 0LL;
  *(_QWORD *)(Pool2 + 64) = a9;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 48;
  *(_QWORD *)(Pool2 + 48) = Pool2 + 48;
  v15 = 1;
  if ( (a4 & 1) != 0 )
    *(_WORD *)(Pool2 + 72) |= 1u;
  if ( CurrentStackLocation->MinorFunction == 3 )
    *(_DWORD *)(Pool2 + 116) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  else
    *(_DWORD *)(Pool2 + 116) = 1;
  *(_DWORD *)(Pool2 + 76) = a5;
  if ( (a4 & 2) == 0 )
    *(_DWORD *)(Pool2 + 96) = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)(Pool2 + 120) = v13->Tail.Overlay.Thread->Process;
  v23 = (_QWORD *)(Pool2 + 32);
  v24 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v24 != a2 )
LABEL_30:
    __fastfail(3u);
  *v23 = a2;
  *(_QWORD *)(Pool2 + 40) = v24;
  *v24 = v23;
  a2[1] = v23;
  *(_DWORD *)(Pool2 + 112) = 1;
LABEL_12:
  v13->IoStatus.Information = Pool2;
  v13->Tail.Overlay.CurrentStackLocation->Control |= v15;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v13->Tail.Overlay.ListEntry;
  v22 = *(struct _LIST_ENTRY **)(Pool2 + 56);
  if ( v22->Flink != (struct _LIST_ENTRY *)(Pool2 + 48) )
    goto LABEL_30;
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(Pool2 + 48);
  v13->Tail.Overlay.ListEntry.Blink = v22;
  v22->Flink = &p_ListEntry->ListEntry;
  *(_QWORD *)(Pool2 + 56) = p_ListEntry;
  _InterlockedAdd((volatile signed __int32 *)(Pool2 + 112), v15);
  FsRtlNotifySetCancelRoutine((__int64)v13, 0LL);
LABEL_31:
  if ( !--*(_DWORD *)(*a1 + 64) )
  {
    *(_QWORD *)(*a1 + 56) = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)a1);
  }
  v25 = SubjectContext;
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(v25, 0);
  }
}
