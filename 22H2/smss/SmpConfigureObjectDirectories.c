/*
 * XREFs of SmpConfigureObjectDirectories @ 0x14000E3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureObjectDirectories(__int64 a1, __int64 a2, const WCHAR *a3)
{
  const WCHAR *v3; // rbx
  PSECURITY_DESCRIPTOR v4; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING v8; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *DirectoryHandle; // [rsp+A0h] [rbp+20h] BYREF

  *(_DWORD *)&String2.Length = 1703960;
  String2.Buffer = L"\\RPC Control";
  v3 = a3;
  v8.Buffer = L"\\Windows";
  *(_DWORD *)&v8.Length = 1179664;
  while ( *v3 )
  {
    RtlInitUnicodeString(&DestinationString, v3);
    v4 = SmpPrimarySecurityDescriptor;
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) || RtlEqualUnicodeString(&DestinationString, &v8, 1u) )
      v4 = SmpLiberalSecurityDescriptor;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 208;
    ObjectAttributes.SecurityDescriptor = v4;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
      NtClose(DirectoryHandle);
    while ( *v3++ )
      ;
  }
  return 0LL;
}
