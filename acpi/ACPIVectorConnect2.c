/*
 * XREFs of ACPIVectorConnect2 @ 0x1C0043FE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorConnect @ 0x1C0043E40 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIVectorConnect2(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, char **a7)
{
  return ACPIVectorConnect(*(_QWORD *)(a1 + 768), a2, a3, a4, a5, a6, a7);
}
