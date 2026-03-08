/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14056D328
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098BB88 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409EBC38 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
