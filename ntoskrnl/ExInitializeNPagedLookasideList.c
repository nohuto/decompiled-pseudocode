/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x1403BD370
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140855610 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x140856E38 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeLargeMcbs @ 0x140B65F50 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140B660E0 (FsRtlInitializeFileLocks.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1403BD3B0 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
