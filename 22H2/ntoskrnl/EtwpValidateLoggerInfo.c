/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1407F90BC
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FF618 (EtwpTransitionToRealtime.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpFlushTrace @ 0x1407F6068 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8FD4 (EtwpQueryTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E7FE0 (EtwpIncrementTraceFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *a1 < 0xB0u )
    return 3221225990LL;
  return (a1[11] & 0x20000) == 0 ? 0xC000000D : 0;
}
