/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x140202A4C
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1405DBD68 (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
