NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  ULONG v11; // ecx
  unsigned int v12; // ebx
  __int16 v13; // r14
  __int64 v14; // rdx
  int v15; // ecx
  NTSTATUS Vpb; // ebx
  char *v17; // rdx
  ULONG v18; // edx
  __int16 v19; // cx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  PVOID v22; // rcx
  NTSTATUS inserted; // eax
  PVOID v24; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-A8h]
  ULONG Size_4; // [rsp+5Ch] [rbp-A4h]
  PVOID v30; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  ULONG v32; // [rsp+74h] [rbp-8Ch]
  ULONG v33; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v35[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v43[40]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = DeviceType;
  Size_4 = DeviceExtensionSize;
  v35[1] = 0;
  v38 = 0LL;
  v10 = (unsigned __int8)DeviceCharacteristics & 0x80;
  Object = 0LL;
  Handle = 0LL;
  v11 = 8 - (DeviceExtensionSize & 7);
  v30 = 0LL;
  P = 0LL;
  v33 = DeviceCharacteristics & 0x80;
  if ( (DeviceExtensionSize & 7) == 0 )
    v11 = DeviceExtensionSize & 7;
  DestinationString = 0LL;
  v32 = DeviceExtensionSize + v11;
  v12 = DeviceExtensionSize + v11 + 448;
  Size = v12;
  v13 = 0;
  if ( (DeviceCharacteristics & 0x80) != 0 )
    goto LABEL_46;
  while ( 1 )
  {
    v14 = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v9, DeviceCharacteristics, v10, v43, &v30, &P, 0LL);
    if ( (_DWORD)v9 == 3 )
    {
      v13 = 2048;
    }
    else if ( (_DWORD)v9 == 7 || (_DWORD)v9 == 8 || (_DWORD)v9 == 36 )
    {
      v13 = 512;
    }
    v35[0] = 48;
    v36 = 0LL;
    v37 = DeviceName;
    v39 = v14;
    v15 = IopCaseInsensitive != 0 ? 576 : 512;
    v40 = 0LL;
    LODWORD(v38) = v15;
    if ( Exclusive )
    {
      v15 |= 0x20u;
      LODWORD(v38) = v15;
    }
    if ( DeviceName )
      LODWORD(v38) = v15 | 0x10;
    if ( v12 < 0x1C0 )
    {
      Vpb = -1073741811;
      goto LABEL_31;
    }
    Vpb = ObCreateObjectEx(
            0,
            (_DWORD *)IoDeviceObjectType,
            (__int64)v35,
            0,
            (__int64)NewObject,
            v12,
            0,
            0,
            &Object,
            0LL);
    if ( Vpb < 0 )
      goto LABEL_31;
    memset(Object, 0, Size);
    v17 = (char *)Object + v32 + 336;
    *((_QWORD *)v17 + 1) = Object;
    *((_QWORD *)Object + 39) = v17;
    *(_DWORD *)v17 = 13;
    *((_QWORD *)v17 + 11) = 0LL;
    *((_DWORD *)v17 + 4) = 0;
    *((_QWORD *)v17 + 3) = 0LL;
    v18 = Size_4;
    v19 = Size_4 + 336;
    *(_WORD *)Object = 3;
    *((_WORD *)Object + 1) = v19;
    *((_DWORD *)Object + 18) = v9;
    *((_DWORD *)Object + 13) = DeviceCharacteristics;
    if ( (unsigned int)v9 <= 0x24 )
    {
      v20 = 0x1080000084LL;
      if ( _bittest64(&v20, v9) )
        break;
    }
LABEL_16:
    *((_DWORD *)Object + 38) = 0;
    *((_WORD *)Object + 152) = v13;
    *((_DWORD *)Object + 12) = 128;
    if ( Exclusive )
      *((_DWORD *)Object + 12) |= 8u;
    if ( DeviceName )
      *((_DWORD *)Object + 12) |= 0x40u;
    if ( v18 )
      *((_QWORD *)Object + 8) = (char *)Object + 336;
    else
      *((_QWORD *)Object + 8) = 0LL;
    *((_BYTE *)Object + 76) = 1;
    if ( (_DWORD)v9 == 3 || (_DWORD)v9 == 8 || (_DWORD)v9 == 9 || (_DWORD)v9 == 20 || (_DWORD)v9 == 32 )
    {
      v21 = (char *)Object + 80;
      *((_QWORD *)Object + 11) = (char *)Object + 80;
      *v21 = v21;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)Object + 4);
    }
    v22 = Object;
    if ( (*((_DWORD *)Object + 13) & 0x40001) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) |= 0x800u;
      v22 = Object;
    }
    inserted = ObInsertObject(v22, 0LL, 3u, 1u, &Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      AstLogDeviceCreated(Object, (unsigned int)v9, DeviceCharacteristics);
      ObfReferenceObject(DriverObject);
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)Object, 1);
      if ( *((_QWORD *)Object + 7) )
        PoVolumeDevice();
      ObCloseHandle(Handle, 0);
      goto LABEL_31;
    }
    if ( !v33 || inserted != -1073741771 )
    {
      Object = 0LL;
LABEL_31:
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      v24 = P;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Vpb >= 0 )
      {
        LOBYTE(v24) = 1;
        EtwTiLogDeviceObjectLoadUnload(v24, *((_QWORD *)Object + 1) + 56LL, DeviceName);
      }
      *DeviceObject = (PDEVICE_OBJECT)Object;
      return Vpb;
    }
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      v30 = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v12 = Size;
LABEL_46:
    RtlStringCchPrintfW(
      pszDest,
      0x11uLL,
      L"\\Device\\%08lx",
      (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
    RtlInitUnicodeString(&DestinationString, pszDest);
    DeviceName = &DestinationString;
  }
  Vpb = IopCreateVpb(Object);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent((PRKEVENT)((char *)Object + 280), SynchronizationEvent, 1u);
    v18 = Size_4;
    goto LABEL_16;
  }
  ObfDereferenceObject(Object);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
