/*
 * XREFs of RtlNewSecurityGrantedAccess @ 0x1800D6E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlMapGenericMask @ 0x180037EA0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D900 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x18009FBD0 (ZwPrivilegeCheck.c)
 */

__int64 __fastcall RtlNewSecurityGrantedAccess(
        ACCESS_MASK a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        GENERIC_MAPPING *GenericMapping,
        _DWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // r15
  ACCESS_MASK v10; // eax
  NTSTATUS v11; // eax
  BOOLEAN v12; // cl
  __int64 result; // rax
  BOOLEAN Result[8]; // [rsp+30h] [rbp-59h] BYREF
  ULONG ReturnLength[2]; // [rsp+38h] [rbp-51h] BYREF
  ACCESS_MASK AccessMask[2]; // [rsp+40h] [rbp-49h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-41h] BYREF
  _BYTE TokenInformation[56]; // [rsp+60h] [rbp-29h] BYREF

  v6 = 0;
  AccessMask[0] = a1;
  Result[0] = 0;
  v9 = -5LL;
  if ( a4 )
    v9 = a4;
  NtQueryInformationToken((HANDLE)v9, 0xAu, TokenInformation, 0x38u, ReturnLength);
  RtlMapGenericMask(AccessMask, GenericMapping);
  v10 = AccessMask[0];
  *a6 = AccessMask[0];
  if ( (v10 & 0x1000000) != 0 )
  {
    *(_QWORD *)AccessMask = 8LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v11 = ZwPrivilegeCheck((HANDLE)v9, &RequiredPrivileges, Result);
    v12 = Result[0];
    if ( (v11 < 0 || !Result[0]) && !Result[0] )
      return 3221225569LL;
    *a6 &= ~0x1000000u;
  }
  else
  {
    v12 = Result[0];
  }
  if ( *a3 >= 0x14u )
  {
    *(_DWORD *)(a2 + 4) = 0;
    if ( v12 )
    {
      *(_DWORD *)a2 = 1;
      v6 = 0x80000000;
      *(_QWORD *)ReturnLength = 8LL;
    }
    else
    {
      *(_DWORD *)a2 = 0;
      *(_QWORD *)ReturnLength = 0LL;
    }
    *(_QWORD *)(a2 + 8) = *(_QWORD *)ReturnLength;
    result = 0LL;
    *(_DWORD *)(a2 + 16) = v6;
  }
  else
  {
    *a3 = 20;
    return 3221225507LL;
  }
  return result;
}
