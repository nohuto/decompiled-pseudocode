/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E12CC
 * Callers:
 *     DriverUnload @ 0x1C002CF70 (DriverUnload.c)
 *     DriverEntry @ 0x1C010D1E8 (DriverEntry.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C002E4C8 (McGenEventUnregister_EtwUnregister.c)
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C002F878 (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00E13F4 (-DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C010A918 (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitPhysicalHeap();
  if ( VIDMM_GLOBAL::PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
  if ( VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetNonLocalAdapterMemory);
  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'((VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock )
  {
    ExDeleteResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    *(_OWORD *)&VIDMM_GLOBAL::_RotationHistory = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
}
