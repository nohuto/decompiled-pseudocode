BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // rsi
  LONGLONG v11; // rbx
  char *FsContext; // r12
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v14; // rdi
  __int64 v15; // r9
  char v16; // al
  LONGLONG v17; // rax

  v7 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v7 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v11 = FileOffset->QuadPart + v7;
    FsContext = (char *)FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    __incgsdword(0x8444u);
    v14 = (PERESOURCE *)(FsContext + 8);
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v16 = FsContext[5];
      if ( v16 )
      {
        if ( v16 != 2
          || (LOBYTE(v15) = 1,
              ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
                FileObject,
                FileOffset,
                (unsigned int)v7,
                v15,
                LockKey,
                1,
                IoStatus,
                DeviceObject)) )
        {
          v17 = *((_QWORD *)FsContext + 4);
          if ( v11 > v17 )
          {
            if ( FileOffset->QuadPart >= v17 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(*v14);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              return 1;
            }
            LODWORD(v7) = v17 - FileOffset->LowPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v7, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(*v14);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    __incgsdword(0x8448u);
  }
  return 0;
}
