/*
 * XREFs of ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B11D0
 * Callers:
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00884A0 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C00A7740 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadRangeAvl(char *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( *(_OWORD *)&a2[1].0 != *(_OWORD *)(a1 + 24) )
  {
    if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 4) <= a2[1].Children[0] )
      return 0xFFFFFFFFLL;
    if ( (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 3) >= a2[1].Children[1] )
      return 1LL;
    WdLogSingleEntry5(0LL, 275LL, 23LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
