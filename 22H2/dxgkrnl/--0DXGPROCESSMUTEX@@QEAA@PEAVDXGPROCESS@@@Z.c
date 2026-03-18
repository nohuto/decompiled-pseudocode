/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025738
 * Callers:
 *     DxgkGetCachedHybridQueryValue @ 0x1C01DC430 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01E0BC0 (DxgkCacheHybridQueryValue.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 *     NtDxgkRegisterVailProcess @ 0x1C03645B0 (NtDxgkRegisterVailProcess.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0373C78 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGPROCESS *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGPROCESS *)((char *)a2 + 104), 0);
  return this;
}
