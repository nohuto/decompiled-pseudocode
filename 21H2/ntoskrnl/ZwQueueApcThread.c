/*
 * XREFs of ZwQueueApcThread @ 0x1403FAE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
