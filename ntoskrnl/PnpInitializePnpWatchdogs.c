/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x140B6180C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x14039BC5C (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140B61878 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B618DC (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  int v1; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  result = PnpOpenCCSPnpRegKey(&Handle);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogBugcheckEnabled", &v2) >= 0 )
      v1 = v2 != 0;
    else
      v1 = 2;
    PnpWatchdogBugcheckConfig = v1;
    PnpQueryWatchdogTimeoutConfiguration(Handle);
    return ZwClose(Handle);
  }
  return result;
}
