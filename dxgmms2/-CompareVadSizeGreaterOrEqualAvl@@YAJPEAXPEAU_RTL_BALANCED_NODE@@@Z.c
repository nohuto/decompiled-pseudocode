/*
 * XREFs of ?CompareVadSizeGreaterOrEqualAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B4808
 * Callers:
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1C009C0A0 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CompareVadSizeGreaterOrEqualAvl(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  return *a1 > (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
}
