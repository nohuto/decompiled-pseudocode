/*
 * XREFs of NtAlpcSetInformation @ 0x18009E670
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TpCallbackIndependent @ 0x1800637C0 (TpCallbackIndependent.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18007A564 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppAllocAlpcCompletion @ 0x18007A7D4 (TppAllocAlpcCompletion.c)
 *     AlpcRegisterCompletionList @ 0x180086200 (AlpcRegisterCompletionList.c)
 *     AlpcRundownCompletionList @ 0x180086340 (AlpcRundownCompletionList.c)
 *     AlpcUnregisterCompletionList @ 0x180086360 (AlpcUnregisterCompletionList.c)
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800E07E0 (AlpcAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcSetInformation()
{
  __int64 result; // rax

  result = 141LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
