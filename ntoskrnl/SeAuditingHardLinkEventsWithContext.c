/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x140872F50
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int16 v3; // ax
  __int64 v5; // rax
  char *v6; // rax

  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v3 & 0x10) == 0 )
    return 0;
  if ( v3 >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v5 )
      return 0;
    v6 = (char *)SecurityDescriptor + v5;
  }
  if ( !v6 || !*((_WORD *)v6 + 2) )
    return 0;
  return SepAdtAuditThisEventWithContext(116LL, AccessGranted, AccessGranted == 0, SubjectSecurityContext) != 0;
}
