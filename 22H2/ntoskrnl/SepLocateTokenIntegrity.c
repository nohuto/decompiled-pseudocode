/*
 * XREFs of SepLocateTokenIntegrity @ 0x14025222C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14025103C (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x1402521FC (SepCopyTokenIntegrity.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x140921060 (SepGetDefaultsSubjectContext.c)
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
