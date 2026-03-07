__int64 __fastcall RtlCheckTokenCapability(HANDLE ExistingTokenHandle, PSID Sid, _BYTE *a3)
{
  char v6; // si
  NTSTATUS v7; // ebx
  bool v8; // al
  int v9; // ecx
  PACCESS_TOKEN PrimaryToken; // rcx
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v14; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  char *v18; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v24; // [rsp+170h] [rbp+70h] BYREF
  int v25; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v27; // [rsp+220h] [rbp+120h] BYREF
  char v28; // [rsp+260h] [rbp+160h] BYREF

  v14 = 0;
  v12 = 0;
  memset(Acl, 0, sizeof(Acl));
  TokenHandle = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  *a3 = 0;
  v16 = &v28;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(Sid) )
  {
    v7 = -1073741811;
LABEL_24:
    if ( ExistingTokenHandle )
      return (unsigned int)v7;
    goto LABEL_17;
  }
  if ( ExistingTokenHandle )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v24;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v24 = 0x20000000CLL;
    LOWORD(v25) = 1;
    v7 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandle);
    if ( v7 < 0 )
      return (unsigned int)v7;
    ReturnLength = 88;
    ExistingTokenHandle = 0LL;
    ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v6 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v16);
    *(_OWORD *)TokenInformation = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, Sid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  v18 = &v27;
  if ( v6
    || (Object = 0LL,
        SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v8 = SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           0,
           &SubjectContext,
           0,
           0x10001u,
           0,
           &v18,
           RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           &v14,
           &v12);
    v9 = v12;
    v7 = v12;
    if ( !v8 )
      v7 = -1073741790;
    if ( !v6 )
    {
      ObfDereferenceObject(SubjectContext.PrimaryToken);
      v9 = v12;
    }
    if ( v7 >= 0 )
    {
      if ( !v9 && v14 == 65537 )
        *a3 = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_24;
    }
  }
LABEL_17:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return (unsigned int)v7;
}
