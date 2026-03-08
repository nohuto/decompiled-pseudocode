/*
 * XREFs of ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00E144C
 * Callers:
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0030FB0 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 * Callees:
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0002388 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00310FC (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DeInitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  PVOID *i; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax

  ExAcquirePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
  for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
  {
    AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, (struct VIDMM_GLOBAL *)(i - 5596));
    VidMmiClosePerfCounters(AdapterInfo);
  }
  ExReleasePushLockSharedEx(&VIDMM_GLOBAL::_AdapterListLock, 0LL);
}
