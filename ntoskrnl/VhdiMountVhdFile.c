/*
 * XREFs of VhdiMountVhdFile @ 0x140A7058C
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14067E088 (VhdiAutoAttachOneVhd.c)
 *     VhdInitialize @ 0x140B56EA0 (VhdInitialize.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x14040A260 (Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoGetDeviceInterfaces @ 0x1406C3A60 (IoGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src, int a2, char a3, _OWORD *a4)
{
  PZZWSTR v5; // r15
  void *v6; // r14
  PZZWSTR v7; // rsi
  NTSTATUS DeviceObjectPointer; // ebx
  char v9; // r13
  NTSTATUS DeviceInterfaces; // eax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 Pool2; // rax
  ULONG v15; // r12d
  int v16; // ecx
  unsigned int v17; // esi
  PZZWSTR v18; // r12
  IRP *v19; // rax
  char *v21; // rbx
  unsigned int v22; // esi
  __int128 v23; // xmm0
  int IsEnabledDeviceUsage; // eax
  HANDLE *p_Handle; // rcx
  int v26; // eax
  HANDLE v27; // rcx
  NTSTATUS v28; // eax
  PDEVICE_OBJECT v29; // r12
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  _OWORD *v31; // rsi
  PIRP v32; // rax
  PIRP v33; // rax
  ULONG OutputBufferLength; // [rsp+30h] [rbp-D8h]
  PZZWSTR SymbolicLinkList; // [rsp+70h] [rbp-98h] BYREF
  ULONG InputBufferLength[2]; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v40; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-48h]
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD *v45; // [rsp+D0h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v48; // [rsp+118h] [rbp+10h] BYREF
  _OWORD OutputBuffer[8]; // [rsp+128h] [rbp+20h] BYREF
  __int128 InputBuffer; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v51; // [rsp+1B8h] [rbp+B0h]
  __int128 v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D8h] [rbp+D0h]
  _DWORD EaBuffer[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v55; // [rsp+1F0h] [rbp+E8h]
  GUID v56; // [rsp+1F8h] [rbp+F0h]
  __int128 v57; // [rsp+208h] [rbp+100h]
  __int128 v58; // [rsp+218h] [rbp+110h]
  __int128 v59; // [rsp+228h] [rbp+120h]
  __int128 v60; // [rsp+238h] [rbp+130h]
  int v61; // [rsp+248h] [rbp+140h]
  int v62; // [rsp+24Ch] [rbp+144h]

  v45 = a4;
  v40 = a2;
  Handle = 0LL;
  DeviceObject = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v53 = 0LL;
  Object = 0LL;
  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  v48 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  InputBuffer = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( !Src )
  {
    DeviceObjectPointer = -1073741811;
    v9 = a3;
    goto LABEL_20;
  }
  memset(&OutputBuffer[2], 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  v5 = SymbolicLinkList;
  DeviceObjectPointer = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
    goto LABEL_19;
  if ( !*SymbolicLinkList )
  {
    DeviceObjectPointer = -1073741275;
LABEL_19:
    v9 = a3;
    goto LABEL_20;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer < 0 )
    goto LABEL_19;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( Src[v12] );
  v13 = 2 * v12 + 2;
  InputBufferLength[0] = 2 * v12 + 34;
  Pool2 = ExAllocatePool2(64LL, InputBufferLength[0], 1113876566LL);
  v6 = (void *)Pool2;
  if ( !Pool2 )
  {
    DeviceObjectPointer = -1073741801;
    goto LABEL_19;
  }
  *(_QWORD *)Pool2 = 1LL;
  *(_DWORD *)(Pool2 + 24) = 32;
  *(_OWORD *)(Pool2 + 8) = VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN;
  *(_DWORD *)(Pool2 + 28) = v13;
  memmove((void *)(Pool2 + 32), Src, v13);
  if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
  {
    v15 = v13 + 542;
    v16 = 1;
  }
  else
  {
    v15 = v13 + 540;
    v16 = 0;
  }
  v17 = v16 != 0 ? v13 + 514 : 0;
  SymbolicLinkList = (PZZWSTR)ExAllocatePool2(64LL, v15, 1113876566LL);
  if ( !SymbolicLinkList )
  {
    DeviceObjectPointer = -1073741801;
    v7 = 0LL;
    goto LABEL_19;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  OutputBufferLength = v15;
  v18 = SymbolicLinkList;
  v19 = IoBuildDeviceIoControlRequest(
          0x2D592Cu,
          DeviceObject,
          v6,
          InputBufferLength[0],
          SymbolicLinkList,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v19 )
  {
    DeviceObjectPointer = -1073741670;
LABEL_18:
    v7 = v18;
    goto LABEL_19;
  }
  DeviceObjectPointer = IofCallDriver(DeviceObject, v19);
  if ( DeviceObjectPointer == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    DeviceObjectPointer = IoStatusBlock.Status;
  }
  if ( DeviceObjectPointer < 0 )
    goto LABEL_18;
  v21 = (char *)v18 + *((unsigned int *)v18 + 5);
  if ( *(_WORD *)v21 == 92 && *((_WORD *)v21 + 1) == 92 && *((_WORD *)v21 + 2) == 46 && *((_WORD *)v21 + 3) == 92 )
    *(_DWORD *)(v21 + 2) = 4128831;
  if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
  {
    v22 = v17 >> 1;
    do
      ++v11;
    while ( *(_WORD *)&v21[2 * v11] );
    if ( *(_WORD *)&v21[2 * v11 - 2] != 92 && *Src != 92 )
      wcscat_s((wchar_t *)v21, v22, L"\\");
  }
  else
  {
    do
      ++v11;
    while ( Src[v11] );
    v22 = v11 + 257;
  }
  wcscat_s((wchar_t *)v21, v22, Src);
  RtlInitUnicodeString(&v48, (PCWSTR)v21);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v48;
  ObjectAttributes.Attributes = 512;
  v62 = 0;
  EaBuffer[0] = 0;
  v55 = 0x4B534454524956LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EaBuffer[1] = 5506944;
  DWORD1(OutputBuffer[4]) = 84;
  v9 = a3;
  if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
    DWORD2(OutputBuffer[4]) = a3 != 0 ? 4 : 0;
  else
    DWORD2(OutputBuffer[4]) = 4;
  v23 = *(_OWORD *)v18;
  LODWORD(OutputBuffer[4]) = *((_DWORD *)v18 + 4);
  v57 = v23;
  v58 = OutputBuffer[4];
  DWORD1(OutputBuffer[5]) = 2;
  v60 = OutputBuffer[6];
  v56 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
  v59 = OutputBuffer[5];
  v61 = OutputBuffer[7];
  IsEnabledDeviceUsage = Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage();
  p_Handle = &Handle;
  if ( !IsEnabledDeviceUsage )
    p_Handle = &FileHandle;
  DeviceObjectPointer = ZwCreateFile(
                          p_Handle,
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
  if ( DeviceObjectPointer >= 0 )
  {
    v26 = Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage();
    v27 = FileHandle;
    if ( v26 )
      v27 = Handle;
    DeviceObject = 0LL;
    v28 = ObReferenceObjectByHandle(v27, 0xC0100000, 0LL, 0, (PVOID *)&DeviceObject, 0LL);
    v29 = DeviceObject;
    DeviceObjectPointer = v28;
    Object = DeviceObject;
    if ( v28 < 0 )
      goto LABEL_64;
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DeviceObject);
    if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
    {
      v31 = v45;
      if ( v45 )
      {
        memset(OutputBuffer, 0, 32);
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        InputBufferLength[0] = 14;
        v32 = IoBuildDeviceIoControlRequest(
                0x2D1940u,
                RelatedDeviceObject,
                InputBufferLength,
                4u,
                OutputBuffer,
                0x20u,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v32 )
        {
LABEL_63:
          DeviceObjectPointer = -1073741670;
LABEL_64:
          v7 = SymbolicLinkList;
          goto LABEL_20;
        }
        v32->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
        DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v32);
        if ( DeviceObjectPointer == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          DeviceObjectPointer = IoStatusBlock.Status;
        }
        if ( DeviceObjectPointer < 0 )
          goto LABEL_64;
        if ( *v31 != *(_OWORD *)((char *)OutputBuffer + 8) )
        {
          DeviceObjectPointer = -1069940684;
          goto LABEL_64;
        }
      }
    }
    InputBuffer = 0LL;
    LODWORD(InputBuffer) = 1;
    v51 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
      DWORD1(InputBuffer) = v40 | 4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v33 = IoBuildDeviceIoControlRequest(
            0x2D191Cu,
            RelatedDeviceObject,
            &InputBuffer,
            0x38u,
            0LL,
            0,
            0,
            &Event,
            &IoStatusBlock);
    if ( v33 )
    {
      v33->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
      DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v33);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      goto LABEL_64;
    }
    goto LABEL_63;
  }
  v7 = v18;
LABEL_20:
  if ( (unsigned int)Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage() )
  {
    if ( v9 )
    {
      if ( DeviceObjectPointer >= 0 )
      {
        FileHandle = Handle;
        goto LABEL_24;
      }
LABEL_78:
      KeBugCheckEx(0x12Fu, 5uLL, DeviceObjectPointer, 0LL, 0LL);
    }
    ZwClose(Handle);
  }
  else if ( DeviceObjectPointer < 0 )
  {
    goto LABEL_78;
  }
LABEL_24:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x42646856u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x42646856u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)DeviceObjectPointer;
}
