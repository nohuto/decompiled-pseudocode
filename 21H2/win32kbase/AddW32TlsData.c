/*
 * XREFs of AddW32TlsData @ 0x1C009DFD0
 * Callers:
 *     <none>
 * Callees:
 *     GetData @ 0x1C0029E80 (GetData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 AddW32TlsData()
{
  int v0; // ebx
  void *Pool2; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = -1073741801;
  Pool2 = (void *)ExAllocatePool2(64LL, 4LL);
  if ( Pool2 )
  {
    if ( GetData() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v0 = PsTlsSetValue(*((unsigned int *)gpxsGlobals + 12), Pool2);
    if ( v0 < 0 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v0;
}
