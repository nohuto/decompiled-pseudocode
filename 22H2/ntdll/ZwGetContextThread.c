/*
 * XREFs of ZwGetContextThread @ 0x18009F330
 * Callers:
 *     RtlRemoteCall @ 0x1800FEF80 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x18010DB34 (RtlpSaveUmsDebugRegisterState.c)
 *     PsspDumpThread @ 0x1801167E8 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 243;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
