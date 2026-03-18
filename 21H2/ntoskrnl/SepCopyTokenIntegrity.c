/*
 * XREFs of SepCopyTokenIntegrity @ 0x1402ED98C
 * Callers:
 *     SeQueryTokenIntegrity @ 0x1402585D0 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14064A4B8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x14079DB4C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14079E024 (SepAdjustPrivileges.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x1402ED9BC (SepLocateTokenIntegrity.c)
 */

__int64 __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v2 + 8) = result;
  return result;
}
