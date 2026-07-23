/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x140610E80
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int16 v3; // ax
  PSECURITY_SUBJECT_CONTEXT v4; // r9
  __int64 v5; // rax
  char *v6; // rax

  v3 = *((_WORD *)SecurityDescriptor + 1);
  v4 = SubjectSecurityContext;
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
  if ( !v6 )
    return 0;
  if ( !*((_WORD *)v6 + 2) )
    return 0;
  LOBYTE(SecurityDescriptor) = AccessGranted;
  LOBYTE(SubjectSecurityContext) = AccessGranted == 0;
  return (unsigned __int8)SepAdtAuditThisEventWithContext(117LL, SecurityDescriptor, SubjectSecurityContext, v4) != 0;
}
