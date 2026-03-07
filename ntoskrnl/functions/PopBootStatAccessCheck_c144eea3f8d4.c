int __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  int result; // eax
  PVOID v6; // rdi
  PSECURITY_DESCRIPTOR v7; // rsi
  BOOLEAN v8; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-11h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+7h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+17h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+1Fh] BYREF
  char v15; // [rsp+D0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  v15 = 0;
  SecurityDescriptor = 0LL;
  Object = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  v6 = Object;
  AccessStatus = result;
  if ( result >= 0 )
  {
    result = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &v15, 0);
    AccessStatus = result;
    if ( result >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v7 = SecurityDescriptor;
      v8 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      result = AccessStatus;
      if ( v8 )
        result = 0;
      AccessStatus = result;
      if ( v7 )
      {
        ObReleaseObjectSecurityEx(v7, v15, (__int64)v6);
        result = AccessStatus;
      }
    }
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      return AccessStatus;
    }
  }
  return result;
}
