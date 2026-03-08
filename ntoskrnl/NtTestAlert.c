/*
 * XREFs of NtTestAlert @ 0x1407ED030
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1403646F0 (KeTestAlertThread.c)
 */

__int64 NtTestAlert()
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
