/*
 * XREFs of _GetIMEShowStatus @ 0x1C011E860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GetIMEShowStatus()
{
  return HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) != 0;
}
