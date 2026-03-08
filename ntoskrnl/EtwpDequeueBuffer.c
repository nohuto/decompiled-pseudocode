/*
 * XREFs of EtwpDequeueBuffer @ 0x140206388
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x14020620C (EtwpDequeueFreeBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x1402067AC (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x1406F2CFC (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v3 = *v2;
    result = 0LL;
    if ( !*v2 )
      break;
    *v2 = (_QWORD *)*v3;
    if ( *v3 )
      *v3 = 0LL;
    else
      *a2 = v2;
    result = v3 - 4;
    if ( *((_DWORD *)v3 + 3) != 6 )
      break;
    *v3 = *(_QWORD *)(a1 + 1184);
    *(_QWORD *)(a1 + 1184) = v3;
  }
  return result;
}
