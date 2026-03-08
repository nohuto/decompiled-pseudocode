/*
 * XREFs of SbpAddTransportToInstance @ 0x140B9874C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SbpAddTransportToInstance()
{
  void *v0; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v2; // rsi
  unsigned int Status; // ebx
  char *Pool2; // rax
  PDEVICE_OBJECT v5; // rdx
  IRP *v6; // rax
  IRP *v7; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  struct _IO_STATUS_BLOCK v11; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+20h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+28h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  memset(&Object, 0, sizeof(Object));
  v0 = 0LL;
  v11 = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&InstanceName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v2 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 0xD0uLL, 0x42626D53u);
    v0 = Pool2;
    if ( !Pool2 )
      goto LABEL_3;
    *(_DWORD *)Pool2 = 16;
    *((_DWORD *)Pool2 + 1) = 2;
    *((_DWORD *)Pool2 + 2) = 192;
    *(_OWORD *)(Pool2 + 12) = *(_OWORD *)L"\\Device\\VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847"
                                          "c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 28) = *(_OWORD *)L"VMBus\\{4d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 44) = *(_OWORD *)L"d12e519-17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 60) = *(_OWORD *)L"17a0-4ae4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 76) = *(_OWORD *)L"4-8eaa-5270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 92) = *(_OWORD *)L"270fc6abdb7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 108) = *(_OWORD *)L"db7}-{dcc079ae-60ba-4d07-847c-3493609c0870}-0000";
    v5 = DeviceObject;
    *(_OWORD *)(Pool2 + 124) = *(_OWORD *)L"c079ae-60ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 140) = *(_OWORD *)L"0ba-4d07-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 156) = *(_OWORD *)L"-847c-3493609c0870}-0000";
    *(_OWORD *)(Pool2 + 172) = *(_OWORD *)L"93609c0870}-0000";
    *(_OWORD *)(Pool2 + 188) = *(_OWORD *)L"70}-0000";
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    LOWORD(Object.Header.Lock) = 1;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.SignalState = 0;
    v6 = IopBuildDeviceIoControlRequest(1311152, (__int64)v5, Pool2, 0xD0u, 0LL, 0, 0, &Object, &v11);
    v7 = v6;
    if ( v6 )
    {
      CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
      v9 = DeviceObject;
      CurrentStackLocation[-1].FileObject = v2;
      CurrentStackLocation[-1].MajorFunction = 13;
      Status = IofCallDriver(v9, v7);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v11.Status;
      }
    }
    else
    {
LABEL_3:
      Status = -1073741670;
    }
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return Status;
}
