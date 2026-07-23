/*
 * XREFs of ZwResumeProcess @ 0x1403FC9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeProcess(HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
