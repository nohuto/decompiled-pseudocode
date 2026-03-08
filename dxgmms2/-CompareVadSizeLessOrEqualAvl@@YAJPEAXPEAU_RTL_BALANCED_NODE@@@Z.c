/*
 * XREFs of ?CompareVadSizeLessOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B22C0
 * Callers:
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C009C0A0 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadSizeLessOrEqualAvl(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  return (unsigned int)-(*a1 < (char *)a2[1].Children[1] - (char *)a2[1].Children[0]);
}
