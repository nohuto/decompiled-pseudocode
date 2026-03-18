/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1406BD91C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BDE18 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A7F08 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
