/*
 * XREFs of EtwpGetDriverDataDosPath @ 0x1403D1CCC
 * Callers:
 *     EtwpExpandFileName @ 0x140772920 (EtwpExpandFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     IoQueryFileDosDeviceName @ 0x14071FFB0 (IoQueryFileDosDeviceName.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetDriverDataDosPath(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  PVOID v3; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+38h] BYREF

  ObjectNameInformation = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( EtwpDriverDataDosPath )
  {
    *a1 = EtwpDriverDataDosPath;
    return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\DriverData\\");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    if ( v2 >= 0 )
    {
      Object = 0LL;
      v2 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( v2 >= 0 )
      {
        v3 = Object;
        v2 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
        if ( v2 >= 0 )
        {
          if ( _InterlockedCompareExchange64(&EtwpDriverDataDosPath, (signed __int64)ObjectNameInformation, 0LL) )
            ExFreePoolWithTag(ObjectNameInformation, 0);
          v3 = Object;
          *a1 = EtwpDriverDataDosPath;
        }
        ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      }
      ZwClose(FileHandle);
    }
    return (unsigned int)v2;
  }
}
