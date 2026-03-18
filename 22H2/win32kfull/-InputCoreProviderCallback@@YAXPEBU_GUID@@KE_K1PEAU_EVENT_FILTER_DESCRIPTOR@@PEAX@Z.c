/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01C0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1C01C0E40 (-ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1C01C0F10 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !(unsigned int)UserIsDisconnectConnection(a1, a2, a3, a4) )
  {
    InputTraceLogging::Cursor::SetCursorSuppression();
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag();
  }
}
