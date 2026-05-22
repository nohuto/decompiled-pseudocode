/*
 * XREFs of ?KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ @ 0x1800D05D4
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1970 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18016F680 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadpoolTimerHelpers::KeepAliveTimer::KeepAlive(ThreadpoolTimerHelpers::KeepAliveTimer *this)
{
  _InterlockedExchange64((volatile __int64 *)this + 12, GetTickCount64());
  ThreadpoolTimerHelpers::KeepAliveTimer::EnsureWorkerTimer((RTL_SRWLOCK *)this, *((_QWORD *)this + 13));
}
