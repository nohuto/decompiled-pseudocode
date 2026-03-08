/*
 * XREFs of SepCopyTokenIntegrity @ 0x14030FED0
 * Callers:
 *     SeQueryTokenIntegrity @ 0x14035C400 (SeQueryTokenIntegrity.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14066C748 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     SepAdjustPrivileges @ 0x14070EDE0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SepCopyTokenIntegrity(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v2 == -1 || (result = (_DWORD *)(*(_QWORD *)(a1 + 152) + 16 * v2)) == 0LL )
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)a2 = SeUntrustedMandatorySid;
    *(_DWORD *)(a2 + 8) = 96;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = result[2];
  }
  return result;
}
