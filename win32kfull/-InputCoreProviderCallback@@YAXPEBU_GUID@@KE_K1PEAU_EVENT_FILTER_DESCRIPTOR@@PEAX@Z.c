/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01C2040
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1C01C1FA0 (-ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01C2070 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  if ( !(unsigned int)UserIsDisconnectConnection(a1) )
  {
    InputTraceLogging::Cursor::SetCursorSuppression();
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag();
  }
}
