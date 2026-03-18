/*
 * XREFs of SeQueryTokenTrustSid @ 0x140361248
 * Callers:
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
