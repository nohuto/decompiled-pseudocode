/*
 * XREFs of ZwSystemDebugControl @ 0x1403FD200
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140793A08 (PspLocateSystemDll.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Command);
}
