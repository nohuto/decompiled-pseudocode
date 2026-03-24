/*
 * XREFs of MiInitializeColorTable @ 0x1403ABB3C
 * Callers:
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403ABAA8 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x1403CA4D0 (MiZeroPageThread.c)
 *     MiInitializeLargePageNodeLists @ 0x140797BAC (MiInitializeLargePageNodeLists.c)
 * Callees:
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C4DEF8 & ExGenRandom(1) | (a2 << byte_140C4DE8C);
  v3 = 3LL;
  do
  {
    result = ExGenRandom(1);
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}
