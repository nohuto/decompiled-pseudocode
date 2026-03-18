/*
 * XREFs of IsPrivileged @ 0x1C0060DD8
 * Callers:
 *     _RegisterUserApiHook @ 0x1C0048D78 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00497B0 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C0061020 (xxxWrapSendMessageBSM.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00B81DC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterBSDRWindow @ 0x1C00BB7C0 (NtUserRegisterBSDRWindow.c)
 *     NtUserPostThreadMessage @ 0x1C0115410 (NtUserPostThreadMessage.c)
 *     NtUserRegisterServicesProcess @ 0x1C01D9880 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // al
  unsigned int v3; // edi
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  v3 = v2;
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)v3 )
    UserSetLastError(1314LL);
  return v3;
}
