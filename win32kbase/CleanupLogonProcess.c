/*
 * XREFs of CleanupLogonProcess @ 0x1C008E950
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C008D904 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     WmsgpDisconnect @ 0x1C03013BC (WmsgpDisconnect.c)
 */

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
