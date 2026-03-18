/*
 * XREFs of NtRIMReadInput @ 0x1C00770E0
 * Callers:
 *     <none>
 * Callees:
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 */

__int64 __fastcall NtRIMReadInput(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RIMReadInput(a1, a2, a3, a4, 1, a5, a6, a7);
}
