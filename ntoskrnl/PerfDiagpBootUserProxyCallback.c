/*
 * XREFs of PerfDiagpBootUserProxyCallback @ 0x14085B480
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14085B4AC (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpBootUserProxyCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  if ( (_DWORD)ControlCode )
  {
    if ( (_BYTE)Level != 85 )
      return;
    v4 = 3LL;
  }
  else
  {
    v4 = 4LL;
  }
  PerfDiagpRequestState(v4, ControlCode, Level, MatchAnyKeyword);
}
