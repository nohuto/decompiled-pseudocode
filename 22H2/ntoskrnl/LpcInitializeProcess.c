/*
 * XREFs of LpcInitializeProcess @ 0x140703B30
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LpcInitializeProcess(_QWORD *a1)
{
  _QWORD *result; // rax

  a1[258] = 0LL;
  a1[259] = 0LL;
  a1[256] = 0LL;
  result = a1 + 257;
  a1[258] = a1 + 257;
  a1[257] = a1 + 257;
  return result;
}
