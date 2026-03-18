/*
 * XREFs of ExInitializeLookasideListEx @ 0x140222430
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14080D05C (CmpInitializeRegistryProcess.c)
 *     CcInitializeCacheManager @ 0x140B4D188 (CcInitializeCacheManager.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140222240 (ExInitializeLookasideListExInternal.c)
 */

NTSTATUS __stdcall ExInitializeLookasideListEx(
        PLOOKASIDE_LIST_EX Lookaside,
        PALLOCATE_FUNCTION_EX Allocate,
        PFREE_FUNCTION_EX Free,
        POOL_TYPE PoolType,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  return ExInitializeLookasideListExInternal(
           &Lookaside->L.ListHead,
           (__int64 (__fastcall *)())Allocate,
           (void (__stdcall *)(PPRIVILEGE_SET))Free,
           PoolType,
           Flags,
           Size,
           Tag,
           Depth,
           0);
}
