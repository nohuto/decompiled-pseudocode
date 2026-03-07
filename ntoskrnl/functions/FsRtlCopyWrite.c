BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rsi
  BOOLEAN v12; // r15
  char v13; // r12
  char *FsContext; // r13
  ULONG_PTR v15; // rbx
  LONGLONG v16; // rsi
  LONGLONG QuadPart; // r14
  struct _KTHREAD *CurrentThread; // rax
  LARGE_INTEGER *v19; // r12
  __int64 v20; // r9
  char v21; // r8
  LARGE_INTEGER v22; // rdi
  LONGLONG v23; // rbx
  PFILE_OBJECT v24; // r10
  char v25; // cl
  ULONG *v26; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  PLARGE_INTEGER v29; // rdx
  struct _ERESOURCE *v30; // rcx
  struct _ERESOURCE *v31; // rcx
  BOOLEAN v32; // [rsp+50h] [rbp-98h]
  char v33; // [rsp+51h] [rbp-97h]
  char v34; // [rsp+52h] [rbp-96h]
  LONGLONG v35; // [rsp+58h] [rbp-90h]
  LARGE_INTEGER FileOffseta; // [rsp+60h] [rbp-88h] BYREF
  signed __int64 v37; // [rsp+68h] [rbp-80h]
  LONGLONG v38; // [rsp+70h] [rbp-78h]
  LONGLONG v39; // [rsp+78h] [rbp-70h]
  char *v40; // [rsp+80h] [rbp-68h]
  LARGE_INTEGER *v41; // [rsp+88h] [rbp-60h]
  ULONG *p_Flags; // [rsp+90h] [rbp-58h]
  __int128 v43[5]; // [rsp+98h] [rbp-50h] BYREF
  LONGLONG *v46; // [rsp+F8h] [rbp+10h]

  v9 = Length;
  v12 = 0;
  v32 = 1;
  v34 = 0;
  if ( FileOffset->LowPart != -1 || (v13 = 1, FileOffset->HighPart != -1) )
    v13 = 0;
  v33 = v13;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v40 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0) )
    return 0;
  p_Flags = &FileObject->Flags;
  if ( (FileObject->Flags & 0x10) != 0 || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
    return 0;
  IoStatus->Status = 0;
  v15 = v9;
  v37 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v16 = 0LL;
  v38 = 0LL;
  QuadPart = 0LL;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v13
    || (v19 = (LARGE_INTEGER *)(FsContext + 40),
        (signed __int64)(v15 + FileOffset->QuadPart) > *((_QWORD *)FsContext + 5)) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_39;
    v19 = (LARGE_INTEGER *)(FsContext + 40);
    v21 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_39:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 0;
    }
    v21 = 1;
  }
  v41 = v19;
  if ( v33 )
    v22 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v22 = *FileOffset;
  v23 = v22.QuadPart + v15;
  HIDWORD(v35) = HIDWORD(v23);
  FileOffseta = v22;
  v24 = FileObject;
  if ( !FileObject->PrivateCacheMap
    || (v25 = FsContext[5]) == 0
    || v22.QuadPart >= v19->QuadPart + 0x2000
    || 0x7FFFFFFFFFFFFFFFLL - v22.QuadPart < v37
    || v23 > *((_QWORD *)FsContext + 3) )
  {
LABEL_38:
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    goto LABEL_39;
  }
  if ( v21 && v23 > v19->QuadPart )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_39;
    if ( v33 )
    {
      v22 = *(LARGE_INTEGER *)(FsContext + 32);
      FileOffseta = v22;
      v23 = v22.QuadPart + v37;
      v35 = v22.QuadPart + v37;
    }
    v24 = FileObject;
    if ( FileObject->PrivateCacheMap )
    {
      v25 = FsContext[5];
      if ( v25 )
      {
        if ( v23 <= *((_QWORD *)FsContext + 3) )
          goto LABEL_21;
      }
    }
    goto LABEL_38;
  }
LABEL_21:
  if ( v25 != 2 )
    goto LABEL_22;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v43[0] = 0LL;
  v29 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v29 = (PLARGE_INTEGER)(FsContext + 32);
  LOBYTE(v20) = Wait;
  if ( ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoCheckIfPossible)(
         v24,
         v29,
         Length,
         v20,
         LockKey,
         0,
         v43,
         DeviceObject) )
  {
LABEL_22:
    v46 = (LONGLONG *)(FsContext + 32);
    if ( v23 > *((_QWORD *)FsContext + 4) )
    {
      v34 = 1;
      v16 = *((_QWORD *)FsContext + 4);
      v38 = v16;
      QuadPart = v19->QuadPart;
      v39 = v19->QuadPart;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v35) || !*((_QWORD *)FsContext + 2) )
      {
        *((_QWORD *)FsContext + 4) = v23;
      }
      else
      {
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 2), 1u);
        *v46 = v23;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v22.QuadPart > v19->QuadPart )
      v32 = CcZeroData(FileObject, v19, &FileOffseta, Wait);
    if ( v32 )
      v32 = CcCopyWrite(FileObject, &FileOffseta, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v32 )
    {
      if ( v23 > v19->QuadPart )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v35)
          || (v30 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          v19->QuadPart = v23;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v30, 1u);
          v19->QuadPart = v23;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      v26 = p_Flags;
      *p_Flags |= 0x1000u;
      if ( v34 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v23;
        *v26 |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v22.QuadPart + v37;
    }
    else if ( v34 )
    {
      v31 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v31 )
      {
        ExAcquireResourceExclusiveLite(v31, 1u);
        *v46 = v16;
        v19->QuadPart = QuadPart;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *v46 = v16;
        v19->QuadPart = QuadPart;
      }
    }
    v12 = v32;
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
