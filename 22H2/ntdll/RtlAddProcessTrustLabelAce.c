/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x180067CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800686D0 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800688D0 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  ULONG AclRevision; // esi
  ACCESS_MASK v11; // r14d
  char *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+50h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( (AceFlags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  v11 = AccessMask;
  if ( (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = (char *)FirstFree;
  v13 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = AceFlags;
  *v12 = 20;
  *((_DWORD *)v12 + 1) = v11;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, v12 + 8, ProcessTrustLabelSid);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= AceRevision )
    v14 = AceRevision;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
