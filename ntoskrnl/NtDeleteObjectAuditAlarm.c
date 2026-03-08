/*
 * XREFs of NtDeleteObjectAuditAlarm @ 0x1409CB0D0
 * Callers:
 *     <none>
 * Callees:
 *     SepProbeAndCaptureString_U @ 0x140698634 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // bl
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    if ( SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
    {
      v7 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      if ( v7 >= 0 )
        SepAdtDeleteObjectAuditAlarm(
          (const UNICODE_STRING *)P,
          (__int64)HandleId,
          (__int64 *)&SubjectContext,
          0LL,
          0LL,
          0);
    }
    else
    {
      v7 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v8 = 3221225626LL;
    if ( v7 != -1073741670 )
      return v7;
  }
  else
  {
    v7 = -1073741700;
    v8 = 3221225596LL;
  }
  SepAuditFailed(v8);
  return v7;
}
