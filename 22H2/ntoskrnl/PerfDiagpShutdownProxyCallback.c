/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x14092FDD0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1407CF46C (PerfDiagpRequestState.c)
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
