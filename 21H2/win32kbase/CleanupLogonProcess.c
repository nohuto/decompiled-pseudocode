/*
 * XREFs of CleanupLogonProcess @ 0x1C00B8E60
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     WmsgpDisconnect @ 0x1C02C83F4 (WmsgpDisconnect.c)
 */

char CleanupLogonProcess()
{
  char result; // al

  if ( gWinLogonRpcHandle )
  {
    WmsgpDisconnect();
    gWinLogonRpcHandle = 0LL;
    gpidLogon = 0LL;
  }
  if ( ghSMSS )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  result = isInputVirtualizationEnabled();
  if ( result )
  {
    if ( gpkeIVThreadShutdown )
      return KeSetEvent(gpkeIVThreadShutdown, 1, 0);
  }
  return result;
}
