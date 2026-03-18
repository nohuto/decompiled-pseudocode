/*
 * XREFs of ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02C1640
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB910 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C7EF8 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

void __fastcall ADAPTER_RENDER::IommuEndExclusiveAccess(struct SYSMM_ADAPTER *a1, PERESOURCE **a2)
{
  ADAPTER_RENDER::DdiEndExclusiveAccess((ADAPTER_RENDER *)a2);
  DXGADAPTER::ReleaseCoreResource(a2[2], 0LL);
}
