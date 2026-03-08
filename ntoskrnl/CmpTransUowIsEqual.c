/*
 * XREFs of CmpTransUowIsEqual @ 0x140A19630
 * Callers:
 *     CmpSearchForTrans @ 0x1406B5904 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
