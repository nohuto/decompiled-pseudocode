/*
 * XREFs of ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C
 * Callers:
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18000714C (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800075E0 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x1800351FC (-RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x180036BE0 (-RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z.c)
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180068F14 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180069134 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x1800692A8 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x1800694E0 (-RmSrvCpuSetManagerReleaseAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180069668 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180069824 (-RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180069978 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180069B60 (-RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x180069CB4 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180069F8C (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x18006A238 (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x18006A574 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x18000B6B0 (CempLockTrackerIsSetForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 */

void __fastcall RmpUtilCheckStartLockTracking(unsigned int *a1, struct _CEM_LOCK_TRACKER *a2)
{
  int IsSetForThread; // eax
  unsigned int v5; // r8d

  IsSetForThread = CempLockTrackerIsSetForThread();
  v5 = 0;
  if ( !IsSetForThread )
  {
    HampUtilStartLockTracking(a2);
    v5 = 1;
  }
  *a1 = v5;
}
