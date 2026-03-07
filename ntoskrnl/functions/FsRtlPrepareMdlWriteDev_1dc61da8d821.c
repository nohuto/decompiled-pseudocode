BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  LONGLONG v9; // rsi
  __int64 v10; // r14
  char v11; // di
  char *FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  char v16; // r8
  LARGE_INTEGER v17; // rdi
  LONGLONG v18; // rbx
  char v19; // cl
  ULONG v20; // r10d
  LONGLONG *v21; // r13
  struct _ERESOURCE *v22; // rcx
  struct _ERESOURCE *v23; // rcx
  ULONG *v24; // rdx
  struct _ERESOURCE *v25; // rcx
  BOOLEAN v26; // [rsp+50h] [rbp-78h]
  char v27; // [rsp+51h] [rbp-77h]
  char v28; // [rsp+52h] [rbp-76h]
  int v29; // [rsp+5Ch] [rbp-6Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  LONGLONG v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+70h] [rbp-58h]
  char *v33; // [rsp+78h] [rbp-50h]
  ULONG *p_Flags; // [rsp+80h] [rbp-48h]

  v9 = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  v26 = 1;
  v27 = 0;
  if ( FileOffset->LowPart != -1 || (v11 = 1, FileOffset->HighPart != -1) )
    v11 = 0;
  v28 = v11;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( !CcCanIWrite(FileObject, Length, 1u, 0) )
    return 0;
  p_Flags = &FileObject->Flags;
  if ( (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v33 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 || Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v16 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v16 = 1;
  }
  if ( v11 )
    v17 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v17 = *FileOffset;
  v18 = v17.QuadPart + Length;
  v29 = HIDWORD(v18);
  EndOffset = v17;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_52;
  v19 = FsContext[5];
  if ( !v19 )
    goto LABEL_52;
  v20 = Length;
  if ( 0x7FFFFFFFFFFFFFFFLL - v17.QuadPart < Length || v18 > *((_QWORD *)FsContext + 3) )
    goto LABEL_52;
  if ( v16 && v18 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v28 )
    {
      v17 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v17;
      v20 = Length;
      v18 = v17.QuadPart + Length;
      v29 = HIDWORD(v18);
    }
    else
    {
      v20 = Length;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_52;
    v19 = FsContext[5];
    if ( !v19 || v18 > *((_QWORD *)FsContext + 3) )
      goto LABEL_52;
  }
  if ( v19 == 2 )
  {
    LOBYTE(v15) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            v20,
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
  v21 = (LONGLONG *)(FsContext + 32);
  if ( v18 > *((_QWORD *)FsContext + 4) )
  {
    v27 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v31 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v32 = v10;
    if ( *((_DWORD *)FsContext + 9) == v29 || (v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *v21 = v18;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
      *v21 = v18;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v17.QuadPart > *((_QWORD *)FsContext + 5) )
    v26 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v26 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v26 )
  {
    if ( v18 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v29 || (v23 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v18;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v23, 1u);
        *((_QWORD *)FsContext + 5) = v18;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    v24 = p_Flags;
    *p_Flags |= 0x1000u;
    if ( v27 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v18;
      *v24 |= 0x2000u;
    }
  }
  else if ( v27 )
  {
    v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v25 )
    {
      ExAcquireResourceExclusiveLite(v25, 1u);
      *v21 = v9;
      *((_QWORD *)FsContext + 5) = v10;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *v21 = v9;
      *((_QWORD *)FsContext + 5) = v10;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v26;
}
