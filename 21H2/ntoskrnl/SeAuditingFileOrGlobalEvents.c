/*
 * XREFs of SeAuditingFileOrGlobalEvents @ 0x140920980
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepRmGlobalSaclFind @ 0x140924D50 (SepRmGlobalSaclFind.c)
 */

BOOLEAN __stdcall SeAuditingFileOrGlobalEvents(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  BOOLEAN v5; // bl
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rax
  UNICODE_STRING v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v13 = 0LL;
  v12 = 0LL;
  RtlInitUnicodeString(&v12, L"File");
  LOBYTE(v7) = 1;
  if ( (unsigned int)SepRmGlobalSaclFind(&v13, 0LL, &v12, v7) != -1073741772 )
    goto LABEL_9;
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 0;
  if ( v8 < 0 )
  {
    v9 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v9 )
    {
      v10 = (char *)SecurityDescriptor + v9;
      goto LABEL_7;
    }
    return 0;
  }
  v10 = (char *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_7:
  if ( !v10 )
    return 0;
LABEL_9:
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                          117LL,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext)
    || (unsigned __int8)SepAdtAuditThisEventWithContext(
                          130LL,
                          AccessGranted,
                          AccessGranted == 0,
                          SubjectSecurityContext)
    || (unsigned __int8)SepAdtAuditThisEventWithContext(3LL, AccessGranted, AccessGranted == 0, SubjectSecurityContext) )
  {
    return 1;
  }
  return v5;
}
