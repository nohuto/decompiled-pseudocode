/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14034D740
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406F8A44 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14093D9BC (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
