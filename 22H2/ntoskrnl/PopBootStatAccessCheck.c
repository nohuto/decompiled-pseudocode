/*
 * XREFs of PopBootStatAccessCheck @ 0x1407EC0D4
 * Callers:
 *     PopBootStatGet @ 0x1407ECA68 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1407EEFF8 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x14084E3B0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140997160 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x140231630 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C3160 (ObReleaseObjectSecurityEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpGetObjectSecurity @ 0x140736720 (ObpGetObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 */

int __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  int result; // eax
  PSECURITY_DESCRIPTOR v6; // rsi
  BOOLEAN v7; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-1h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+17h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+1Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+1Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+27h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+2Fh] BYREF
  char v14; // [rsp+C0h] [rbp+7Fh] BYREF

  GrantedAccess = 0;
  v14 = 0;
  SecurityDescriptor = 0LL;
  Object = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  AccessStatus = result;
  if ( result >= 0 )
  {
    result = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &v14, 0);
    AccessStatus = result;
    if ( result >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v6 = SecurityDescriptor;
      v7 = SeAccessCheck(
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
      if ( v7 )
        result = 0;
      AccessStatus = result;
      if ( v6 )
      {
        ObReleaseObjectSecurityEx(v6, v14, (__int64)Object);
        result = AccessStatus;
      }
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      return AccessStatus;
    }
  }
  return result;
}
