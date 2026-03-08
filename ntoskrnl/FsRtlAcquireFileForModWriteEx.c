/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x140212E3C
 * Callers:
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402DCE90 (ExConvertExclusiveToSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140343B10 (IoGetBaseFileSystemDeviceObject.c)
 *     FsFilterCtrlInit @ 0x140343B50 (FsFilterCtrlInit.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140343BE0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140343C70 (FsFilterPerformCallbacks.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     FsFilterFreeCompletionStack @ 0x140456CDA (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v4; // ebx
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r13
  struct _ERESOURCE **v17; // r12
  int v18; // eax
  char v19; // r13
  __int64 (__fastcall *AcquireForModWrite)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _DRIVER_OBJECT *v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rcx
  char v26; // si
  struct _ERESOURCE *v27; // rbx
  BOOLEAN i; // al
  char v29; // cl
  struct _ERESOURCE *v30; // rcx
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v33; // [rsp+40h] [rbp-C0h]
  _QWORD *v34; // [rsp+48h] [rbp-B8h]
  _QWORD v35[72]; // [rsp+50h] [rbp-B0h] BYREF

  v33 = a3;
  v32 = a2;
  memset(v35, 0, 0x238uLL);
  v4 = 0;
  v31 = 0;
  v34 = v35;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
     || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v17 = v33;
    v34 = 0LL;
    v19 = 0;
    goto LABEL_12;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v35, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)FileObject, 1);
  if ( (int)result < 0 )
    return result;
  v16 = v32;
  v17 = v33;
  LOBYTE(v15) = 1;
  v35[3] = v32;
  LOBYTE(v14) = 1;
  v35[4] = v33;
  v18 = FsFilterPerformCallbacks(v35, v14, v15, &v31);
  v4 = v18;
  if ( v18 >= 0 )
  {
    if ( !v18 )
    {
      FileObject = (PFILE_OBJECT)v35[2];
      if ( (v35[8] & 4) != 0 )
      {
        BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v35[1], 1953261124LL);
        v19 = 1;
        v21 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v21->FastIoDispatch;
        AddDevice = v21->DriverExtension[1].AddDevice;
      }
      else
      {
        v19 = 0;
      }
LABEL_12:
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
        && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0x80
          && (AcquireForModWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->AcquireForModWrite) != 0LL )
        {
          v4 = AcquireForModWrite(FileObject, v32, v17, BaseFileSystemDeviceObject);
        }
        else
        {
          v4 = -1073741808;
        }
        v31 |= 1u;
      }
      if ( v19 )
        ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
      v16 = v32;
      goto LABEL_25;
    }
    v4 = 0;
    if ( v18 != 294 )
      v4 = v18;
  }
LABEL_25:
  if ( v4 == -1073741808 && (v31 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( !*((_QWORD *)FsContext + 1) )
    {
      *v17 = 0LL;
LABEL_46:
      v4 = 0;
      goto LABEL_26;
    }
    v23 = *((_BYTE *)FsContext + 4);
    if ( (v23 & 8) != 0 || (v24 = *((_QWORD *)FsContext + 5), *v16 > v24) && v24 != *((_QWORD *)FsContext + 4) )
    {
      v26 = 1;
    }
    else
    {
      if ( (v23 & 0x10) == 0 )
      {
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v25 )
        {
          v26 = 0;
LABEL_56:
          v27 = v25;
          if ( v26 )
            goto LABEL_58;
          for ( i = ExAcquireSharedWaitForExclusive(v25, 0); ; i = ExAcquireResourceExclusiveLite(v27, 0) )
          {
            if ( !i )
              goto LABEL_73;
            v29 = *((_BYTE *)FsContext + 4);
            if ( (v29 & 8) != 0 || *v16 > *((_QWORD *)FsContext + 5) )
            {
              if ( v26 )
                goto LABEL_45;
            }
            else
            {
              if ( (v29 & 0x10) == 0 )
              {
                v30 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                if ( !v30 || v27 == v30 )
                {
                  if ( v26 )
LABEL_44:
                    ExConvertExclusiveToSharedLite(v27);
                }
                else
                {
                  v27 = 0LL;
                  if ( ExAcquireSharedWaitForExclusive(v30, 0) )
                    v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  if ( !v27 )
                  {
LABEL_73:
                    v4 = -1073741608;
                    goto LABEL_26;
                  }
                }
LABEL_45:
                *v17 = v27;
                goto LABEL_46;
              }
              if ( v26 )
                goto LABEL_44;
              if ( v27 == *((struct _ERESOURCE **)FsContext + 1) )
                goto LABEL_45;
            }
            ExReleaseResourceLite(v27);
            v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
            v26 = 1;
LABEL_58:
            ;
          }
        }
      }
      v26 = 0;
    }
    v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    goto LABEL_56;
  }
LABEL_26:
  if ( v34 )
  {
    if ( *((_WORD *)v34 + 37) )
      FsFilterPerformCompletionCallbacks(v35, v4);
    if ( (v35[8] & 1) != 0 )
      FsFilterFreeCompletionStack(v35);
  }
  return v4;
}
