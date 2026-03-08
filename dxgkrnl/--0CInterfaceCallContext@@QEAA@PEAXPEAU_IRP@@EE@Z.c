/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778
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
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02BD71C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02BE3A8 (DxgkReleaseAdapterStopResetSync.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4,
        char a5)
{
  char v5; // di
  struct _IO_REMOVE_LOCK *v6; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax

  *(_QWORD *)this = a2;
  v5 = 0;
  v6 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v6;
  *((_DWORD *)this + 5) = 0;
  v10 = IoAcquireRemoveLockEx(v6 + 2, v6, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    return this;
  }
  *((_BYTE *)this + 20) = 1;
  if ( !a5 )
  {
    KeEnterCriticalRegion();
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 484) )
      DpiCheckForOutstandingD3Requests(v11);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 1) + 168LL), 1u);
    *((_BYTE *)this + 23) = 1;
  }
  if ( a4 )
  {
    v12 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v12;
    if ( v12 < 0 )
      return this;
    v13 = *((_QWORD *)this + 1) + 5424LL;
    *((_BYTE *)this + 21) = 1;
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  else
  {
    if ( !a5 )
      return this;
    v14 = DxgkAcquireAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL), 0LL);
    *((_DWORD *)this + 4) = v14;
    if ( v14 < 0 )
      return this;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL) + 200LL) != 1 )
    {
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3912LL), 0LL);
      *((_DWORD *)this + 4) = -1073741130;
      return this;
    }
    *((_BYTE *)this + 22) = 1;
  }
  if ( !a3 || !a3->RequestorMode )
    v5 = 1;
  *(_BYTE *)(*((_QWORD *)this + 1) + 5468LL) = v5;
  return this;
}
