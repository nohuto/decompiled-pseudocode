/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x1409CA720
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepRmGlobalSaclFind @ 0x1408A1C12 (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int16 v7; // ax
  __int64 v8; // rax
  char *v9; // rax
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v12 = 0LL;
  v11 = 0LL;
  RtlInitUnicodeString(&v11, L"File");
  if ( (unsigned int)SepRmGlobalSaclFind(&v12, 0LL, &v11, 1) != -1073741772 )
    goto LABEL_9;
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    return 0;
  if ( v7 < 0 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v8 )
    {
      v9 = (char *)SecurityDescriptor + v8;
      goto LABEL_7;
    }
    return 0;
  }
  v9 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v9 )
    return 0;
LABEL_9:
  if ( SepAdtAuditThisEventWithContext(116LL, AccessGranted, AccessGranted == 0, SubjectSecurityContext)
    || SepAdtAuditThisEventWithContext(129LL, AccessGranted, AccessGranted == 0, SubjectSecurityContext)
    || SepAdtAuditThisEventWithContext(3LL, AccessGranted, AccessGranted == 0, SubjectSecurityContext) )
  {
    return 1;
  }
  return v5;
}
