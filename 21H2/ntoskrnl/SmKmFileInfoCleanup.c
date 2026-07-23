/*
 * XREFs of SmKmFileInfoCleanup @ 0x14092B3D8
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029F7FC (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x14092B47C (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x14092D548 (SmcCacheCleanup.c)
 * Callees:
 *     IoReuseIrp @ 0x14020D600 (IoReuseIrp.c)
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x14092C078 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  struct _DMA_ADAPTER *v5; // rcx
  IRP *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
  v4 = v2;
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 0);
  v5 = *(struct _DMA_ADAPTER **)(a1 + 16);
  if ( v5 )
    HalPutDmaAdapter(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v7 )
    HalPutDmaAdapter(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    CmSiFreeMemory(v8);
  return IoSetThreadHardErrorMode(v4);
}
