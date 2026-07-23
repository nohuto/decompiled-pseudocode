/*
 * XREFs of SeQueryTokenTrustSid @ 0x1402470A4
 * Callers:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
