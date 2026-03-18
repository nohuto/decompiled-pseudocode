/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C00619C4
 * Callers:
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1C005C6F0 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x1C005CB30 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C005CF60 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0061690 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0061994 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C00618E4 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FX_POOL_TRACKER *Entry)
{
  ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))Entry->Link.Flink->Flink[1].Flink)(
    Entry->Link.Flink,
    this,
    127LL,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
