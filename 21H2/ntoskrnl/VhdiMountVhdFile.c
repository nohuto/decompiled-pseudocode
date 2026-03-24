/*
 * XREFs of VhdiMountVhdFile @ 0x140A94C98
 * Callers:
 *     VhdInitialize @ 0x140A73778 (VhdInitialize.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403D81D0 (wcscat_s.c)
 *     ZwCreateFile @ 0x1403FAE40 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     IoGetDeviceObjectPointer @ 0x140620E20 (IoGetDeviceObjectPointer.c)
 *     IoGetDeviceInterfaces @ 0x1406C6BC0 (IoGetDeviceInterfaces.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  struct _KEVENT Object_8; // [rsp+68h] [rbp-A0h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+80h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  PFILE_OBJECT FileObject; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v34; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v36[6]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v37[3]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v38; // [rsp+188h] [rbp+80h]
  _DWORD EaBuffer[2]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v40; // [rsp+1A0h] [rbp+98h]
  GUID v41; // [rsp+1A8h] [rbp+A0h]
  __int128 v42; // [rsp+1B8h] [rbp+B0h]
  __int128 v43; // [rsp+1C8h] [rbp+C0h]
  __int128 v44; // [rsp+1D8h] [rbp+D0h]
  __int128 v45; // [rsp+1E8h] [rbp+E0h]
  int v46; // [rsp+1F8h] [rbp+F0h]
  int v47; // [rsp+1FCh] [rbp+F4h]
  __int64 retaddr; // [rsp+240h] [rbp+138h]

  DeviceObject = 0LL;
  SymbolicLinkList = 0LL;
  v38 = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Object_8, 0, sizeof(Object_8));
  v34 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v37, 0, sizeof(v37));
  if ( !Src )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_3;
  }
  memset(v36, 0, 0x54uLL);
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
  RtlInitUnicodeString(&v34, (PCWSTR)v13);
  ObjectAttributes.ObjectName = &v34;
  ObjectAttributes.Length = 48;
  v47 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  *(_QWORD *)((char *)&v36[2] + 4) = 0x400000054LL;
  v40 = 0x4B534454524956LL;
  EaBuffer[0] = 0;
  EaBuffer[1] = 5506944;
  v14 = *(_OWORD *)v11;
  LODWORD(v36[2]) = v11[4];
  v42 = v14;
  DWORD1(v36[3]) = 2;
  v46 = v36[5];
  v41 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
  v43 = v36[2];
  v44 = v36[3];
  v45 = v36[4];
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
  LODWORD(v37[0]) = 1;
  LOWORD(Object_8.Header.Lock) = 1;
  Object_8.Header.WaitListHead.Blink = &Object_8.Header.WaitListHead;
  Object_8.Header.Size = 6;
  Object_8.Header.WaitListHead.Flink = &Object_8.Header.WaitListHead;
  Object_8.Header.SignalState = 0;
  v17 = IopBuildDeviceIoControlRequest(
          2955548,
          (__int64)RelatedDeviceObject,
          v37,
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
  ExFreeHeapPool((ULONG_PTR)v9, v18, v19, v20);
  ExFreeHeapPool((ULONG_PTR)v11, v21, v22, v23);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  ExFreeHeapPool((ULONG_PTR)v3, v24, v25, v26);
  return (unsigned int)DeviceInterfaces;
}
