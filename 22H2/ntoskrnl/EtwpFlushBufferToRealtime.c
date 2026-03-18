/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x1406BD8AC
 * Callers:
 *     EtwpFlushBuffer @ 0x1406BD950 (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x140708E10 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F61BC (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) || (result = EtwpRealtimeDeliverBuffer(), (int)result < 0) )
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
