/*
 * XREFs of ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0E2C
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C009BC60 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00A80CC (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadSizeAvl(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *a1;
  v3 = (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
  if ( v2 == v3 )
    return 0LL;
  else
    return v2 < v3 ? -1 : 1;
}
