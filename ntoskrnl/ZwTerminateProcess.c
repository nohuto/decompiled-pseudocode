/*
 * XREFs of ZwTerminateProcess @ 0x140412890
 * Callers:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
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
