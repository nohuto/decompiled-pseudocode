/*
 * XREFs of DpiIndirectOpenDevice @ 0x1C03A0200
 * Callers:
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C01F3348 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 * Callees:
 *     ?DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C039F91C (-DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiIndirectOpenDevice(struct _DEVICE_OBJECT *a1, PVOID *a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v4; // rsi
  int ObjectName; // eax
  struct _UNICODE_STRING *v6; // rbx
  NTSTATUS v7; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a1);
  FileHandle = 0LL;
  v4 = DeviceAttachmentBaseRef;
  ObjectName = DpiIndirectGetObjectName(DeviceAttachmentBaseRef, (struct _OBJECT_NAME_INFORMATION **)&FileHandle);
  v6 = (struct _UNICODE_STRING *)FileHandle;
  v7 = ObjectName;
  if ( ObjectName >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    FileHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    IoStatusBlock = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = v6;
    KeEnterCriticalRegion();
    v7 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x40040u);
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( v7 >= 0 )
        *a2 = Object;
      ZwClose(FileHandle);
    }
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(v4);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v7;
}
