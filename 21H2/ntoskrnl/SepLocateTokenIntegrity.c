/*
 * XREFs of SepLocateTokenIntegrity @ 0x14028587C
 * Callers:
 *     SepCopyTokenIntegrity @ 0x14028584C (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x1402F5FEC (SepMandatorySubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x140921170 (SepGetDefaultsSubjectContext.c)
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
