/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C005B920
 * Callers:
 *     WinSqmStartSession @ 0x1C005B74C (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C005B9B8 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RegisterWinSqmProvider(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rax
  unsigned int v4; // edi
  int v6; // ebx
  __int64 v7; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v3 = _InterlockedCompareExchange64(&qword_1C029A530, 255LL, 0LL);
  if ( v3 )
  {
    switch ( v3 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        v6 = 0;
        while ( 1 )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v7 = _InterlockedExchange64(&qword_1C029A530, qword_1C029A530);
          if ( v7 != 255 )
            break;
          if ( ++v6 >= 10 )
          {
            if ( v6 == 10 )
              v7 = _InterlockedCompareExchange64(&qword_1C029A530, 204LL, 255LL);
            return v7 != 221 ? 0x5B4 : 0;
          }
        }
        return v7 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( RegHandle )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v4 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &RegHandle);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C029663C |= 1u;
    _InterlockedExchange64(&qword_1C029A530, v4 != 0 ? 238LL : 221LL);
  }
  return v4;
}
