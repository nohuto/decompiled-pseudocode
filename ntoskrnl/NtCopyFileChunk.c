/*
 * XREFs of NtCopyFileChunk @ 0x1407DEE00
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x14023EBCC (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x14023EC30 (IopFileObjectRevoked.c)
 *     IoIs32bitProcess @ 0x140245910 (IoIs32bitProcess.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1402F9948 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopPopulateCopyWriteWorkerData @ 0x14035A864 (IopPopulateCopyWriteWorkerData.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     NtWaitForSingleObject @ 0x1407CFE90 (NtWaitForSingleObject.c)
 *     ObReferenceFileObjectForWrite @ 0x1407DF2CC (ObReferenceFileObjectForWrite.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtCopyFileChunk(
        void *a1,
        ULONG_PTR a2,
        void *a3,
        unsigned int *a4,
        ULONG Length,
        __int64 a6,
        struct _KTHREAD **a7,
        __int64 a8,
        PVOID a9,
        int a10)
{
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // rdi
  char *Pool2; // rax
  char *v18; // rsi
  int File; // edi
  char *v20; // r13
  void *v21; // rax
  HANDLE v22; // rcx
  PVOID *v23; // rdi
  int InitialState; // [rsp+20h] [rbp-108h]
  int VirtualAddress; // [rsp+28h] [rbp-100h]
  HANDLE EventHandle; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+90h] [rbp-98h]
  PVOID Object; // [rsp+98h] [rbp-90h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-88h]
  PVOID *v30; // [rsp+A8h] [rbp-80h]
  __int128 v31; // [rsp+B0h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-68h] BYREF
  char v36; // [rsp+178h] [rbp+50h]

  v31 = 0LL;
  v29 = 0LL;
  EventHandle = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a10 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    v27 = *(_QWORD *)a6;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a4;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)a4;
    v31 = *(_OWORD *)a4;
    v16 = v27;
  }
  else
  {
    v16 = *(_QWORD *)a6;
    v27 = *(_QWORD *)a6;
    v15 = *(_OWORD *)a4;
    v31 = *(_OWORD *)a4;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, Length + 72LL, 1883467593LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v20 = Pool2;
    v30 = (PVOID *)Pool2;
    memset(Pool2, 0, 0x48uLL);
    v18 += 72;
    *((_QWORD *)v20 + 8) = v16;
    File = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)v20 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_41;
    File = ObReferenceFileObjectForWrite(a2);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v20 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_41;
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 80LL) & 2) != 0 )
    {
      v36 = 1;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = PreviousMode == 0 ? 0x200 : 0;
      ObjectAttributes.ObjectName = 0LL;
      File = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
      if ( File < 0 )
        goto LABEL_41;
      v21 = a3;
      if ( !a3 )
      {
LABEL_23:
        v22 = v21;
        if ( v36 )
          v22 = EventHandle;
        File = IopPopulateCopyWriteWorkerData(
                 *((_QWORD *)v20 + 6),
                 (__int64)a4,
                 (__int64)v18,
                 Length,
                 InitialState,
                 VirtualAddress,
                 (__int64)(v20 + 56),
                 v22,
                 a7,
                 (unsigned __int64)a9,
                 SBYTE4(v29),
                 (__int64)(v20 + 32));
        if ( File >= 0 )
        {
          *(_OWORD *)a4 = v15;
          v23 = v30 + 7;
          ObfReferenceObject(v30[7]);
          File = IopReadFile(*v23, a3, (__int64)a4, v18, Length, a6, a8, 0LL, 0LL, 0x40000000, 0LL, (__int64)v23);
          if ( File >= 0 && v36 )
          {
            File = NtWaitForSingleObject((int)EventHandle, 0, 0LL);
            if ( File >= 0 )
            {
              if ( PreviousMode )
              {
                if ( IoIs32bitProcess(0LL) )
                  File = *(_DWORD *)*a4;
              }
              else if ( IoIs32bitProcess(0LL) )
              {
                File = *(_DWORD *)*a4;
              }
            }
            if ( v11 )
              KeSetEvent(v11, 0, 0);
          }
          else if ( File >= 0 )
          {
            File = 259;
          }
          v18 = 0LL;
        }
        else
        {
          *((_QWORD *)v20 + 6) = 0LL;
        }
        goto LABEL_41;
      }
      Object = 0LL;
      File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v11 = (struct _KEVENT *)Object;
      if ( File < 0 )
        goto LABEL_41;
    }
    else
    {
      v36 = 0;
    }
    v21 = a3;
    goto LABEL_23;
  }
  File = -1073741670;
LABEL_41:
  if ( v18 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v18, 1);
  if ( EventHandle )
    NtClose(EventHandle);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)File;
}
