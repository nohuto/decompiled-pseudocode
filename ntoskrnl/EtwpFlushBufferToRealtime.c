/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x140692B74
 * Callers:
 *     EtwpFlushBuffer @ 0x140692C18 (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeSaveBuffer @ 0x14069113C (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1406A1F30 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) || (result = EtwpRealtimeDeliverBuffer(a1, a2), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) )
    return 0LL;
  return result;
}
