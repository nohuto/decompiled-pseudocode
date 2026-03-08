/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140791A18
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x1407497C0 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F0CA4 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

NTSTATUS __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  NTSTATUS v4; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  v5 = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      &ExpRestrictedGenericMapping,
      1,
      &v5,
      &v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}
