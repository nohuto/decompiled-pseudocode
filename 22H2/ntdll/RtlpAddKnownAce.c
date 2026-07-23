/*
 * XREFs of RtlpAddKnownAce @ 0x1800375C4
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x180078880 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x180079FD0 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180085D50 (RtlAddAccessDeniedAceEx.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800888A0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAceEx @ 0x18008AF70 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessAce @ 0x18008B8D0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008C270 (RtlAddAccessDeniedAce.c)
 *     RtlDefaultNpAcl @ 0x1800D6930 (RtlDefaultNpAcl.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800E9330 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800E9390 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800E9600 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 AclRevision; // bp
  unsigned int v11; // eax
  char *v12; // r9
  unsigned __int16 v13; // r8
  __int64 result; // rax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v12 = (char *)FirstFree;
  v13 = 4 * (Sid[1] + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = a3;
  *v12 = a6;
  *((_DWORD *)v12 + 1) = a4;
  memmove(v12 + 8, Sid, 4LL * Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
