/*
 * XREFs of IopLiveDumpTrace @ 0x1405089C4
 * Callers:
 *     IoCaptureLiveDump @ 0x1408962E8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896A70 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AD698 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14050895C (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  const EVENT_DESCRIPTOR *v1; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v1, 0LL, 0, 0LL, 0LL, 0, 0LL);
  return result;
}
