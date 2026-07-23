/*
 * XREFs of NtTestAlert @ 0x14068D6E0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140340540 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _DWORD *v2; // r9

  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode, v0, v1, v2) != 0 ? 0x101 : 0;
}
