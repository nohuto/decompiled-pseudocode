/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140600688
 * Callers:
 *     EtwpFreeCompression @ 0x14028E2C4 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405FFD08 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140600270 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140600498 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140205F68 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402063C4 (EtwpEnqueueAvailableBuffer.c)
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
