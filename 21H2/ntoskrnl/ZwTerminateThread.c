/*
 * XREFs of ZwTerminateThread @ 0x1403FAFE0
 * Callers:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
