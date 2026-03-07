char __fastcall CleanupLogonProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  HANDLE v4; // rcx
  char result; // al

  if ( gWinLogonRpcHandle )
  {
    WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  v4 = ghSMSS;
  if ( ghSMSS )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  result = isInputVirtualizationEnabled((__int64)v4, a2, a3, a4);
  if ( result )
  {
    if ( gpkeIVThreadShutdown )
      return KeSetEvent(gpkeIVThreadShutdown, 1, 0);
  }
  return result;
}
