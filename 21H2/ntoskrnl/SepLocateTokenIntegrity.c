/*
 * XREFs of SepLocateTokenIntegrity @ 0x1402529CC
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402517DC (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x14025299C (SepCopyTokenIntegrity.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x140921010 (SepGetDefaultsSubjectContext.c)
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
