/*
 * XREFs of ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0371750
 * Callers:
 *     <none>
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C005E3A0 (DxgkInvalidateDeviceState.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::InvalidateAdapterWorkItem(
        PDEVICE_OBJECT DeviceObject,
        struct _IO_WORKITEM *Context)
{
  if ( bTracingEnabled )
    VgpuTrace(1, 0, DeviceObject, L"DxgkInvalidateDeviceState", 0LL);
  DxgkInvalidateDeviceState((__int64)DeviceObject);
  IoFreeWorkItem(Context);
}
