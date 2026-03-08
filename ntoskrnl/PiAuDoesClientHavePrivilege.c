/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x140958948
 * Callers:
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x1409679A8 (PiCMSetDeviceProblem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // bl
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-50h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-30h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}
