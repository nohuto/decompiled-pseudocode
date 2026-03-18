/*
 * XREFs of SepLocateTokenIntegrity @ 0x1402ED9BC
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x1402ED98C (SepCopyTokenIntegrity.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CA928 (SepGetDefaultsSubjectContext.c)
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
