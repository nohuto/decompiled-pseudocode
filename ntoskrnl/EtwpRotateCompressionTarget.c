/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1406006D8
 * Callers:
 *     EtwpCompressBuffer @ 0x1405FFD70 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140600744 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402063C4 (EtwpEnqueueAvailableBuffer.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1152), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1168);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1152) = v1;
  return result;
}
