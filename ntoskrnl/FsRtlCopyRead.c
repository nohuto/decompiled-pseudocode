/*
 * XREFs of FsRtlCopyRead @ 0x140939DF0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     IoGetTopLevelIrp @ 0x140343AD0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140343AF0 (IoSetTopLevelIrp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // r14
  LONGLONG v13; // rbx
  char *FsContext; // r12
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rsi
  BOOLEAN v17; // di
  __int64 v18; // r9
  char v19; // al
  LONGLONG v20; // rax

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( (_DWORD)v9 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
    {
      IoStatus->Status = -1073741811;
      IoStatus->Information = 0LL;
      return 0;
    }
    v13 = v9 + FileOffset->QuadPart;
    FsContext = (char *)FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (PERESOURCE *)(FsContext + 8);
    if ( Wait )
    {
      __incgsdword(0x2EC8u);
      v17 = 1;
      ExAcquireResourceSharedLite(*v16, 1u);
    }
    else
    {
      __incgsdword(0x2EC4u);
      if ( !ExAcquireResourceSharedLite(*v16, 0) )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        __incgsdword(0x8480u);
        return 0;
      }
      v17 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v19 = FsContext[5]) == 0
      || v19 == 2
      && (LOBYTE(v18) = Wait,
          !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
             FileObject,
             FileOffset,
             (unsigned int)v9,
             v18,
             LockKey,
             1,
             IoStatus,
             DeviceObject)) )
    {
      ExReleaseResourceLite(*v16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      __incgsdword(0x2ECCu);
      return 0;
    }
    v20 = *((_QWORD *)FsContext + 4);
    if ( v13 > v20 )
    {
      if ( FileOffset->QuadPart >= v20 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_22:
        ExReleaseResourceLite(*v16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v17;
      }
      LODWORD(v9) = v20 - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v17 = CcCopyReadEx(FileObject, (__int64 *)FileOffset, v9, Wait, Buffer, IoStatus, 0LL);
    FileObject->Flags |= 0x80000u;
    if ( v17 )
      FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
    IoSetTopLevelIrp(0LL);
    goto LABEL_22;
  }
  IoStatus->Status = 0;
  IoStatus->Information = 0LL;
  return 1;
}
