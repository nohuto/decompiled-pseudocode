/*
 * XREFs of rimFindLastDeviceFrame @ 0x1C01A921C
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 *     RIMCmDeactivateContact @ 0x1C01B6684 (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindLastDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 192) )
    return *(_QWORD *)(*(_QWORD *)(a2 + 472) + 1064LL);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 16);
  v4 = a1 + 776;
  v5 = *(_QWORD *)(v4 + 8);
  do
  {
    if ( v5 == v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v3);
      return v2;
    }
    a2 = v5 - 8;
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( *(_QWORD *)(a2 + 32) != v3 );
  return a2;
}
