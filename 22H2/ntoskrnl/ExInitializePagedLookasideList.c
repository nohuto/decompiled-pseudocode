/*
 * XREFs of ExInitializePagedLookasideList @ 0x1407D71C0
 * Callers:
 *     WmipInitializeAllocs @ 0x140B3C184 (WmipInitializeAllocs.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140B693F0 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B6982C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140B698CC (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140B699BC (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140361260 (ExInitializePagedLookasideListInternal.c)
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
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))Allocate,
    Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
