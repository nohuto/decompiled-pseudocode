/*
 * XREFs of IopMarkBootPartition @ 0x140B54EB0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403891CC (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140389204 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14081B254 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     IopStoreSystemPartitionInformation @ 0x140B56F38 (IopStoreSystemPartitionInformation.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  const char *v3; // r9
  int v6; // ebx
  PVOID *v7; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rcx
  int v13; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *(const char **)(a1 + 184);
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", v3);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&DestinationString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        v6 = ObReferenceObjectByHandle(
               FileHandle,
               0,
               (POBJECT_TYPE)IoFileObjectType,
               0,
               (PVOID *)&DestinationString,
               0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&DestinationString.Length;
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 8LL),
                                             0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRefWithTag;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)DeviceAttachmentBaseRefWithTag + 12) |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v13 = *(_DWORD *)(v9 + 52);
            if ( (v13 & 1) != 0 )
              InitWinPEModeType |= 0x200u;
            if ( (v13 & 2) != 0 )
              InitWinPEModeType |= 0x100u;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          v6 = IopStoreBootDriveLetter(*(_QWORD *)(a1 + 200));
          if ( v6 >= 0 )
          {
            v6 = IopCreateUnicodeFromAnsiBuffer(&UnicodeString, *(const char **)(a1 + 208));
            if ( v6 >= 0 )
            {
              IopStoreSystemPartitionInformation(v11, &UnicodeString);
              RtlFreeUnicodeString(&UnicodeString);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
