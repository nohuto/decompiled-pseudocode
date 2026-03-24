/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14088B300
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x1402D73D0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x1402D73F0 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x14031B530 (FsRtlIsNtstatusExpected.c)
 *     CcPrepareMdlWrite @ 0x1403259D0 (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x140359820 (CcZeroData.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // di
  char *FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  __int64 v19; // r8
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  BOOLEAN v23; // [rsp+50h] [rbp-68h]
  char v24; // [rsp+51h] [rbp-67h]
  char v25; // [rsp+52h] [rbp-66h]
  int v26; // [rsp+5Ch] [rbp-5Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp-48h]
  char *v30; // [rsp+78h] [rbp-40h]

  v9 = 0LL;
  v28 = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  v23 = 1;
  v24 = 0;
  if ( FileOffset->LowPart != -1 || (v11 = 1, FileOffset->HighPart != -1) )
    v11 = 0;
  v25 = v11;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, Length, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v30 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 || Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    LOBYTE(v15) = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    LOBYTE(v15) = 1;
  }
  if ( v11 )
    v16 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v16 = *FileOffset;
  v17 = v16.QuadPart + Length;
  v26 = HIDWORD(v17);
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_52;
  v18 = FsContext[5];
  if ( !v18 )
    goto LABEL_52;
  v19 = Length;
  if ( 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < Length || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_52;
  if ( (_BYTE)v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v25 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v19 = Length;
      v17 = v16.QuadPart + Length;
      v26 = HIDWORD(v17);
    }
    else
    {
      v19 = Length;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_52;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_52;
  }
  if ( v18 == 2 )
  {
    LOBYTE(v15) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, __int64, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            v19,
            v15,
            LockKey,
            0,
            IoStatus,
            DeviceObject) )
    {
LABEL_52:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 0;
    }
  }
  if ( v17 > *((_QWORD *)FsContext + 4) )
  {
    v24 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v28 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v29 = v10;
    if ( *((_DWORD *)FsContext + 9) == v26 || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v20, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v23 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v23 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v23 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v26 || (v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v21, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v24 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v24 )
  {
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v22 )
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v23;
}
