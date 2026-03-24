/*
 * XREFs of ZwTerminateProcess @ 0x1403F9FA0
 * Callers:
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140525E60 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408BD970 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14090D220 (PsCallEnclave.c)
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
