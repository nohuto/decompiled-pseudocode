/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CB2A0
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140791BC0 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1409CB280 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (__int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (__int128 *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
