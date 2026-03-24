/*
 * XREFs of PsRevertThreadToSelf @ 0x1409088E0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
