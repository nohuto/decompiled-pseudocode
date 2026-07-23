/*
 * XREFs of ZwTerminateProcess @ 0x1403FAB00
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
