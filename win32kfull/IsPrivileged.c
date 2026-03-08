/*
 * XREFs of IsPrivileged @ 0x1C00DD9E0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0037190 (NtUserPostThreadMessage.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00958A8 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterUserApiHook @ 0x1C00DD234 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00DD6D0 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C00DD8F0 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterBSDRWindow @ 0x1C00F3260 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C01DA8B0 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
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
    UserSetLastError(1314);
  return v3;
}
