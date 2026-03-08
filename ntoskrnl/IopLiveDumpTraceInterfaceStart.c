/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x140558AB4
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x140949308 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // ecx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    if ( v1 )
    {
      v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
      if ( v1 != 1 )
        v2 = &LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    }
    else
    {
      v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_CAPTURE_API_START;
    }
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
