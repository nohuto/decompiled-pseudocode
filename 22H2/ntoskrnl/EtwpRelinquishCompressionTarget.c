/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405AD6B4
 * Callers:
 *     EtwpFreeCompression @ 0x1403213C4 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC43C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405ACCE0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD098 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x14022C448 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14032F238 (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1136) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1136) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1136), 5u);
    *(_QWORD *)(a1 + 1136) = 0LL;
  }
}
