/*
 * XREFs of HUBMISC_VerifyCallerIsAdmin @ 0x1C0083448
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x1C007B988 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C007BE54 (HUBFDO_IoctlResetHub.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBMISC_VerifyCallerIsAdmin(__int64 a1)
{
  void *PrimaryToken; // rbx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( !PrimaryToken && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 2u, 3u, 0x63u, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin == 0 ? 0xC0000001 : 0;
}
