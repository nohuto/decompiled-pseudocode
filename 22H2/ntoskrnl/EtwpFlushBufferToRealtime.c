/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x1406BE9F4
 * Callers:
 *     EtwpFlushBuffer @ 0x1406BD8DC (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeSaveBuffer @ 0x1406A1ABC (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1406BEAC8 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) || (result = EtwpRealtimeDeliverBuffer(a1, a2), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 360) || *(_DWORD *)(a1 + 440) )
    return 0LL;
  return result;
}
