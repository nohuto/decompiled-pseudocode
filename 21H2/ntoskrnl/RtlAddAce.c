/*
 * XREFs of RtlAddAce @ 0x14065F130
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1402C91B4 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F8C44 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C28F4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14065F440 (SepAppendAceToTokenObjectAcl.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C380 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x14065B880 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x14065C5C0 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  char *v9; // rcx
  UCHAR AclRevision; // r15
  __int64 v11; // r11
  char *v12; // rdx
  __int16 v13; // r12
  unsigned __int8 v14; // al
  ULONG v15; // ecx
  PACL i; // rdx
  int v17; // r8d
  __int64 v18; // r9
  char *v19; // rdi
  NTSTATUS result; // eax
  __int64 v21; // r10
  bool v22; // cf
  __int64 v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v23[0] = 0LL;
  if ( !RtlValidAcl((__int64)Acl) || !RtlFirstFreeAce((__int64)Acl, v23) )
    return -1073741811;
  v9 = (char *)AceList;
  AclRevision = AceRevision;
  v11 = AceListLength;
  if ( (unsigned __int8)AceRevision <= Acl->AclRevision )
    AclRevision = Acl->AclRevision;
  v12 = (char *)AceList + AceListLength;
  v13 = 0;
  if ( AceList < v12 )
  {
    do
    {
      v14 = *v9;
      if ( (unsigned __int8)*v9 > 3u )
      {
        if ( v14 > 4u )
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = AceRevision < 4;
        }
        else
        {
          v22 = AceRevision < 3;
        }
        if ( v22 )
          return -1073741811;
      }
LABEL_7:
      ++v13;
      v9 += *((unsigned __int16 *)v9 + 1);
    }
    while ( v9 < v12 );
  }
  if ( v9 > v12 )
    return -1073741811;
  if ( !v23[0] || (unsigned __int64)AceListLength + v23[0] > (unsigned __int64)Acl + Acl->AclSize )
    return -1073741789;
  v15 = 0;
  for ( i = Acl + 1; v15 < StartingAceIndex; i = (PACL)((char *)i + i->AclSize) )
  {
    if ( v15 >= Acl->AceCount )
      break;
    ++v15;
  }
  v17 = LODWORD(v23[0]) - (_DWORD)i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + AceListLength;
    do
    {
      *(&i->AclRevision + v21) = *(&i->AclRevision + v18);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( AceListLength )
  {
    v19 = (char *)((_BYTE *)AceList - (_BYTE *)i);
    do
    {
      i->AclRevision = *(&i->AclRevision + (_QWORD)v19);
      i = (PACL)((char *)i + 1);
      --v11;
    }
    while ( v11 );
  }
  Acl->AceCount += v13;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
