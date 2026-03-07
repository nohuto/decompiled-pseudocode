__int64 __fastcall IopOpenLinkOrRenameTarget(HANDLE *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  bool v4; // zf
  __int64 v7; // r15
  HANDLE v9; // rsi
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  char v13; // al
  char v14; // cl
  PVOID *FileObjectExtension; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  NTSTATUS v18; // ebx
  struct _FILE_OBJECT *v19; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-48h]
  _WORD v26[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v27; // [rsp+C4h] [rbp-3Ch]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  __int128 v32; // [rsp+118h] [rbp+18h]
  __int128 v33; // [rsp+128h] [rbp+28h]
  __int64 v34; // [rsp+138h] [rbp+38h]

  FileHandle = 0LL;
  v4 = (a4->Flags & 0x800) == 0;
  Handle = 0LL;
  v7 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v27 = 0;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  HandleInformation = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  memset(&DriverContext.Size + 1, 0, 22);
  if ( !v4 || (result = IopGetBasicInformationFile(a4), (int)result >= 0) )
  {
    v11 = *(_QWORD *)(a3 + 8);
    if ( v11 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        LOBYTE(a2) = 1;
        result = IoConvertFileHandleToKernelHandle(v11, a2, 0LL, 0LL, &Handle);
        if ( (int)result < 0 )
          return result;
        v9 = Handle;
      }
      else
      {
        v9 = *(HANDLE *)(a3 + 8);
        Handle = v9;
      }
    }
    v12 = *(_QWORD *)(v7 + 184);
    v26[0] = *(_WORD *)(a3 + 16);
    v26[1] = v26[0];
    v28 = a3 + 20;
    v13 = ~(unsigned __int8)(a4->Flags >> 11);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v9;
    v14 = ~*(_BYTE *)(v12 - 70);
    v25 = 1LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
    ObjectAttributes.Attributes = v13 & 0x40 | ((v14 & 1) << 10) | 0x200;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DriverContext.Size = 40;
    memset(&DriverContext.Size + 1, 0, 22);
    FileObjectExtension = (PVOID *)IopGetFileObjectExtension((__int64)a4, 1, 0LL);
    if ( FileObjectExtension )
      DriverContext.DeviceObjectHint = *FileObjectExtension;
    DriverContext.TxnParameters = (PTXN_PARAMETER_BLOCK)IopGetFileObjectExtension(v16, 0, v17);
    v18 = IoCreateFileEx(
            &FileHandle,
            0x100002u,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0,
            7u,
            1u,
            0x4000u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            ((*(_BYTE *)(v12 - 70) & 1) == 0) | 0x104,
            &DriverContext);
    if ( v18 >= 0 )
    {
      Object = 0LL;
      v18 = ObReferenceObjectByHandle(FileHandle, 2u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
      if ( v18 < 0 )
      {
        ObCloseHandle(FileHandle, 0);
      }
      else
      {
        v19 = (struct _FILE_OBJECT *)Object;
        ObfDereferenceObject(Object);
        RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
        if ( IoGetRelatedDeviceObject(v19) == RelatedDeviceObject )
        {
          *(_QWORD *)(v12 - 48) = v19;
          v18 = 0;
          *a1 = FileHandle;
        }
        else
        {
          ObCloseHandle(FileHandle, 0);
          v18 = -1073741612;
        }
      }
    }
    if ( v9 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
        ObCloseHandle(Handle, 0);
    }
    return (unsigned int)v18;
  }
  return result;
}
