/*
 * XREFs of RtlImpersonateSelfEx @ 0x140783B34
 * Callers:
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     RtlAcquirePrivilege @ 0x140783964 (RtlAcquirePrivilege.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1404124B0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x140412910 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x140412B50 (ZwDuplicateToken.c)
 */

__int64 __fastcall RtlImpersonateSelfEx(int a1, int a2, HANDLE *a3)
{
  NTSTATUS v5; // ebx
  HANDLE ThreadInformation; // [rsp+30h] [rbp-29h] BYREF
  HANDLE TokenHandle; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v10[2]; // [rsp+70h] [rbp+17h] BYREF
  __int16 v11; // [rsp+78h] [rbp+1Fh]
  __int16 v12; // [rsp+7Ah] [rbp+21h]

  TokenHandle = 0LL;
  ThreadInformation = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0;
  if ( !a3 && a2 )
    return 3221225712LL;
  v10[1] = a1;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityQualityOfService = v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v10[0] = 12;
  v11 = 1;
  v5 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2u, 0x200u, &TokenHandle);
  if ( v5 >= 0 )
  {
    v5 = ZwDuplicateToken(TokenHandle, a2 | 4, &ObjectAttributes, 0, TokenImpersonation, &ThreadInformation);
    if ( v5 >= 0 )
    {
      v5 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v5 >= 0 && a3 )
        *a3 = ThreadInformation;
      else
        ZwClose(ThreadInformation);
    }
    ZwClose(TokenHandle);
  }
  return (unsigned int)v5;
}
