/*
 * XREFs of CmpTransUowIsEqual @ 0x140872DFC
 * Callers:
 *     CmEqualTrans @ 0x14071CD40 (CmEqualTrans.c)
 *     CmpSearchForTrans @ 0x14076666C (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
