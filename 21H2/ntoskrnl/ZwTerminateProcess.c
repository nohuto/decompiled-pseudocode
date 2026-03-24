/*
 * XREFs of ZwTerminateProcess @ 0x1403FA920
 * Callers:
 *     KiDispatchException @ 0x140273320 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140525F20 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ExitStatus);
}
