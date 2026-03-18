/*
 * XREFs of IopLiveDumpTrace @ 0x14055A12C
 * Callers:
 *     IoCaptureLiveDump @ 0x14094BA98 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14094C374 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A9C5F8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140559E30 (IopLiveDumpIsTracingEnabled.c)
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
