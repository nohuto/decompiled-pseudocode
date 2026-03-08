/*
 * XREFs of HalGetCommonBufferFromVectorByIndex @ 0x140453400
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

_QWORD *__fastcall HalGetCommonBufferFromVectorByIndex(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v7; // r9
  _QWORD *result; // rax

  v5 = *(_DWORD *)(a2 + 24);
  if ( a3 >= v5 )
    KeBugCheckEx(0x1DCu, 3uLL, v5, a3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 16LL * a3);
  if ( !v7 )
    KeBugCheckEx(0x1DCu, 4uLL, a3, 0LL, 0LL);
  *a4 = v7;
  result = a5;
  *a5 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 16LL * a3 + 8);
  return result;
}
