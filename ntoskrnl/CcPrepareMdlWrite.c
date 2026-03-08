/*
 * XREFs of CcPrepareMdlWrite @ 0x1402FD600
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcGetVirtualAddress @ 0x14021FB80 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14021FF20 (CcMapAndRead.c)
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     CcForceWriteThrough @ 0x1402FD990 (CcForceWriteThrough.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  ULONG v7; // r15d
  char *SharedCacheMap; // r14
  LONGLONG QuadPart; // rbx
  LONGLONG v10; // rsi
  LONGLONG v11; // r13
  LONGLONG v12; // rcx
  unsigned int v13; // r15d
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // r9
  char v17; // bl
  __int64 v18; // rbx
  struct _KEVENT *v19; // rcx
  PMDL v20; // rcx
  struct _MDL *Next; // rax
  __int64 v22; // rdx
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  ULONG v29; // [rsp+30h] [rbp-C8h] BYREF
  int v30; // [rsp+34h] [rbp-C4h]
  int v31; // [rsp+38h] [rbp-C0h]
  int v32; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+48h] [rbp-B0h]
  struct _MDL *Mdl; // [rsp+50h] [rbp-A8h]
  __int64 v35; // [rsp+58h] [rbp-A0h] BYREF
  LONGLONG v36; // [rsp+60h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  LONGLONG v38; // [rsp+80h] [rbp-78h]
  __int64 VirtualAddress; // [rsp+88h] [rbp-70h]
  PMDL i; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *v42; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v43; // [rsp+A8h] [rbp-50h]
  ULONG v44; // [rsp+110h] [rbp+18h]

  v44 = Length;
  v5 = Length;
  Mdl = 0LL;
  v33 = 0LL;
  v31 = 0;
  v7 = 0;
  v32 = 0;
  v35 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v36 = QuadPart;
  v10 = QuadPart;
  v11 = QuadPart;
  while ( v5 )
  {
    v29 = 0;
    v38 = 0LL;
    VirtualAddress = CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v35, &v29, 0, 0);
    v12 = v10;
    v13 = v29;
    if ( v29 > v5 )
    {
      v13 = v5;
      v29 = v5;
      v12 = v11;
    }
    v10 = v12 + v13;
    v38 = v10;
    v14 = 2;
    v30 = 2;
    if ( (QuadPart & 0xFFF) == 0 )
    {
      if ( v13 >= 0x1000 )
        v14 = 3;
      v30 = v14;
    }
    if ( (v10 & 0xFFF) == 0 )
    {
      v14 |= 4u;
      v30 = v14;
    }
    v33 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    ExAcquireFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
    v33 = *((_QWORD *)SharedCacheMap + 6) - v33;
    v15 = v33;
    ExReleaseFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
    if ( v15 <= 0 )
    {
      v14 |= 7u;
      goto LABEL_17;
    }
    if ( !HIDWORD(v33) && (unsigned int)v15 <= 0x1000 )
    {
      v14 |= 6u;
LABEL_17:
      v30 = v14;
    }
    CcMapAndRead(v13, v14, 1, VirtualAddress);
    Mdl = (struct _MDL *)IopAllocateMdl(VirtualAddress, v13, 0, v16, 0LL, 0);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v17 = BYTE5(CurrentThread[1].Queue) + 2;
    v31 = BYTE5(CurrentThread[1].Queue) + 2;
    v42 = CurrentThread;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages(Mdl, 0, 1);
    v43 = KeGetCurrentThread();
    BYTE5(v43[1].Queue) = v17 - 2;
    v31 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
    if ( v10 > *((_QWORD *)SharedCacheMap + 6) )
      *((_QWORD *)SharedCacheMap + 6) = v10;
    ExReleaseFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
    v18 = *(_QWORD *)(v35 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v35 + 16)) )
    {
      v19 = *(struct _KEVENT **)(v18 + 192);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
      _InterlockedAdd((volatile signed __int32 *)(v18 + 552), 0xFFFFFFFF);
    }
    v35 = 0LL;
    v20 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v20->Next;
        if ( !v20->Next )
          break;
        v20 = v20->Next;
      }
      v20->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    Mdl = 0LL;
    QuadPart = v10;
    v36 = v10;
    v11 = v10;
    v7 = v29 + v32;
    v32 += v29;
    v5 = v44 - v29;
    v44 -= v29;
  }
  v22 = *((_QWORD *)SharedCacheMap + 67);
  IoStatus->Status = 0;
  IoStatus->Information = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 768), &LockHandle);
  ++*((_DWORD *)SharedCacheMap + 1);
  ++*((_DWORD *)SharedCacheMap + 136);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v28 = (v27 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v27;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}
