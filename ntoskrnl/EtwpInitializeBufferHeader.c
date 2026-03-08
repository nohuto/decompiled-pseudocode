/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140204FD4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140205030 (EtwpAllocateFreeBuffers.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140790EB0 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1407933A8 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1408815D8 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
