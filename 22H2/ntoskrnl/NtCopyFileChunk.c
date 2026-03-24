/*
 * XREFs of NtCopyFileChunk @ 0x1405CDD80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoIs32bitProcess @ 0x14032D650 (IoIs32bitProcess.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopFileObjectRevoked @ 0x140344CF0 (IopFileObjectRevoked.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F08E4 (IopWaitForSynchronousIoEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F1110 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1403F11F4 (IopPopulateCopyWriteWorkerData.c)
 *     ZwCreateEvent @ 0x1403FA320 (ZwCreateEvent.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopExceptionFilter @ 0x1405006E0 (IopExceptionFilter.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtCopyFileChunk(
        void *a1,
        ULONG_PTR a2,
        void *a3,
        int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // rdi
  char *Pool2; // rax
  char *v18; // rsi
  int File; // edi
  char *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  PIRP *v24; // r13
  PADAPTER_OBJECT *v25; // rdi
  int InitialState; // [rsp+20h] [rbp-128h]
  SIZE_T Length; // [rsp+30h] [rbp-118h]
  int v28; // [rsp+60h] [rbp-E8h]
  char v29; // [rsp+70h] [rbp-D8h]
  HANDLE EventHandle; // [rsp+78h] [rbp-D0h] BYREF
  PRKEVENT Event; // [rsp+80h] [rbp-C8h]
  PIRP *v32; // [rsp+88h] [rbp-C0h]
  __int64 v33; // [rsp+90h] [rbp-B8h]
  __int64 v34; // [rsp+98h] [rbp-B0h]
  PVOID Object; // [rsp+A0h] [rbp-A8h] BYREF
  PVOID v36; // [rsp+A8h] [rbp-A0h] BYREF
  POBJECT_HANDLE_INFORMATION v37; // [rsp+B0h] [rbp-98h]
  _DWORD *v38; // [rsp+B8h] [rbp-90h]
  PIRP Irp; // [rsp+C0h] [rbp-88h]
  __int128 v40; // [rsp+C8h] [rbp-80h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-70h] BYREF
  int v45; // [rsp+198h] [rbp+50h]

  v40 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  EventHandle = (HANDLE)-1LL;
  Event = 0LL;
  Irp = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a10 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    v13 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    v33 = *(_QWORD *)a6;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a4;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)a4;
    v40 = *(_OWORD *)a4;
    v16 = v33;
  }
  else
  {
    v13 = a6;
    v16 = *(_QWORD *)a6;
    v33 = *(_QWORD *)a6;
    v15 = *(_OWORD *)a4;
    v40 = *(_OWORD *)a4;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, a5 + 72LL, 1883467593LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v20 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v18 += 72;
    *((_QWORD *)v20 + 8) = v16;
    v37 = (POBJECT_HANDLE_INFORMATION)(v20 + 56);
    File = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)v20 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_42;
    File = ObReferenceFileObjectForWrite(a2);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v20 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_42;
    v21 = *((_QWORD *)v20 + 6);
    v45 = *(_DWORD *)(v21 + 80) & 2;
    v29 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v32 = (PIRP *)(v20 + 32);
    v22 = 0LL;
    if ( !v45 )
      v22 = (__int64)a3;
    File = IopPopulateCopyWriteWorkerData(
             v21,
             (__int64)a4,
             (__int64)v18,
             a5,
             InitialState,
             (__int64)v37,
             v22,
             a7,
             a9,
             SHIDWORD(v34),
             (__int64)(v20 + 32));
    if ( File >= 0 )
    {
      v23 = v45;
      if ( v45 )
      {
        memset(&ObjectAttributes.Length + 1, 0, 20);
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 512;
        File = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( File < 0 )
          goto LABEL_42;
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v38 = Object;
        if ( File < 0 )
          goto LABEL_42;
        v24 = v32;
        (*v32)->UserEvent = (PKEVENT)Object;
        if ( a3 )
        {
          v36 = 0LL;
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
          Event = (PRKEVENT)v36;
          if ( File < 0 )
            goto LABEL_42;
          KeResetEvent((PRKEVENT)v36);
        }
        Irp = *v24;
        v23 = v45;
      }
      *(_OWORD *)a4 = v15;
      v25 = (PADAPTER_OBJECT *)v37;
      ObfReferenceObject(*(PVOID *)v37);
      LODWORD(Length) = a5;
      File = IopReadFile(*v25, (__int64)a4, v18, Length, v13, a8, 0x40000000, (__int64)v25);
      v18 = 0LL;
      if ( File >= 0 && v23 )
      {
        File = IopWaitForSynchronousIoEvent(Irp, PreviousMode, v29, v38);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              v28 = *(_DWORD *)(unsigned int)*a4;
            else
              v28 = *a4;
            File = v28;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)*a4;
          }
          else
          {
            File = *a4;
          }
        }
        if ( Event )
          KeSetEvent(Event, 0, 0);
      }
      else if ( File >= 0 )
      {
        File = 259;
      }
      goto LABEL_42;
    }
    *((_QWORD *)v20 + 6) = 0LL;
  }
  else
  {
    File = -1073741670;
  }
LABEL_42:
  if ( v18 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v18, 1);
  if ( EventHandle != (HANDLE)-1LL )
    ObCloseHandle(EventHandle, 0);
  if ( Event )
    HalPutDmaAdapter((PADAPTER_OBJECT)Event);
  return (unsigned int)File;
}
