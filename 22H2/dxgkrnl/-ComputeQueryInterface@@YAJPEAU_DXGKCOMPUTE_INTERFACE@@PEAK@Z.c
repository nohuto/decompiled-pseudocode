/*
 * XREFs of ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C0043EEC
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01627D0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeQueryInterface(struct _DXGKCOMPUTE_INTERFACE *a1, unsigned int *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax

  if ( *(_WORD *)a1 == 592 && *((_WORD *)a1 + 1) == 1 )
  {
    *((_QWORD *)a1 + 1) = DxgkProcessCallout;
    *((_QWORD *)a1 + 2) = DxgkChangeVideoMemoryReservation;
    *((_QWORD *)a1 + 3) = DxgkCloseAdapterImpl;
    *((_QWORD *)a1 + 4) = DxgkCreateAllocation;
    *((_QWORD *)a1 + 5) = DxgkCreateContext;
    *((_QWORD *)a1 + 6) = DxgkCreateContextVirtual;
    *((_QWORD *)a1 + 7) = DxgkCreateDevice;
    *((_QWORD *)a1 + 8) = DxgkDestroyHwContext;
    *((_QWORD *)a1 + 9) = DxgkCreateHwQueue;
    *((_QWORD *)a1 + 10) = DxgkCreatePagingQueue;
    *((_QWORD *)a1 + 11) = DxgkCreateSynchronizationObject;
    *((_QWORD *)a1 + 12) = DxgkDestroyAllocation2;
    *((_QWORD *)a1 + 13) = DxgkDestroyContext;
    *((_QWORD *)a1 + 14) = DxgkDestroyDevice;
    *((_QWORD *)a1 + 15) = DxgkDestroyHwContext;
    *((_QWORD *)a1 + 16) = DxgkDestroyHwQueue;
    *((_QWORD *)a1 + 17) = DxgkDestroyPagingQueue;
    *((_QWORD *)a1 + 18) = DxgkDestroySynchronizationObject;
    *((_QWORD *)a1 + 19) = DxgkEnumAdapters2Impl;
    *((_QWORD *)a1 + 20) = DxgkEscape;
    *((_QWORD *)a1 + 21) = DxgkEvict;
    *((_QWORD *)a1 + 22) = DxgkFlushHeapTransitions;
    *((_QWORD *)a1 + 23) = DxgkFreeGpuVirtualAddress;
    *((_QWORD *)a1 + 24) = DxgkGetContextInProcessSchedulingPriority;
    *((_QWORD *)a1 + 25) = DxgkGetContextSchedulingPriority;
    *((_QWORD *)a1 + 26) = DxgkGetDeviceState;
    *((_QWORD *)a1 + 27) = DxgkGetGpuUsageStatistics;
    *((_QWORD *)a1 + 28) = DxgkGetProcessSchedulingPriorityClass;
    *((_QWORD *)a1 + 29) = DxgkGetSharedResourceAdapterLuid;
    *((_QWORD *)a1 + 30) = DxgkInvalidateCache;
    *((_QWORD *)a1 + 31) = DxgkLock2;
    *((_QWORD *)a1 + 32) = DxgkMakeResident;
    *((_QWORD *)a1 + 33) = DxgkMapGpuVirtualAddress;
    *((_QWORD *)a1 + 34) = DxgkMarkDeviceAsError;
    *((_QWORD *)a1 + 35) = DxgkOfferAllocations;
    *((_QWORD *)a1 + 36) = DxgkOpenAdapter;
    *((_QWORD *)a1 + 37) = DxgkOpenAdapterFromLuid;
    *((_QWORD *)a1 + 38) = DxgkOpenNtHandleFromName;
    *((_QWORD *)a1 + 39) = DxgkOpenResource;
    *((_QWORD *)a1 + 40) = DxgkOpenSyncObjectFromNtHandle2;
    *((_QWORD *)a1 + 41) = DxgkOpenSyncObjectNtHandleFromName;
    *((_QWORD *)a1 + 42) = DxgkOpenSynchronizationObject;
    *((_QWORD *)a1 + 43) = DxgkQueryAdapterInfoInternal;
    *((_QWORD *)a1 + 44) = DxgkQueryAllocationResidency;
    *((_QWORD *)a1 + 45) = DxgkQueryResourceInfo;
    *((_QWORD *)a1 + 46) = DxgkQueryResourceInfoFromNtHandle;
    *((_QWORD *)a1 + 47) = DxgkQueryStatistics;
    *((_QWORD *)a1 + 48) = DxgkQueryVideoMemoryInfo;
    *((_QWORD *)a1 + 49) = DxgkReclaimAllocations2;
    *((_QWORD *)a1 + 50) = DxgkRender;
    *((_QWORD *)a1 + 51) = DxgkReserveGpuVirtualAddress;
    *((_QWORD *)a1 + 52) = DxgkSetAllocationPriority;
    *((_QWORD *)a1 + 53) = DxgkSetContextInProcessSchedulingPriority;
    *((_QWORD *)a1 + 54) = DxgkSetContextSchedulingPriority;
    *((_QWORD *)a1 + 55) = &DxgkSetProcessSchedulingPriorityClass;
    *((_QWORD *)a1 + 56) = DxgkShareObjects;
    *((_QWORD *)a1 + 57) = DxgkSignalSynchronizationObject;
    *((_QWORD *)a1 + 58) = DxgkSignalSynchronizationObjectFromCpu;
    *((_QWORD *)a1 + 59) = DxgkSignalSynchronizationObjectFromGpu;
    *((_QWORD *)a1 + 60) = DxgkSignalSynchronizationObjectFromGpu2;
    *((_QWORD *)a1 + 61) = DxgkSubmitCommand;
    *((_QWORD *)a1 + 62) = DxgkSubmitCommandToHwQueue;
    *((_QWORD *)a1 + 63) = DxgkSubmitSignalSyncObjectsToHwQueue;
    *((_QWORD *)a1 + 64) = DxgkSubmitWaitForSyncObjectsToHwQueue;
    *((_QWORD *)a1 + 65) = DxgkUnlock2;
    *((_QWORD *)a1 + 66) = DxgkUpdateAllocationProperty;
    *((_QWORD *)a1 + 67) = DxgkUpdateGpuVirtualAddress;
    *((_QWORD *)a1 + 68) = DxgkWaitForSynchronizationObject;
    *((_QWORD *)a1 + 69) = DxgkWaitForSynchronizationObjectFromCpu;
    *((_QWORD *)a1 + 70) = DxgkWaitForSynchronizationObjectFromGpu;
    *((_QWORD *)a1 + 71) = DxgkGetAllocationPriority;
    *((_QWORD *)a1 + 72) = DxgkQueryClockCalibration;
    *((_QWORD *)a1 + 73) = DxgkEnumAdapters3Impl;
    result = 0LL;
    *a2 = 592;
  }
  else
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v4[3] = *((unsigned __int16 *)a1 + 1);
    v4[4] = *(unsigned __int16 *)a1;
    v4[5] = 1LL;
    v4[6] = 592LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  return result;
}
