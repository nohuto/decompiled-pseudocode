/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140398C98
 * Callers:
 *     IoReuseIrp @ 0x1402E6400 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140398C60 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x14050091C (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
