/*
 * XREFs of NtRevertContainerImpersonation @ 0x1405A4170
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
