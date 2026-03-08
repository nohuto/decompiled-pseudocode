/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140692BE4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
