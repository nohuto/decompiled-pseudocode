unsigned __int8 __fastcall FxInterrupt::_InterruptMarkDisconnecting(_BYTE *SyncContext)
{
  SyncContext[432] = 1;
  return 1;
}
