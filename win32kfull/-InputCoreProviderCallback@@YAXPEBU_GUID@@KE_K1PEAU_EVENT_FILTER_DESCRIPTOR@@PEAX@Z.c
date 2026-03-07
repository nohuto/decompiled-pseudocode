void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  if ( !(unsigned int)UserIsDisconnectConnection(a1) )
  {
    InputTraceLogging::Cursor::SetCursorSuppression();
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag();
  }
}
