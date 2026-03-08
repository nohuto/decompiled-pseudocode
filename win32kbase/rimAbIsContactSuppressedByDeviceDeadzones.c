/*
 * XREFs of rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C01A8668
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C01C96E4 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 */

__int64 __fastcall rimAbIsContactSuppressedByDeviceDeadzones(
        __int64 a1,
        struct tagHPD_CONTACT *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v8; // edi
  RIMDeadzone **i; // rsi

  v6 = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 456);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v7 + 448) )
  {
    v8 = 0;
    for ( i = (RIMDeadzone **)(v7 + 408); !*i || !(unsigned int)RIMDeadzone::IsInDeadzone(*i, a2); ++i )
    {
      if ( (unsigned int)++v8 >= 5 )
        return v6;
    }
    return 1;
  }
  return v6;
}
