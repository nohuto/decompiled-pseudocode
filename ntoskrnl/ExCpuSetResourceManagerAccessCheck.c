/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x1403AB15C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     NtAcquireProcessActivityReference @ 0x1407FC5F0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)ExpCpuSetSecurityDescriptor,
    7,
    &SubjectContext,
    0,
    1u,
    0,
    0LL,
    &ExpRestrictedGenericMapping,
    a1,
    &v6,
    (int *)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
