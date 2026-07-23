/*
 * XREFs of VhdiMountVhdFile @ 0x140A95C98
 * Callers:
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403D8340 (wcscat_s.c)
 *     ZwCreateFile @ 0x1403FB020 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceInterfaces @ 0x1406754B0 (IoGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x14068AA90 (IoGetDeviceObjectPointer.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src)
{
  NTSTATUS DeviceInterfaces; // ebx
  PZZWSTR v3; // r12
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  char *PoolWithTag; // rax
  const void *v9; // rdi
  unsigned int v10; // ebx
  _DWORD *v11; // rsi
  IRP *v12; // rax
  char *v13; // rbx
  __int128 v14; // xmm0
  PZZWSTR v15; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  IRP *v17; // rax
  struct _KEVENT Object_8; // [rsp+68h] [rbp-A0h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+80h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v25; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v27[6]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v28[3]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v29; // [rsp+188h] [rbp+80h]
  _DWORD EaBuffer[2]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v31; // [rsp+1A0h] [rbp+98h]
  GUID v32; // [rsp+1A8h] [rbp+A0h]
  __int128 v33; // [rsp+1B8h] [rbp+B0h]
  __int128 v34; // [rsp+1C8h] [rbp+C0h]
  __int128 v35; // [rsp+1D8h] [rbp+D0h]
  __int128 v36; // [rsp+1E8h] [rbp+E0h]
  int v37; // [rsp+1F8h] [rbp+F0h]
  int v38; // [rsp+1FCh] [rbp+F4h]
  __int64 retaddr; // [rsp+240h] [rbp+138h]

  DeviceObject = 0LL;
  SymbolicLinkList = 0LL;
  v29 = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Object_8, 0, sizeof(Object_8));
  v25 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v28, 0, sizeof(v28));
  if ( !Src )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_3;
  }
  memset(v27, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v3 = SymbolicLinkList;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741275;
    goto LABEL_3;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceInterfaces = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = 2 * v5 + 2;
  v7 = 2 * v5 + 34;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42646856u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *((_DWORD *)PoolWithTag + 1) = 0;
  *(_OWORD *)(PoolWithTag + 8) = VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN;
  *(_DWORD *)PoolWithTag = 1;
  *((_DWORD *)PoolWithTag + 6) = 32;
  *((_DWORD *)PoolWithTag + 7) = v6;
  memmove(PoolWithTag + 32, Src, v6);
  v10 = v6 + 540;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x42646856u);
  if ( !v11 )
  {
LABEL_11:
    DeviceInterfaces = -1073741801;
    goto LABEL_3;
  }
  Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
  Object_8.Header.SignalState = 0;
  Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
  LOWORD(Object_8.Header.Lock) = 1;
  Object_8.Header.Size = 6;
  v12 = IopBuildDeviceIoControlRequest(
          2971948,
          (__int64)DeviceObject,
          v9,
          v7,
          v11,
          v10,
          0,
          &Object_8,
          &IoStatusBlock,
          retaddr);
  if ( !v12 )
    goto LABEL_14;
  DeviceInterfaces = IofCallDriver(DeviceObject, v12);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v13 = (char *)v11 + (unsigned int)v11[5];
  if ( *(_WORD *)v13 == 92 && *((_WORD *)v13 + 1) == 92 && *((_WORD *)v13 + 2) == 46 && *((_WORD *)v13 + 3) == 92 )
    *(_DWORD *)(v13 + 2) = 4128831;
  do
    ++v4;
  while ( Src[v4] );
  wcscat_s((wchar_t *)v13, (unsigned int)(v4 + 257), Src);
  RtlInitUnicodeString(&v25, (PCWSTR)v13);
  ObjectAttributes.ObjectName = &v25;
  ObjectAttributes.Length = 48;
  v38 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_QWORD *)((char *)&v27[2] + 4) = 0x400000054LL;
  v31 = 0x4B534454524956LL;
  EaBuffer[0] = 0;
  EaBuffer[1] = 5506944;
  v14 = *(_OWORD *)v11;
  LODWORD(v27[2]) = v11[4];
  v33 = v14;
  DWORD1(v27[3]) = 2;
  v37 = v27[5];
  v32 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
  v34 = v27[2];
  v35 = v27[3];
  v36 = v27[4];
  DeviceInterfaces = ZwCreateFile(
                       &FileHandle,
                       0x80000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       1u,
                       2u,
                       0,
                       EaBuffer,
                       0x67u);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  SymbolicLinkList = 0LL;
  DeviceInterfaces = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&SymbolicLinkList, 0LL);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v15 = SymbolicLinkList;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)SymbolicLinkList);
  LODWORD(v28[0]) = 1;
  LOWORD(Object_8.Header.Lock) = 1;
  Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
  Object_8.Header.Size = 6;
  Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
  Object_8.Header.SignalState = 0;
  v17 = IopBuildDeviceIoControlRequest(
          2955548,
          (__int64)RelatedDeviceObject,
          v28,
          0x38u,
          0LL,
          0,
          0,
          &Object_8,
          &IoStatusBlock,
          retaddr);
  if ( !v17 )
  {
LABEL_14:
    DeviceInterfaces = -1073741670;
    goto LABEL_3;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
  DeviceInterfaces = IofCallDriver(RelatedDeviceObject, v17);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
LABEL_3:
    KeBugCheckEx(0x12Fu, 5uLL, DeviceInterfaces, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)v9);
  ExFreeHeapPool((ULONG_PTR)v11);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  ExFreeHeapPool((ULONG_PTR)v3);
  return (unsigned int)DeviceInterfaces;
}
