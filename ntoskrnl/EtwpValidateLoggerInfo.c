/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1407457C8
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FD178 (EtwpTransitionToRealtime.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E5140 (EtwpIncrementTraceFile.c)
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
