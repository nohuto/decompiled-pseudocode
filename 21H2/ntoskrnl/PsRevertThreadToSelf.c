/*
 * XREFs of PsRevertThreadToSelf @ 0x140908890
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x14065AEA0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
