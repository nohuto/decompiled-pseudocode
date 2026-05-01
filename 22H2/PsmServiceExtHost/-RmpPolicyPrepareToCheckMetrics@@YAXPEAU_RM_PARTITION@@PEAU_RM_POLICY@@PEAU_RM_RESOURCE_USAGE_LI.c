/*
 * XREFs of ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034D1C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015D90 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180021B94 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003DFB0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180075580 (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180076C10 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     ?RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034D88 (-RmpPolicyGetCurrentUsageLimits@@YAXPEAU_RM_PARTITION@@PEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REM.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall RmpPolicyPrepareToCheckMetrics(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY *a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4)
{
  memset_0(a3, 0, 0x80uLL);
  RmpPolicyGetCurrentUsageLimits(a1, a2, (struct _RM_POLICY *)((char *)a2 + 56), a3, a4);
  *((_WORD *)a1 + 94) = 0;
}
