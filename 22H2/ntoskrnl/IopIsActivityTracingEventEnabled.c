/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x1403C2A18
 * Callers:
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x1403C29E0 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1405557C4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
