/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C00B7458
 * Callers:
 *     WinSqmEndSession @ 0x1C00B73BC (WinSqmEndSession.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnregisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rax
  REGHANDLE v4; // rcx
  unsigned int v5; // edx
  int v7; // ebx
  __int64 v8; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v3 = _InterlockedCompareExchange64(&qword_1C029A530, 170LL, 221LL);
  switch ( v3 )
  {
    case 221LL:
      v4 = RegHandle;
      if ( !RegHandle )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
        v4 = RegHandle;
      }
      v5 = EtwUnregister(v4);
      dword_1C029663C = 0;
      RegHandle = 0LL;
      _InterlockedExchange64(&qword_1C029A530, v5 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      v7 = 0;
      while ( 1 )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v8 = _InterlockedExchange64(&qword_1C029A530, qword_1C029A530);
        if ( v8 != 170 )
          break;
        if ( ++v7 >= 10 )
        {
          if ( v7 == 10 )
            v8 = _InterlockedCompareExchange64(&qword_1C029A530, 136LL, 170LL);
          return v8 != 153 ? 0x5B4 : 0;
        }
      }
      return v8 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v5;
}
