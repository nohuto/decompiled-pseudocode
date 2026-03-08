/*
 * XREFs of EtwpResetBufferHeader @ 0x14020657C
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140790EB0 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1407933A8 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1408815D8 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
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
