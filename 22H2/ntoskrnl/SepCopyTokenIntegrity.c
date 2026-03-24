/*
 * XREFs of SepCopyTokenIntegrity @ 0x1402521FC
 * Callers:
 *     SeQueryTokenIntegrity @ 0x140251BD8 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405C139C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepValidLabelSubjectContext @ 0x140607E9C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140608570 (SepAdjustPrivileges.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1406D41E0 (SeTokenCanImpersonate.c)
 *     SeIsTokenAssignableToProcess @ 0x14070DAF4 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14025222C (SepLocateTokenIntegrity.c)
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
