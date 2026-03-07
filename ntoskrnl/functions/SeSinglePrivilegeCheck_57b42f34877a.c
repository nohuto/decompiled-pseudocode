BOOLEAN __stdcall SeSinglePrivilegeCheck(LUID PrivilegeValue, KPROCESSOR_MODE PreviousMode)
{
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v5; // al
  BOOLEAN v6; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = PrivilegeValue;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  v6 = v5;
  if ( PreviousMode )
    SePrivilegedServiceAuditAlarm(0, (__int64 *)&SubjectContext, (__int64)&RequiredPrivileges, v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
