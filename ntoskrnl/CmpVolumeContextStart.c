/*
 * XREFs of CmpVolumeContextStart @ 0x14084C4D0
 * Callers:
 *     CmpVolumeContextCreate @ 0x14084C438 (CmpVolumeContextCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     IoVolumeDeviceToGuid @ 0x14072BB40 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     CmpUuidCreate @ 0x140733C60 (CmpUuidCreate.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVolumeContextStart(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh] BYREF

  DestinationString = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 )
  {
    v6 = IoVolumeDeviceToGuid(a3, (GUID *)(a1 + 32));
    if ( v6 >= 0 )
    {
      v6 = IoVolumeDeviceToGuidPath(a3, (__int64)&DestinationString);
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwCreateFile(&FileHandle, 0x180u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x40u, 0LL, 0);
        if ( v6 >= 0 )
        {
          Object = 0LL;
          v6 = ObReferenceObjectByHandle(FileHandle, 0x180u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
          *(_QWORD *)(a1 + 48) = Object;
          if ( v6 >= 0 )
            v6 = 0;
        }
      }
    }
  }
  else
  {
    v6 = CmpUuidCreate((UUID *)(a1 + 32));
    if ( v6 >= 0 )
      v6 = 0;
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v6;
}
