/*
 * XREFs of SeQueryTokenTrustSid @ 0x1402F6738
 * Callers:
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
