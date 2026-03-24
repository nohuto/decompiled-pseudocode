/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x140714534
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1406BC9F0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14032F37C (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14035FEAC (EtwpInitializeBufferHeader.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpRealtimeSaveBuffer @ 0x1406A1ABC (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1406BEAC8 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpRealtimeSendEmptyMarker(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax
  _DWORD v4[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(v4, 0, 0x48uLL);
  EtwpInitializeBufferHeader((__int16 *)a1, v4);
  LOWORD(v4[13]) &= ~0x100u;
  EtwpResetBufferHeader((__int64)v4, 6);
  v2 = *(_DWORD *)(a1 + 360) == 0;
  LOWORD(v4[13]) = 1;
  v4[11] = 3;
  v4[12] = 72;
  if ( v2 )
    result = 3221225473LL;
  else
    result = EtwpRealtimeDeliverBuffer(a1, (__int64)v4);
  if ( (int)result < 0 && (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
  {
    result = *(unsigned int *)(a1 + 832);
    if ( (result & 0x10000000) == 0 )
      return EtwpRealtimeSaveBuffer(a1, (__int64)v4);
  }
  return result;
}
