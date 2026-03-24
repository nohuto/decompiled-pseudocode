/*
 * XREFs of SbpStartLanman @ 0x140A957E8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5DB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x140620E20 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 SbpStartLanman()
{
  ULONG_PTR v0; // rsi
  ULONG_PTR v1; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  IRP *v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  PFILE_OBJECT v6; // r14
  NTSTATUS Status; // edi
  char *PoolWithTag; // rax
  PDEVICE_OBJECT v9; // rdx
  IRP *v10; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v12; // rcx
  PVOID v13; // rax
  PDEVICE_OBJECT v14; // rdx
  IRP *v15; // rax
  struct _IO_STACK_LOCATION *v16; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  struct _KEVENT Object; // [rsp+58h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-11h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK v22; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v23[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v24; // [rsp+B0h] [rbp+2Fh]
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]

  DeviceObject = 0LL;
  v24 = 0;
  memset(&Object, 0, sizeof(Object));
  FileObject = 0LL;
  v0 = 0LL;
  v22 = 0LL;
  v1 = 0LL;
  memset(v23, 0, sizeof(v23));
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v6 = FileObject;
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
  v9 = DeviceObject;
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
  v10 = IopBuildDeviceIoControlRequest(
          -2146172527,
          (__int64)v9,
          v23,
          0x24u,
          PoolWithTag,
          0x8Cu,
          0,
          &Object,
          &v22,
          retaddr);
  v3 = v10;
  if ( !v10 )
    goto LABEL_3;
  CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
  v12 = DeviceObject;
  CurrentStackLocation[-1].FileObject = v6;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v12, v3);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = v22.Status;
  }
  if ( Status >= 0 )
  {
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x76uLL, 0x42626D53u);
    v0 = (ULONG_PTR)v13;
    if ( v13 )
    {
      memset(v13, 0, 0x76uLL);
      *(_BYTE *)(v0 + 65) |= 1u;
      *(_DWORD *)(v0 + 68) = -1;
      v14 = DeviceObject;
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
      v15 = IopBuildDeviceIoControlRequest(
              1311648,
              (__int64)v14,
              (const void *)v0,
              0x76u,
              0LL,
              0,
              0,
              &Object,
              &v22,
              retaddr);
      v3 = v15;
      if ( v15 )
      {
        v16 = v15->Tail.Overlay.CurrentStackLocation;
        v17 = DeviceObject;
        v16[-1].FileObject = v6;
        v16[-1].MajorFunction = 13;
        Status = IofCallDriver(v17, v3);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = v22.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v1 )
    ExFreeHeapPool(v1, (__int64)v3, v4, v5);
  if ( v0 )
    ExFreeHeapPool(v0, (__int64)v3, v4, v5);
  return (unsigned int)Status;
}
