/*
 * XREFs of IopSynchronousServiceTail @ 0x14064C4A0
 * Callers:
 *     IopQueueCopyWrite @ 0x1403F12A0 (IopQueueCopyWrite.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     NtQueryDirectoryFileEx @ 0x1406C89B0 (NtQueryDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     IoGetIoPriorityHint @ 0x1402547C0 (IoGetIoPriorityHint.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 *     IopQueueIrpToFileObject @ 0x1402F1100 (IopQueueIrpToFileObject.c)
 *     IoSetActivityIdThread @ 0x14032D510 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F08E4 (IopWaitForSynchronousIoEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     PsIsProcessAppContainer @ 0x140690804 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        _DWORD *a4,
        char a5,
        char a6,
        unsigned int a7)
{
  _QWORD *v7; // rsi
  char v9; // r12
  LARGE_INTEGER AllocationSize; // rax
  __int64 v12; // r15
  __int64 FileObjectExtension; // rbx
  __int64 v14; // r8
  _DWORD *v15; // r9
  PIO_STATUS_BLOCK UserIosb; // rcx
  _DWORD *v17; // rax
  unsigned int v18; // esi
  PVOID v19; // rbp
  struct _KTHREAD *v20; // rax
  unsigned int v21; // eax
  ULONG DeviceType; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rcx
  ULONG v25; // eax
  unsigned int v26; // edx
  struct _KTHREAD *v27; // r8
  unsigned int v28; // edx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  PETHREAD Thread; // rdx
  ULONG Flags; // eax
  _BYTE *v32; // rax
  struct _LIST_ENTRY *v34; // rbx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  bool v40; // zf
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v43; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  struct _LIST_ENTRY v45; // [rsp+48h] [rbp-50h] BYREF

  v7 = (_QWORD *)a3;
  v9 = (char)a4;
  Object = (PVOID)a3;
  AllocationSize = Irp->Overlay.AllocationSize;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  v12 = *(_QWORD *)(a3 + 176);
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_23;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3, a3, a4) )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_23:
    IopQueueThreadIrp((__int64)Irp);
    goto LABEL_24;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v7 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object, v14, v15) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_23;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_24:
  v17 = (_DWORD *)v7[26];
  if ( v17 && (*v17 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v18 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v19 = Object;
    goto LABEL_69;
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType - 7 <= 2 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      v21 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v21 = 11996;
    }
  }
  else
  {
    v20 = KeGetCurrentThread();
    ++v20->OtherOperationCount;
    v21 = 12004;
  }
  __incgsdword(v21);
  v19 = Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v24 = v7[26];
  if ( v24 && *(_DWORD *)(v24 + 80) )
  {
    v25 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v25;
    v26 = *(_DWORD *)(v24 + 80);
  }
  else
  {
    v27 = KeGetCurrentThread();
    v28 = (*((_DWORD *)&v27[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v27->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v28 = 0;
    if ( v28 < 2 && v27 == KeGetCurrentThread() && LODWORD(v27[1].Timer.TimerListEntry.Flink) )
      v28 = 2;
    v26 = v28 + 1;
    v19 = Object;
    v25 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v25;
  }
  Irp->Flags = v25 | (v26 << 17);
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_54;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( !Thread || (Thread->MiscFlags & 0x400) == 0 && (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = Irp->Flags;
      ++IoKernelIssuedIoBoostedCount;
      Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      goto LABEL_59;
    }
LABEL_54:
    if ( IoPriorityHint < IoPriorityNormal )
    {
      if ( a7 )
      {
        if ( a7 == 1 )
          ++IoLowPriorityWriteOperationCount;
      }
      else
      {
        ++IoLowPriorityReadOperationCount;
      }
    }
  }
LABEL_59:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v32 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v32 & 2) != 0 )
  {
    v45 = *(struct _LIST_ENTRY *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v34 = IoSetActivityIdThread(&v45);
    v18 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v34);
  }
  else
  {
    v18 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v19);
LABEL_69:
  if ( v9 && v18 != 259 )
  {
    v44 = 0LL;
    v43 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v44, &v43, (ULONG_PTR *)&Object, &v43);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v40 = (v39 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v39;
          if ( v40 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v19 = Object;
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v18 == 259 )
    {
      IopWaitForSynchronousIoEvent(Irp, a5, (*((_DWORD *)v19 + 20) & 4) != 0, (_DWORD *)v19 + 38);
      v18 = *((_DWORD *)v19 + 14);
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)v19);
  }
  else if ( v12 && (v18 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v18;
}
