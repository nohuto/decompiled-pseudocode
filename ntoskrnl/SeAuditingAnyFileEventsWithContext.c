/*
 * XREFs of SeAuditingAnyFileEventsWithContext @ 0x1409CA6A0
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140207950 (SeAuditingAnyFileEventsWithContextEx.c)
 */

BOOLEAN __stdcall SeAuditingAnyFileEventsWithContext(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  return SeAuditingAnyFileEventsWithContextEx((__int64)SecurityDescriptor, (__int64)SubjectSecurityContext, 0LL);
}
