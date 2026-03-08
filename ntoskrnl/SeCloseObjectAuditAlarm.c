/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x1409CB1E0
 * Callers:
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((const UNICODE_STRING *)&SeSubsystemName, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
