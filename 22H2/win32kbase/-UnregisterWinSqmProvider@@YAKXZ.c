/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0079E30
 * Callers:
 *     WinSqmEndSession @ 0x1C0079D8C (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UnregisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  REGHANDLE v1; // rcx
  unsigned int v2; // edx
  int i; // ebx
  __int64 v5; // rax
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v0 = _InterlockedCompareExchange64(&qword_1C02548A0, 170LL, 221LL);
  switch ( v0 )
  {
    case 221LL:
      v1 = RegHandle;
      if ( !RegHandle )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 677LL);
        v1 = RegHandle;
      }
      v2 = EtwUnregister(v1);
      dword_1C0250868 = 0;
      RegHandle = 0LL;
      _InterlockedExchange64(&qword_1C02548A0, v2 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      for ( i = 0; i < 10; ++i )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v5 = _InterlockedExchange64(&qword_1C02548A0, qword_1C02548A0);
        if ( v5 != 170 )
          break;
      }
      if ( i == 10 )
        v5 = _InterlockedCompareExchange64(&qword_1C02548A0, 136LL, 170LL);
      return v5 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
