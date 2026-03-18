/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14022B1FC
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1406A293C (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
