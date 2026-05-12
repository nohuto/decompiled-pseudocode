/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1C0057D98
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1C0052790 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x1C007BFCC (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_1C00695F8 )
    ExFreePoolWithTag(xmmword_1C00695F8, 0x65546152u);
  if ( *(&xmmword_1C00695F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C00695F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_1C0069610 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_1C0069610 + 1), 0x65546152u);
  if ( xmmword_1C0069620 )
    ExFreePoolWithTag(xmmword_1C0069620, 0x65546152u);
  if ( *(&xmmword_1C0069620 + 1) )
    ExFreePoolWithTag(*(&xmmword_1C0069620 + 1), 0x65546152u);
  if ( xmmword_1C0069630 )
    ExFreePoolWithTag(xmmword_1C0069630, 0x65546152u);
}
