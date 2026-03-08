/*
 * XREFs of EtwpDequeueBufferPendingCompressionFromQueue @ 0x140600428
 * Callers:
 *     EtwpDequeueBufferPendingCompression @ 0x140600328 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     <none>
 */

char *__fastcall EtwpDequeueBufferPendingCompressionFromQueue(_QWORD *a1, volatile signed __int32 *a2, __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD *v5; // rcx
  char *v6; // r11
  _QWORD *v8; // rcx

  v3 = (_QWORD **)(a1 + 1);
  v5 = (_QWORD *)a1[1];
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v6 = (char *)(v5 - 4);
    if ( *((_DWORD *)v5 + 3) == 4 && v6[52] >= 0 )
      break;
    v3 = (_QWORD **)v5;
    v5 = (_QWORD *)*v5;
    if ( !v5 )
      return 0LL;
  }
  _InterlockedDecrement(a2);
  v8 = *v3;
  *v3 = (_QWORD *)**v3;
  if ( *v8 )
    *v8 = 0LL;
  else
    *a1 = v3;
  *(_QWORD *)(a3 + 32) = *v3;
  *v3 = (_QWORD *)(a3 + 32);
  if ( v3 == (_QWORD **)*a1 )
    *a1 = a3 + 32;
  return v6;
}
