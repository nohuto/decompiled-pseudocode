/*
 * XREFs of ObpUnlockDirectory @ 0x140347B1C
 * Callers:
 *     ObpReleaseLookupContext @ 0x140347AE0 (ObpReleaseLookupContext.c)
 *     ObpLookupDirectoryEntryEx @ 0x140601DF4 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x140601F48 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     NtQueryDirectoryObject @ 0x1406DA180 (NtQueryDirectoryObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406F83A8 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtSetInformationObject @ 0x1406F91D0 (NtSetInformationObject.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v3; // rcx

  ExReleasePushLockEx(a1 + 296, 0LL);
  v3 = *(struct _DMA_ADAPTER **)a2;
  *(_DWORD *)(a2 + 32) = -286387660;
  HalPutDmaAdapter(v3);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
