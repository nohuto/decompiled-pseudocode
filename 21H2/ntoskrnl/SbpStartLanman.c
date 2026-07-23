/*
 * XREFs of SbpStartLanman @ 0x140A967E8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x14068AA90 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 SbpStartLanman()
{
  ULONG_PTR v0; // rsi
  ULONG_PTR v1; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS Status; // edi
  char *PoolWithTag; // rax
  PDEVICE_OBJECT v6; // rdx
  IRP *v7; // rax
  IRP *v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  PVOID v11; // rax
  PDEVICE_OBJECT v12; // rdx
  IRP *v13; // rax
  IRP *v14; // rdx
  struct _IO_STACK_LOCATION *v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  struct _KEVENT Object; // [rsp+58h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK v21; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v22[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v23; // [rsp+B0h] [rbp+2Fh]
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]

  DeviceObject = 0LL;
  v23 = 0;
  memset(&Object, 0, sizeof(Object));
  FileObject = 0LL;
  v0 = 0LL;
  v21 = 0LL;
  v1 = 0LL;
  memset(v22, 0, sizeof(v22));
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8CuLL, 0x42626D53u);
  v1 = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_3;
  *((_DWORD *)PoolWithTag + 15) = -1;
  *((_DWORD *)PoolWithTag + 4) = 5;
  *(_DWORD *)PoolWithTag = 3600;
  *((_DWORD *)PoolWithTag + 2) = 16;
  *((_DWORD *)PoolWithTag + 1) = 250;
  *((_DWORD *)PoolWithTag + 3) = 600;
  *((_DWORD *)PoolWithTag + 5) = 45;
  *((_DWORD *)PoolWithTag + 9) = 10;
  *((_DWORD *)PoolWithTag + 6) = 512;
  *((_DWORD *)PoolWithTag + 7) = 17;
  *((_DWORD *)PoolWithTag + 8) = 6144;
  *((_DWORD *)PoolWithTag + 10) = 500;
  *((_DWORD *)PoolWithTag + 12) = 500;
  *((_DWORD *)PoolWithTag + 11) = 10;
  *((_DWORD *)PoolWithTag + 14) = 45;
  *((_DWORD *)PoolWithTag + 18) = 5;
  v6 = DeviceObject;
  *((_DWORD *)PoolWithTag + 13) = 40;
  *((_DWORD *)PoolWithTag + 16) = 3;
  *((_DWORD *)PoolWithTag + 17) = 20;
  *(_QWORD *)(PoolWithTag + 76) = 60LL;
  *((_DWORD *)PoolWithTag + 21) = 1;
  *((_DWORD *)PoolWithTag + 22) = 1;
  *((_DWORD *)PoolWithTag + 23) = 1;
  *((_DWORD *)PoolWithTag + 24) = 1;
  *((_DWORD *)PoolWithTag + 25) = 1;
  *((_DWORD *)PoolWithTag + 26) = 1;
  *((_DWORD *)PoolWithTag + 27) = 1;
  *((_DWORD *)PoolWithTag + 28) = 1;
  *((_DWORD *)PoolWithTag + 29) = 1;
  *((_DWORD *)PoolWithTag + 30) = 1;
  *((_DWORD *)PoolWithTag + 31) = 1;
  *((_DWORD *)PoolWithTag + 32) = 1;
  *(_QWORD *)(PoolWithTag + 132) = 1LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  v7 = IopBuildDeviceIoControlRequest(
         -2146172527,
         (__int64)v6,
         v22,
         0x24u,
         PoolWithTag,
         0x8Cu,
         0,
         &Object,
         &v21,
         retaddr);
  v8 = v7;
  if ( !v7 )
    goto LABEL_3;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v10 = DeviceObject;
  CurrentStackLocation[-1].FileObject = v3;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v10, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = v21.Status;
  }
  if ( Status >= 0 )
  {
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x76uLL, 0x42626D53u);
    v0 = (ULONG_PTR)v11;
    if ( v11 )
    {
      memset(v11, 0, 0x76uLL);
      *(_BYTE *)(v0 + 65) |= 1u;
      *(_DWORD *)(v0 + 68) = -1;
      v12 = DeviceObject;
      *(_WORD *)(v0 + 12) = 94;
      *(_BYTE *)(v0 + 84) = 1;
      *(_DWORD *)(v0 + 76) = 30;
      *(_WORD *)(v0 + 86) = 26;
      *(_DWORD *)(v0 + 80) = 30;
      *(_DWORD *)(v0 + 32) = 20;
      *(_DWORD *)(v0 + 40) = 20;
      *(_DWORD *)(v0 + 24) = 30;
      *(_BYTE *)(v0 + 64) = 31;
      *(_DWORD *)(v0 + 72) = 10;
      *(_DWORD *)(v0 + 20) = 120;
      *(_DWORD *)(v0 + 28) = 0x8000;
      *(_DWORD *)(v0 + 36) = 5;
      *(_DWORD *)(v0 + 44) = 2048;
      *(_DWORD *)(v0 + 48) = 32;
      *(_DWORD *)(v0 + 52) = 512;
      *(_DWORD *)(v0 + 56) = 0x1000000;
      *(_DWORD *)(v0 + 60) = 0x100000;
      *(_OWORD *)(v0 + 88) = *(_OWORD *)L"\\Device\\vmsmb";
      *(_QWORD *)(v0 + 104) = *(_QWORD *)L"vmsmb";
      *(_WORD *)(v0 + 112) = aDeviceVmsmb[12];
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      LOWORD(Object.Header.Lock) = 1;
      Object.Header.Size = 6;
      Object.Header.SignalState = 0;
      v13 = IopBuildDeviceIoControlRequest(
              1311648,
              (__int64)v12,
              (const void *)v0,
              0x76u,
              0LL,
              0,
              0,
              &Object,
              &v21,
              retaddr);
      v14 = v13;
      if ( v13 )
      {
        v15 = v13->Tail.Overlay.CurrentStackLocation;
        v16 = DeviceObject;
        v15[-1].FileObject = v3;
        v15[-1].MajorFunction = 13;
        Status = IofCallDriver(v16, v14);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = v21.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( v1 )
    ExFreeHeapPool(v1);
  if ( v0 )
    ExFreeHeapPool(v0);
  return (unsigned int)Status;
}
