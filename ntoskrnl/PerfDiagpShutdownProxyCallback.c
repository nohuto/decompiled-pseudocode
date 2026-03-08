/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1409DAD70
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x14085B4AC (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( Level == 85 )
      PerfDiagpRequestState(7);
  }
}
