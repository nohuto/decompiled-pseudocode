/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x1405097D0
 * Callers:
 *     DbgkpWerCleanupContext @ 0x1408890F0 (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x1408962E8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140896A70 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14050895C (IopLiveDumpIsTracingEnabled.c)
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
