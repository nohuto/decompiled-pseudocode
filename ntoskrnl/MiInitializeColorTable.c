/*
 * XREFs of MiInitializeColorTable @ 0x140393FAC
 * Callers:
 *     MiInitializeLargePageNodeLists @ 0x1408383C8 (MiInitializeLargePageNodeLists.c)
 *     MiCreateZeroThreadContext @ 0x1408384D8 (MiCreateZeroThreadContext.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C65778 & ExGenRandom(1) | (a2 << byte_140C6570D);
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
