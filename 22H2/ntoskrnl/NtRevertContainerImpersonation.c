/*
 * XREFs of NtRevertContainerImpersonation @ 0x140581D60
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9

  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v0, v1, v2);
}
