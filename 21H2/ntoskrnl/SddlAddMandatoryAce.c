/*
 * XREFs of SddlAddMandatoryAce @ 0x140926540
 * Callers:
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlFirstFreeAce @ 0x1406506A0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x140651540 (RtlValidSid.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 */

__int64 __fastcall SddlAddMandatoryAce(PACL Acl, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v10; // ecx
  UCHAR AclRevision; // bp
  __int16 v12; // ax
  _WORD *v13; // rbx
  unsigned __int16 v14; // ax
  ULONG v15; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  unsigned __int16 v18; // [rsp+2Ch] [rbp-3Ch]

  FirstFree = 0LL;
  v17 = 0;
  v18 = 4096;
  if ( !Acl )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - v17;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - v18;
  if ( v10 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v12 = RtlLengthSid((PSID)a4);
  v13 = FirstFree;
  v14 = v12 + 8;
  if ( !FirstFree || (char *)FirstFree + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *(_BYTE *)v13 = 17;
  v13[1] = v14;
  *((_DWORD *)v13 + 1) = a6;
  v15 = RtlLengthSid((PSID)a4);
  RtlCopySid(v15, v13 + 4, (PSID)a4);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
