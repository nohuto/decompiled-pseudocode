/*
 * XREFs of PopBootStatAccessCheck @ 0x140798D98
 * Callers:
 *     PopBootStatGet @ 0x14073D308 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x14073D9E0 (PopBootStatSet.c)
 *     PopBootStatCheckIntegrity @ 0x14084B00C (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1409940B0 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

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
