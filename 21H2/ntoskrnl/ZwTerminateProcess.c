/*
 * XREFs of ZwTerminateProcess @ 0x14041BCE0
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
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
