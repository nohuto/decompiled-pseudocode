/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1407FCBFC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14069152C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406917BC (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x1408815D8 (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 344) )
    return EtwpRealtimeUpdateReferenceTime(a1, a1 + 432);
  return result;
}
