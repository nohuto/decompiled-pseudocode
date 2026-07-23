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

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PLARGE_INTEGER v13; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  LONGLONG v16; // rdi
  char *Pool2; // rax
  char *v18; // rsi
  NTSTATUS File; // edi
  char *v20; // r13
  __int64 v21; // rcx
  HANDLE v22; // rdx
  ULONG v23; // r13d
  PIRP *v24; // r13
  PADAPTER_OBJECT *v25; // rdi
  int InitialState; // [rsp+20h] [rbp-128h]
  SIZE_T v27; // [rsp+30h] [rbp-118h]
  NTSTATUS Status; // [rsp+60h] [rbp-E8h]
  char v29; // [rsp+70h] [rbp-D8h]
  HANDLE EventHandlea; // [rsp+78h] [rbp-D0h] BYREF
  PRKEVENT Event; // [rsp+80h] [rbp-C8h]
  PIRP *v32; // [rsp+88h] [rbp-C0h]
  LONGLONG QuadPart; // [rsp+90h] [rbp-B8h]
  __int64 v34; // [rsp+98h] [rbp-B0h]
  PVOID Object; // [rsp+A0h] [rbp-A8h] BYREF
  PVOID v36; // [rsp+A8h] [rbp-A0h] BYREF
  POBJECT_HANDLE_INFORMATION v37; // [rsp+B0h] [rbp-98h]
  _DWORD *v38; // [rsp+B8h] [rbp-90h]
  PIRP Irp; // [rsp+C0h] [rbp-88h]
  __int128 v40; // [rsp+C8h] [rbp-80h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-70h] BYREF
  ULONG Flagsa; // [rsp+198h] [rbp+50h]

  v40 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  EventHandlea = (HANDLE)-1LL;
  Event = 0LL;
  Irp = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Flags )
    return -1073741811;
  if ( PreviousMode )
  {
    v13 = SourceOffset;
    if ( ((unsigned __int8)SourceOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    QuadPart = SourceOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v40 = *(_OWORD *)&IoStatusBlock->Status;
    v16 = QuadPart;
  }
  else
  {
    v13 = SourceOffset;
    v16 = SourceOffset->QuadPart;
    QuadPart = SourceOffset->QuadPart;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v40 = *(_OWORD *)&IoStatusBlock->Status;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, Length + 72LL, 1883467593LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v20 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v18 += 72;
    *((_QWORD *)v20 + 8) = v16;
    v37 = (POBJECT_HANDLE_INFORMATION)(v20 + 56);
    File = IopReferenceFileObject(SourceHandle, 1u, PreviousMode, (PVOID *)v20 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_42;
    File = ObReferenceFileObjectForWrite((ULONG_PTR)DestinationHandle);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v20 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_42;
    v21 = *((_QWORD *)v20 + 6);
    Flagsa = *(_DWORD *)(v21 + 80) & 2;
    v29 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v32 = (PIRP *)(v20 + 32);
    v22 = 0LL;
    if ( !Flagsa )
      v22 = EventHandle;
    File = IopPopulateCopyWriteWorkerData(
             v21,
             (__int64)IoStatusBlock,
             (__int64)v18,
             Length,
             InitialState,
             (__int64)v37,
             (__int64)v22,
             (__int64)DestOffset,
             (__int64)DestKey,
             SHIDWORD(v34),
             (__int64)(v20 + 32));
    if ( File >= 0 )
    {
      v23 = Flagsa;
      if ( Flagsa )
      {
        memset(&ObjectAttributes.Length + 1, 0, 20);
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 512;
        File = ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( File < 0 )
          goto LABEL_42;
        Object = 0LL;
        File = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
        v38 = Object;
        if ( File < 0 )
          goto LABEL_42;
        v24 = v32;
        (*v32)->UserEvent = (PKEVENT)Object;
        if ( EventHandle )
        {
          v36 = 0LL;
          File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v36, 0LL);
          Event = (PRKEVENT)v36;
          if ( File < 0 )
            goto LABEL_42;
          KeResetEvent((PRKEVENT)v36);
        }
        Irp = *v24;
        v23 = Flagsa;
      }
      *(_OWORD *)&IoStatusBlock->Status = v15;
      v25 = (PADAPTER_OBJECT *)v37;
      ObfReferenceObject(*(PVOID *)v37);
      LODWORD(v27) = Length;
      File = IopReadFile(
               *v25,
               (__int64)IoStatusBlock,
               v18,
               v27,
               (__int64)v13,
               (__int64)SourceKey,
               0x40000000,
               (__int64)v25);
      v18 = 0LL;
      if ( File >= 0 && v23 )
      {
        File = IopWaitForSynchronousIoEvent(Irp, PreviousMode, v29, v38);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              Status = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
            else
              Status = IoStatusBlock->Status;
            File = Status;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
          }
          else
          {
            File = IoStatusBlock->Status;
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
  if ( EventHandlea != (HANDLE)-1LL )
    ObCloseHandle(EventHandlea, 0);
  if ( Event )
    HalPutDmaAdapter((PADAPTER_OBJECT)Event);
  return File;
}
