/*
 * XREFs of EtwpValidateLoggerInfo @ 0x1407128B4
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F8718 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x140710F3C (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407126B8 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x140712880 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140934C34 (EtwpIncrementTraceFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateLoggerInfo(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 < 0xB0u )
      return 3221225990LL;
    if ( (a1[11] & 0x20000) != 0 )
      return 0LL;
  }
  return 3221225485LL;
}
