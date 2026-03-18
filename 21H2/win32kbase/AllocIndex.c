/*
 * XREFs of AllocIndex @ 0x1C00D5968
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall AllocIndex(__int64 a1, __int64 a2, __int64 a3)
{
  if ( gSessionId != gServiceSessionId || gServiceSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *((_DWORD *)gpxsGlobals + 12) )
    return 3221226768LL;
  else
    return PsTlsAlloc(lambda_b5ab72610ca6305d588698d100652821_::_lambda_invoker_cdecl__void___, 0x40000000LL);
}
