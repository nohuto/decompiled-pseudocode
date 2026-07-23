/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x1800E9B30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCopySid @ 0x1800688D0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlAddScopedPolicyIDAce(PACL Acl, ULONG AceRevision, ULONG AceFlags, ULONG AccessMask, PSID Sid)
{
  NTSTATUS result; // eax
  int v10; // ecx
  unsigned __int8 AclRevision; // si
  _WORD *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-3Ch]

  FirstFree = 0LL;
  v16 = 0;
  v17 = 4352;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2) - v16;
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - v17;
  if ( v10 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || AccessMask )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = FirstFree;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_DWORD *)FirstFree + 1) = 0;
  v12[1] = v13;
  *((_BYTE *)v12 + 1) = AceFlags;
  *(_BYTE *)v12 = 19;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v12 + 4, Sid);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v14 = AceRevision;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
