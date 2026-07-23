/*
 * XREFs of ZwAlertResumeThread @ 0x1403FA7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
