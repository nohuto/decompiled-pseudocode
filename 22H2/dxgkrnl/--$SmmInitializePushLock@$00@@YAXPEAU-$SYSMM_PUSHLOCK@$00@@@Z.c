/*
 * XREFs of ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x1C00172D8
 * Callers:
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C0219390 (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x1C03D72DC (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializePushLock<1>(_QWORD *a1)
{
  *a1 = 0LL;
}
