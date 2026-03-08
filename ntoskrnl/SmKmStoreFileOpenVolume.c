/*
 * XREFs of SmKmStoreFileOpenVolume @ 0x1409D75D8
 * Callers:
 *     SmKmEtwAppendProductName @ 0x1405C8F6C (SmKmEtwAppendProductName.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmcCacheStart @ 0x1409D812C (SmcCacheStart.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateFile @ 0x140412DB0 (ZwCreateFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SmKmStoreFileOpenVolume(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  BOOLEAN v6; // si
  int v7; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[528]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = 0;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v17, 0, 0x208uLL);
  FileHandle = 0LL;
  v6 = IoSetThreadHardErrorMode(0);
  v7 = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)v17, 0x208u, &v12, 0);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 < 0 )
      {
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        *a2 = v9;
        *a3 = RelatedDeviceObject;
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v7;
}
