__int64 __fastcall DpiIndirectCbSendMessage(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        struct _FILE_OBJECT *a5,
        void (*a6)(void *, struct _IO_STATUS_BLOCK *),
        struct _FILE_OBJECT *a7)
{
  __int64 v10; // rcx
  struct _FILE_OBJECT *DeviceFileObject; // rax
  struct _FILE_OBJECT *v12; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v15; // r8
  unsigned int v16; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  bool *v18; // [rsp+48h] [rbp-20h]

  if ( !a1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 || !*(_BYTE *)(v10 + 1159) )
    return 3221225485LL;
  DeviceFileObject = (struct _FILE_OBJECT *)DpiFdoGetDeviceFileObject(v10);
  v12 = DeviceFileObject;
  if ( !DeviceFileObject )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(DeviceFileObject);
  LODWORD(Size) = a2;
  v16 = DpiIndirectSendAsyncUserModeRequest(v12, RelatedDeviceObject, v15, a3, Size, a5, a4, a6, a7, v18);
  ObfDereferenceObject(v12);
  return v16;
}
