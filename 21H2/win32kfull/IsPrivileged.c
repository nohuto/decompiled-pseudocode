/*
 * XREFs of IsPrivileged @ 0x1C00A2D80
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C00A3220 (xxxWrapSendMessageBSM.c)
 *     NtUserPostThreadMessage @ 0x1C00AAB70 (NtUserPostThreadMessage.c)
 *     _RegisterDManipHook @ 0x1C00E5110 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C00E52F4 (_RegisterUserApiHook.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C011BD28 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterBSDRWindow @ 0x1C011EE00 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C01FBB30 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // al
  unsigned int v3; // edi
  __int64 v4; // rdx
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
    UserSetLastError(1314LL, v4);
  return v3;
}
