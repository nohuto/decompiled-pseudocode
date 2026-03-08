/*
 * XREFs of PsRevertThreadToSelf @ 0x1409AECE0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
