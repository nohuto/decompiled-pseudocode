/*
 * XREFs of SepCopyTokenIntegrity @ 0x14028584C
 * Callers:
 *     SeQueryTokenIntegrity @ 0x140285230 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405C168C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x1406974CC (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140697BA0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14028587C (SepLocateTokenIntegrity.c)
 */

__int64 SepCopyTokenIntegrity()
{
  __int64 TokenIntegrity; // rax
  __int64 v1; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity();
  if ( TokenIntegrity )
  {
    *(_QWORD *)v1 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v1 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v1 + 8) = result;
  return result;
}
