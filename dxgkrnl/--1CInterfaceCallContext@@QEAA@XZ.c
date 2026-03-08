/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C005E698 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0064A10 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0064AB0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0064B60 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0064C00 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0064C90 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0064D30 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0064DF0 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0064EF0 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0064FA0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0065060 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0065140 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00651D0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 *     DpiMitigatedRangeUpdate @ 0x1C0394B74 (DpiMitigatedRangeUpdate.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C039951C (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C0399958 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C0399AF0 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C0399DB8 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C039EC00 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C039ED70 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C039EE90 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C039EF90 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02BE3A8 (DxgkReleaseAdapterStopResetSync.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  PVOID *v2; // rbx

  if ( *((_BYTE *)this + 20) )
  {
    v2 = (PVOID *)((char *)this + 8);
    if ( *((_BYTE *)this + 21) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      ExReleasePushLockExclusiveEx((char *)*v2 + 5424, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    if ( *((_BYTE *)this + 22) )
    {
      *((_BYTE *)*v2 + 5468) = 0;
      DxgkReleaseAdapterStopResetSync(*((_QWORD *)*v2 + 489), 0LL);
    }
    if ( *((_BYTE *)this + 23) )
    {
      if ( *((_BYTE *)*v2 + 484) )
        DpiEnableD3Requests(*((_QWORD *)*v2 + 3));
      ExReleaseResourceLite(*((PERESOURCE *)*v2 + 21));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*v2 + 2, *v2, 0x20u);
  }
}
