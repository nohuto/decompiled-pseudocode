/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00B146C
 * Callers:
 *     WinSqmStartSession @ 0x1C00B12C0 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00B1500 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 RegisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  unsigned int v1; // edi
  int i; // ebx
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v0 = _InterlockedCompareExchange64(&qword_1C0255870, 255LL, 0LL);
  if ( v0 )
  {
    switch ( v0 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        for ( i = 0; i < 10; ++i )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v4 = _InterlockedExchange64(&qword_1C0255870, qword_1C0255870);
          if ( v4 != 255 )
            break;
        }
        if ( i == 10 )
          v4 = _InterlockedCompareExchange64(&qword_1C0255870, 204LL, 255LL);
        return v4 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    if ( RegHandle )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 562LL);
    v1 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, &RegHandle);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      dword_1C0251848 |= 1u;
    _InterlockedExchange64(&qword_1C0255870, v1 != 0 ? 238LL : 221LL);
  }
  return v1;
}
