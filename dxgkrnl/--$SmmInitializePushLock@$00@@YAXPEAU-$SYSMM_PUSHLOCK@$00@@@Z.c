/*
 * XREFs of ??$SmmInitializePushLock@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x1C0016F68
 * Callers:
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C020A7B0 (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x1C03D2A9C (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializePushLock<1>(_QWORD *a1)
{
  *a1 = 0LL;
}
