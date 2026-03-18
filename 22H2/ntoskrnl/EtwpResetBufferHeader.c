/*
 * XREFs of EtwpResetBufferHeader @ 0x140228180
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140227E10 (EtwpDequeueFreeBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1407F6C9C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1407F7B40 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1408863B8 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409ED6CC (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall EtwpResetBufferHeader(__int64 a1, __int16 a2)
{
  unsigned __int8 v3; // cf
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = _bittest16((const signed __int16 *)(a1 + 52), 8u);
  *(_DWORD *)(a1 + 8) = 72;
  *(_WORD *)(a1 + 54) = a2;
  if ( v3 )
  {
    memset((void *)(a1 + *(unsigned int *)(a1 + 8)), 0, (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 8)));
    result = 65279LL;
    *(_WORD *)(a1 + 52) &= ~0x100u;
  }
  return result;
}
