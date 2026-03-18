/*
 * XREFs of ZwTerminateProcess @ 0x14041AC20
 * Callers:
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
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
