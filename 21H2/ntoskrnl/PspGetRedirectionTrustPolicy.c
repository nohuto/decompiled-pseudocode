/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1406DEAEC
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenGetRedirectionTrustPolicy @ 0x140255CD4 (SeTokenGetRedirectionTrustPolicy.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(__int64 a1)
{
  unsigned __int64 v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetRedirectionTrustPolicy(v2, &v4, &v5);
  ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return 1LL;
  else
    return v5 != 0 ? 2 : 0;
}
