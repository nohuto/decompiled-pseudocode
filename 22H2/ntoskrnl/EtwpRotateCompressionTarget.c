/*
 * XREFs of EtwpRotateCompressionTarget @ 0x140602B28
 * Callers:
 *     EtwpCompressBuffer @ 0x1406021D0 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140602B94 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140227B6C (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x140227E10 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140227FC8 (EtwpEnqueueAvailableBuffer.c)
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
