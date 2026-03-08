/*
 * XREFs of FsRtlInitializeEofLock @ 0x1402DA2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlInitializeEofLock(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  result = a1 + 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  a1[3] = a2;
  return result;
}
