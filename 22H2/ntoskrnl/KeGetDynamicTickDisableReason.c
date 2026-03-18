/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14056F998
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098EC38 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EEACC (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
