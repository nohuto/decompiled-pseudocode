/*
 * XREFs of ZwDelayExecution @ 0x18009DB60
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18004CC38 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     RtlpInitMuiCriticalSection @ 0x1800709A8 (RtlpInitMuiCriticalSection.c)
 *     _LdrpInitialize @ 0x180075C8C (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800D03C4 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800DDC64 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2724 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
