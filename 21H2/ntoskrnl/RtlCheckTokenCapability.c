/*
 * XREFs of RtlCheckTokenCapability @ 0x140201400
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14041BB80 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x14041BFA0 (ZwDuplicateToken.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIsCapabilitySid @ 0x14078EC8C (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall RtlCheckTokenCapability(HANDLE ExistingTokenHandle, PSID Sid, _BYTE *a3)
{
  char v6; // si
  int v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  char v9; // al
  int v10; // ecx
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v15; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v21; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v23; // [rsp+170h] [rbp+70h] BYREF
  int v24; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v26; // [rsp+220h] [rbp+120h] BYREF
  char v27; // [rsp+260h] [rbp+160h] BYREF

  LODWORD(v13) = 0;
  v12 = 0LL;
  memset(Acl, 0, sizeof(Acl));
  TokenHandle = 0LL;
  v23 = 0LL;
  v24 = 0;
  memset(&ObjectAttributes, 0, 44);
  v21 = 0LL;
  v17 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(TokenInformation, 0, 0x58uLL);
  *a3 = 0;
  v15 = &v27;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(Sid) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  if ( ExistingTokenHandle )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v23;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v23 = 0x20000000CLL;
    LOWORD(v24) = 1;
    v7 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandle);
    if ( v7 < 0 )
      return (unsigned int)v7;
    HIDWORD(v12) = 88;
    ExistingTokenHandle = 0LL;
    ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, (PULONG)&v12 + 1);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v6 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v15);
    *(_OWORD *)TokenInformation = *(_OWORD *)v15;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, Sid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  v17 = (__int64)&v26;
  if ( v6
    || (Object = 0LL,
        SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v9 = SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           65537,
           0,
           (__int64)&v17,
           (__int64)&RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           (__int64)&v13,
           (__int64)&v12);
    v10 = v12;
    v7 = v12;
    if ( !v9 )
      v7 = -1073741790;
    if ( !v6 )
    {
      ObfDereferenceObject(SubjectContext.PrimaryToken);
      v10 = v12;
    }
    if ( v7 >= 0 )
    {
      if ( !v10 && (_DWORD)v13 == 65537 )
        *a3 = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
LABEL_22:
      if ( ExistingTokenHandle )
        return (unsigned int)v7;
    }
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return (unsigned int)v7;
}
