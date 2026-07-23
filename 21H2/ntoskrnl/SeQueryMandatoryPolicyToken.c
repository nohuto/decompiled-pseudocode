/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x1402A73DC
 * Callers:
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1406CB4E8 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
