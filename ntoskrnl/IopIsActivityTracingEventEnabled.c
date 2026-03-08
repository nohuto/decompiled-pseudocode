/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1403BD158
 * Callers:
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1403BD120 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140553324 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
