/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1402E0CA0
 * Callers:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140660EF4 (RtlpCapabilityCheckSystemCapability.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406DC9F0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC784 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x14025D3B0 (RtlInitializeSidEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDuplicateToken @ 0x14041BFA0 (ZwDuplicateToken.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Owner, int a3, _BYTE *a4)
{
  int v4; // edi
  char v9; // si
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE NewTokenHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h] BYREF
  int v20; // [rsp+100h] [rbp+0h]
  _DWORD Sid[20]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl[30]; // [rsp+160h] [rbp+60h] BYREF
  char v23; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v11 = 0LL;
  memset(Sid, 0, 0x44uLL);
  memset(Acl, 0, 0xECuLL);
  NewTokenHandle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v19 = 0LL;
  v20 = 0;
  v18 = 0LL;
  *a4 = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v19;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = 0x20000000CLL;
      LOWORD(v20) = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = 0;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 1u, Owner);
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, (struct _SID_IDENTIFIER_AUTHORITY *)&RtlpAppPackageAuthority, 2u, 2LL);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, (struct _SID_IDENTIFIER_AUTHORITY *)&RtlpAppPackageAuthority, 2u, 2LL);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v14 = (__int64)&v23;
    if ( !v9 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(NewTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
      {
LABEL_16:
        if ( NewTokenHandle )
          ZwClose(NewTokenHandle);
        return (unsigned int)v4;
      }
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      1,
      0,
      (__int64)&v14,
      (__int64)&RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      (__int64)&v11 + 4,
      (__int64)&v11);
    if ( !v9 )
      ObfDereferenceObject(SubjectContext.PrimaryToken);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == -1073741790 )
        goto LABEL_14;
    }
    else if ( HIDWORD(v11) == 1 )
    {
      *a4 = 1;
      goto LABEL_14;
    }
    v4 = v11;
LABEL_14:
    if ( v9 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_16;
  }
  return 3221225485LL;
}
