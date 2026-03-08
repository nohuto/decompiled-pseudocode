/*
 * XREFs of SepLocateTokenIntegrity @ 0x14030FEA8
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CADF0 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
