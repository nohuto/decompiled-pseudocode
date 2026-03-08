/*
 * XREFs of NtRevertContainerImpersonation @ 0x1405A1CC0
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140248164 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
