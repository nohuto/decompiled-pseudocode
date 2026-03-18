/*
 * XREFs of IsPrivileged @ 0x1C00BDF50
 * Callers:
 *     _RegisterLogonProcess @ 0x1C00BDE70 (_RegisterLogonProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // al
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  v3 = v2;
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)v3 )
    UserSetLastError(1314LL, v4, v5, v6);
  return v3;
}
