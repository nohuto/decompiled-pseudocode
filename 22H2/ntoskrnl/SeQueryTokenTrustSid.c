/*
 * XREFs of SeQueryTokenTrustSid @ 0x140321CE4
 * Callers:
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
