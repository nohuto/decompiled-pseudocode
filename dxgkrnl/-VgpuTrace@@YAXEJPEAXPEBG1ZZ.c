/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C0365238 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0365474 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetBackingResource @ 0x1C03655C4 (DxgkDdiGetBackingResource.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C036563C (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0365704 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C03657D4 (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiGetMmioRanges @ 0x1C03658A0 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiGetResourceForBar @ 0x1C03659D8 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C0365A70 (DxgkDdiGetVendorAndDevice.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0365B08 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0365BEC (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0365CF0 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0365DB0 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0365ED0 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1C0365F4C (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0366054 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0366104 (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C03662E8 (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C03663B8 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C0366460 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C0366540 (DxgkDdiSetVirtualGpuVmBus.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C036B3C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0371750 (-InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374AB0 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374B30 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374CA0 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374CE0 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0374D20 (-VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0374D60 (-VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0374DA0 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0374DE0 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374E20 (-VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374E90 (-VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374F00 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374F40 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374F80 (-VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0374FC0 (-VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0375000 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03750A0 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0375130 (-VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0375190 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03751E0 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0375280 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C039951C (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C03996E8 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C0399958 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C0399AF0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C0399CE8 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C0399DB8 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C039DF00 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C039E2B0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C039E440 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x1C005A830 (McTemplateK0pzzq_EtwWriteTransfer.c)
 */

void VgpuTrace(char a1, char a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  int v5; // ebx
  int v9; // ecx
  int v10; // r8d
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v5 = (int)a3;
  memset(Dst, 0, sizeof(Dst));
  v10 = (int)Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0pzzq_EtwWriteTransfer(
        v9,
        (unsigned int)&EventGpuPartitioningStart,
        v10,
        v5,
        (__int64)a4,
        (__int64)Dst,
        0);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    McTemplateK0pzzq_EtwWriteTransfer(
      v9,
      (unsigned int)&EventGpuPartitioningEnd,
      v10,
      v5,
      (__int64)a4,
      (__int64)Dst,
      a2);
  }
}
