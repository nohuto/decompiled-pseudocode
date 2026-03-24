/*
 * XREFs of IsPrivileged @ 0x1C011D5EC
 * Callers:
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00D7B24 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00DA640 (NtUserPostThreadMessage.c)
 *     _RegisterUserApiHook @ 0x1C011CFD8 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C011D2E4 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C011D500 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0133C70 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C0200E00 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // al
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
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
    UserSetLastError(1314LL, v4, v5);
  return v3;
}
