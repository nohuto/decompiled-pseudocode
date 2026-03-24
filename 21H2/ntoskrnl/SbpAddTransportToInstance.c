/*
 * XREFs of SbpAddTransportToInstance @ 0x140A955E8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     memset @ 0x140414200 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x140620E20 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 SbpAddTransportToInstance()
{
  char *v0; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  IRP *v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  PFILE_OBJECT v5; // rsi
  unsigned int Status; // ebx
  char *PoolWithTag; // rax
  PDEVICE_OBJECT v8; // rdx
  IRP *v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  struct _IO_STATUS_BLOCK v13; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+20h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+28h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  memset(&Object, 0, sizeof(Object));
  v0 = 0LL;
  v13 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&InstanceName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v5 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x42626D53u);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_3;
    memset(PoolWithTag + 12, 0, 0xC4uLL);
    *(_DWORD *)v0 = 16;
    *((_DWORD *)v0 + 1) = 2;
    *((_DWORD *)v0 + 2) = 192;
    *(_OWORD *)(v0 + 12) = *(_OWORD *)L"\\Device\\VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3"
                                       "493609c0870}-0000";
    *(_OWORD *)(v0 + 28) = *(_OWORD *)L"VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 44) = *(_OWORD *)L"d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 60) = *(_OWORD *)L"17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 76) = *(_OWORD *)L"4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 92) = *(_OWORD *)L"270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 108) = *(_OWORD *)L"db7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    v8 = DeviceObject;
    *(_OWORD *)(v0 + 124) = *(_OWORD *)L"c079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 140) = *(_OWORD *)L"0ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 156) = *(_OWORD *)L"-847c-3493609c0870}-0000";
    *(_OWORD *)(v0 + 172) = *(_OWORD *)L"93609c0870}-0000";
    *(_OWORD *)(v0 + 188) = *(_OWORD *)L"70}-0000";
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    LOWORD(Object.Header.Lock) = 1;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.SignalState = 0;
    v9 = IopBuildDeviceIoControlRequest(1311152, (__int64)v8, v0, 0xD0u, 0LL, 0, 0, &Object, &v13, retaddr);
    v2 = v9;
    if ( v9 )
    {
      CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
      v11 = DeviceObject;
      CurrentStackLocation[-1].FileObject = v5;
      CurrentStackLocation[-1].MajorFunction = 13;
      Status = IofCallDriver(v11, v2);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v13.Status;
      }
    }
    else
    {
LABEL_3:
      Status = -1073741670;
    }
  }
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( v0 )
    ExFreeHeapPool((ULONG_PTR)v0, (__int64)v2, v3, v4);
  return Status;
}
