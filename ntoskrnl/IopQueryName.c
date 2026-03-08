/*
 * XREFs of IopQueryName @ 0x14071E9C0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryNameInternal @ 0x140720054 (IopQueryNameInternal.c)
 */

__int64 __fastcall IopQueryName(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  return IopQueryNameInternal(a1, a2, 0LL, a3, a4, a5, a6);
}
