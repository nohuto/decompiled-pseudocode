/*
 * XREFs of AllocIndex @ 0x1C00C50E8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall AllocIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) != gServiceSessionId || gServiceSessionId )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2119LL);
  if ( *((_DWORD *)gpxsGlobals + 8) )
    return 3221226768LL;
  else
    return PsTlsAlloc(lambda_b5ab72610ca6305d588698d100652821_::_lambda_invoker_cdecl__void___, 0x40000000LL);
}
