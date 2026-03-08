/*
 * XREFs of ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C01B0804
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_AddReference(DXGMONITOR *this, void *a2)
{
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)((char *)this + 280), a2, File, 1u, 0x20u) < 0 )
    WdLogSingleEntry0(1LL);
}
