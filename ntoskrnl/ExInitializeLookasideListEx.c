/*
 * XREFs of ExInitializeLookasideListEx @ 0x1402A7FB0
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1402A8000 (ExInitializeLookasideListExInternal.c)
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
  return ExInitializeLookasideListExInternal(&Lookaside->L.ListHead, Flags, Size, Tag, Depth, 0);
}
