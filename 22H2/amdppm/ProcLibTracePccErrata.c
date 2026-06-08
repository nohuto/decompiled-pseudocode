/*
 * XREFs of ProcLibTracePccErrata @ 0x1C00204DC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D5F0 (ProcLibTraceControlCallback.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     ProcLibTraceNoPayloadEvent @ 0x1C0020488 (ProcLibTraceNoPayloadEvent.c)
 */

BOOLEAN __fastcall ProcLibTracePccErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PCC_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_PCC_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
