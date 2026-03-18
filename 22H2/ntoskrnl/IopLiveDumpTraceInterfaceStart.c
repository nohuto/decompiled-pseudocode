/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x14055AF54
 * Callers:
 *     IoCaptureLiveDump @ 0x14094BA98 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x14094C328 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x14094C374 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140559E30 (IopLiveDumpIsTracingEnabled.c)
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
