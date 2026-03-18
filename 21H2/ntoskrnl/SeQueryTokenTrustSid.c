/*
 * XREFs of SeQueryTokenTrustSid @ 0x14024FBA4
 * Callers:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
