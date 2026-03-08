/*
 * XREFs of IopApplySystemPartitionProt @ 0x140B90CC0
 * Callers:
 *     IopProtectSystemPartition @ 0x140B70DDC (IopProtectSystemPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140389204 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  int v2; // edx
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rdi
  NTSTATUS Acl; // ebx
  __int64 v8; // r9
  HANDLE UnicodeString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+40h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+50h] [rbp-B8h] BYREF
  STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v14; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  strcpy(pszFormat, "\\ArcName\\%s");
  v14 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v2 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  memset(&ObjectAttributes_8, 0, 44);
  v3 = 4 * (*((unsigned __int8 *)SeLocalSystemSid + 1) + v2) + 56;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v3, 0x63416F49u);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool2, v3, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v5, 2u, 0x10000000u, SeLocalSystemSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 0xE0020000, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
          if ( Acl >= 0 )
          {
            v8 = *(_QWORD *)(a1 + 192);
            UnicodeString = 0LL;
            DestinationString_8 = 0LL;
            UnicodeString_8 = 0LL;
            IoStatusBlock = 0LL;
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v8);
            RtlInitAnsiString(&DestinationString_8, pszDest);
            Acl = RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString_8, 1u);
            if ( Acl >= 0 )
            {
              ObjectAttributes_8.RootDirectory = 0LL;
              ObjectAttributes_8.ObjectName = &UnicodeString_8;
              ObjectAttributes_8.Length = 48;
              ObjectAttributes_8.Attributes = 576;
              *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
              Acl = ZwOpenFile(&UnicodeString, 0x40000u, &ObjectAttributes_8, &IoStatusBlock, 1u, 0);
              RtlFreeUnicodeString(&UnicodeString_8);
              if ( Acl >= 0 )
              {
                Acl = ZwSetSecurityObject(UnicodeString, 4u, SecurityDescriptor);
                NtClose(UnicodeString);
              }
            }
          }
        }
      }
    }
  }
  ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
