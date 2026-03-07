__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  IRP *v7; // rsi
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  __int128 v13; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int128 v15; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+37h]
  __int16 OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v3 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0;
  IoStatusBlock = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = qword_1C0361578;
    v5 = *(_QWORD **)(qword_1C0361578 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0361578 != &gMediaChangeList || *v5 != qword_1C0361578 )
      __fastfail(3u);
    qword_1C0361578 = *(_QWORD *)(qword_1C0361578 + 8);
    *v5 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v4 )
    return 0LL;
  PushW32ThreadLock(v4, &v15, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, &v13, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v4 + 36),
           (unsigned int)*(unsigned __int16 *)(v4 + 36) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v7 )
    {
      UserSessionSwitchLeaveCrit(v6);
      Status = IofCallDriver(DeviceObject, v7);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(1LL, 0LL);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v3 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          v3 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)&v13);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v15);
  return v3;
}
