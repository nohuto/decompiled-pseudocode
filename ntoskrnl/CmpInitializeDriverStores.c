/*
 * XREFs of CmpInitializeDriverStores @ 0x140B52CE0
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140413850 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x140413BD0 (ZwCreateSymbolicLinkObject.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B95024 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  int SymbolicLinkObject; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE v15; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  v15 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 592LL;
  Destination = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  SymbolicLinkObject = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( SymbolicLinkObject >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Nodes");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 592;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    SymbolicLinkObject = ZwCreateDirectoryObject(&v15, 0xF000Fu, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 592;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RtlInitUnicodeString(&Destination, L"\\DriverStore\\Nodes");
      SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
      if ( SymbolicLinkObject >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
        v4 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)&Destination.Length = 0x10000000LL;
          Destination.Buffer = Pool2;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot");
          RtlInitUnicodeString(&DestinationString, L"SYSTEM");
          ObjectAttributes.RootDirectory = v15;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( SymbolicLinkObject >= 0 )
          {
            ZwClose(Handle);
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL);
            v6 = (_QWORD *)*v5;
            if ( (_QWORD *)*v5 != v5 )
            {
              do
              {
                if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
                {
                  RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
                  SymbolicLinkObject = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
                  if ( SymbolicLinkObject < 0 )
                    break;
                  *(_QWORD *)&Destination.Length = 0x10000000LL;
                  Destination.Buffer = v4;
                  RtlAppendUnicodeToString(&Destination, L"\\ArcName\\");
                  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
                  RtlFreeUnicodeString(&DestinationString);
                  SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath(v6[2]);
                  v9 = v6[2];
                  if ( SystemRelativeRegistryHiveFilePath > v9
                    && (__int64)((SystemRelativeRegistryHiveFilePath - v9) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
                  {
                    DestinationString.Buffer = (wchar_t *)v6[2];
                    DestinationString.Length = 2
                                             * ((__int64)(unsigned int)(SystemRelativeRegistryHiveFilePath
                                                                      - *((_DWORD *)v6 + 4)) >> 1);
                    DestinationString.MaximumLength = DestinationString.Length;
                    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
                  }
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
                  ObjectAttributes.RootDirectory = v15;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
                  ObjectAttributes.Attributes = 592;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
                  if ( SymbolicLinkObject < 0 )
                    break;
                  ZwClose(Handle);
                }
                v6 = (_QWORD *)*v6;
              }
              while ( v6 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL) );
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          SymbolicLinkObject = -1073741670;
        }
      }
    }
  }
  if ( v15 )
    ZwClose(v15);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)SymbolicLinkObject;
}
