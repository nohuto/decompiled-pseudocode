/*
 * XREFs of ExInitializePagedLookasideList @ 0x140787D60
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     WmipInitializeAllocs @ 0x140B53B40 (WmipInitializeAllocs.c)
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B65F50 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140B65FF0 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140B660E0 (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1402F6750 (ExInitializePagedLookasideListInternal.c)
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
