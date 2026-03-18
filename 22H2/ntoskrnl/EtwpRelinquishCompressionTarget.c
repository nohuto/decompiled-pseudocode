/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140602AD8
 * Callers:
 *     EtwpFreeCompression @ 0x14031F0F0 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140602168 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1406026C0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1406028E8 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140227B6C (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140227FC8 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1152), 5u);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
}
