/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x1409BBBD8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BB470 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     NtAdjustPrivilegesToken @ 0x14070EA00 (NtAdjustPrivilegesToken.c)
 *     NtSetSecurityObject @ 0x14076A550 (NtSetSecurityObject.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 *     NtOpenFile @ 0x1407E1EC0 (NtOpenFile.c)
 */

int __fastcall RtlpSysVolTakeOwnership(UNICODE_STRING *a1)
{
  int result; // eax
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  HANDLE TokenHandle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE FileHandle[2]; // [rsp+38h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v9; // [rsp+98h] [rbp+Fh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+17h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+B0h] [rbp+27h] BYREF
  __int16 Owner; // [rsp+C0h] [rbp+37h] BYREF
  int v13; // [rsp+C2h] [rbp+39h]
  __int16 v14; // [rsp+C6h] [rbp+3Dh]
  int v15; // [rsp+C8h] [rbp+3Fh]
  int v16; // [rsp+CCh] [rbp+43h]

  TokenHandle = 0LL;
  FileHandle[0] = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v9 = 0LL;
  IoStatusBlock = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    FileHandle[1] = (HANDLE)9;
    NewState.Privileges[0].Luid = (LUID)9LL;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = 2;
    if ( NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL) >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        v13 = 0;
        v14 = 1280;
        Owner = 513;
        v15 = 32;
        v16 = 544;
        v3 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 0);
        v4 = FileHandle[0];
        if ( v3 >= 0 )
        {
          NtSetSecurityObject(FileHandle[0], 1u, SecurityDescriptor);
          v4 = FileHandle[0];
        }
        NtClose(v4);
      }
    }
    return NtClose(TokenHandle);
  }
  return result;
}
