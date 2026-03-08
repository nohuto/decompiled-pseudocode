/*
 * XREFs of CcZeroData @ 0x140243410
 * Callers:
 *     FsRtlCopyWrite @ 0x14084D5B0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093A640 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     CcGetPartitionFromFileObject @ 0x140243818 (CcGetPartitionFromFileObject.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcZeroDataOnDisk @ 0x1403BB780 (CcZeroDataOnDisk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rcx
  char v8; // r14
  __int64 v9; // rbx
  unsigned __int8 OldIrql; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  unsigned int SectorSize; // r12d
  unsigned int v13; // edi
  LONGLONG v14; // rax
  int v15; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // r15d
  unsigned __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  __int64 PartitionFromFileObject; // [rsp+50h] [rbp-78h]
  int v25; // [rsp+58h] [rbp-70h]
  int v26; // [rsp+5Ch] [rbp-6Ch]
  __int128 v27; // [rsp+60h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  BOOLEAN v29; // [rsp+D0h] [rbp+8h]
  LONGLONG v30; // [rsp+D8h] [rbp+10h] BYREF
  PLARGE_INTEGER v31; // [rsp+E0h] [rbp+18h]
  BOOLEAN v32; // [rsp+E8h] [rbp+20h]

  v32 = Wait;
  v31 = EndOffset;
  QuadPart = StartOffset->QuadPart;
  v30 = StartOffset->QuadPart;
  v23 = 0LL;
  v29 = 0;
  PartitionFromFileObject = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  PartitionFromFileObject = CcGetPartitionFromFileObject(FileObject);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 1296)) <= 1 )
    __fastfail(0xEu);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( !v8
    && v9 <= 0x200000
    && (*(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 17216LL) >= 0x800uLL || v9 <= 0x2000)
    || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v13 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v13 = 0;
    if ( v8 )
    {
      if ( (v13 & (unsigned int)v30) != 0 )
      {
        v27 = 0LL;
        v30 += v13;
        LODWORD(v30) = v30 & ~v13;
        v21 = v30 - StartOffset->LowPart;
        if ( !CcZeroDataInCache((__int64)FileObject, (__int64 *)StartOffset, v21, v32) )
          goto LABEL_44;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)StartOffset, v21, 0LL, 0, &v27, 0LL);
        if ( (int)v27 < 0 )
          RtlRaiseStatus((unsigned int)v27);
      }
LABEL_16:
      if ( v30 < v31->QuadPart )
      {
        v14 = v13 + v31->QuadPart;
        v23 = (~v13 | 0xFFFFFFFF00000000uLL) & v14;
        CcZeroDataOnDisk(FileObject, &v30, &v23, SectorSize);
      }
      v29 = 1;
      goto LABEL_44;
    }
    if ( *(_QWORD *)(**(_QWORD **)(PartitionFromFileObject + 8) + 17216LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v13 & (unsigned int)v30) != 0 )
      {
        v26 = (v30 + (unsigned __int64)v13) >> 32;
        v15 = (v30 + v13) & ~v13;
        v25 = v15;
LABEL_24:
        LODWORD(v9) = v15 - v30;
        goto LABEL_13;
      }
      if ( v9 > 0x2000 )
      {
        LODWORD(v9) = 0;
LABEL_13:
        if ( (_DWORD)v9 && !CcZeroDataInCache((__int64)FileObject, &v30, v9, Wait) )
          goto LABEL_44;
        v30 += (unsigned int)v9;
        goto LABEL_16;
      }
    }
    if ( v9 <= 0x200000 )
      goto LABEL_13;
    DWORD1(v27) = (v30 + 0x200000 + (unsigned __int64)v13) >> 32;
    v15 = (v30 + 0x200000 + v13) & ~v13;
    LODWORD(v27) = v15;
    goto LABEL_24;
  }
LABEL_44:
  CcDereferencePartition(PartitionFromFileObject);
  return v29;
}
