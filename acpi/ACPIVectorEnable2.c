/*
 * XREFs of ACPIVectorEnable2 @ 0x1C0044180
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorEnable @ 0x1C00050C0 (ACPIVectorEnable.c)
 */

__int64 __fastcall ACPIVectorEnable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorEnable(*(_QWORD *)(a1 + 768), a2);
}
