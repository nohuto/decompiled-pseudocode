/*
 * XREFs of PspIumVerifyParentSd @ 0x1409B3464
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402C0CD0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumVerifyParentSd(int a1, NTSTATUS a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+50h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-28h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+28h] BYREF

  AccessStatus = a2;
  SecurityDescriptor = 0LL;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = SeConvertStringSecurityDescriptorToSecurityDescriptor(a3, a1, (__int64)&SecurityDescriptor, (__int64)v4);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      SecurityDescriptor,
      &SubjectContext,
      0,
      0x80u,
      0,
      0LL,
      &PsTrustletGenericMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    ExFreePoolWithTag(SecurityDescriptor, 0);
    return (unsigned int)AccessStatus;
  }
  return result;
}
