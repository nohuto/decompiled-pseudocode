/*
 * XREFs of ZwAssignProcessToJobObject @ 0x1403FAC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
