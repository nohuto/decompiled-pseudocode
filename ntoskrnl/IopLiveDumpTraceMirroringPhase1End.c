/*
 * XREFs of IopLiveDumpTraceMirroringPhase1End @ 0x140558E28
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140A98070 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceMirroringPhase1End()
{
  char result; // al
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_MIRRORING_PHASE1_END;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v2 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_MIRRORING_PHASE1_END;
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  return result;
}
