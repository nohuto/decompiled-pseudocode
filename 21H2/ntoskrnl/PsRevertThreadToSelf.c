/*
 * XREFs of PsRevertThreadToSelf @ 0x1407AF180
 * Callers:
 *     PsAssignImpersonationToken @ 0x1407AF0C0 (PsAssignImpersonationToken.c)
 * Callees:
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
