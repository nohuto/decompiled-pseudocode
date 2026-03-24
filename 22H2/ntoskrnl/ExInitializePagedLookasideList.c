/*
 * XREFs of ExInitializePagedLookasideList @ 0x1406FB9F0
 * Callers:
 *     AlpcpInitSystem @ 0x1407CDF6C (AlpcpInitSystem.c)
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A6BE18 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A6BEB4 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6C04C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A73064 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A936EC (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1403522C0 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    Allocate,
    (void (__stdcall *)(PVOID, ULONG))Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
