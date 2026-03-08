/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x1402E7580
 * Callers:
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x14077104C (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
