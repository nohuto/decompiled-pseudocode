/*
 * XREFs of NtRIMReadInput @ 0x1C00D1660
 * Callers:
 *     <none>
 * Callees:
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 */

__int64 __fastcall NtRIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RIMReadInput(a1, a2, a3, a4, 1, a5, a6, a7);
}
