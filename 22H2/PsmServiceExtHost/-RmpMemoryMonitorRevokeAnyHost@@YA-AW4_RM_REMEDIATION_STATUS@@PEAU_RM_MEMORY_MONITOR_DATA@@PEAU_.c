/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180076A78
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@2@Z @ 0x180016A00 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006B670 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x1800723F8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007661C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180076770 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180076DC0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v14[3]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v14[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v13 = a3;
  v14[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14;
  v14[2] = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(a1 + 32);
  RmpAcquireGlobalLock();
  v8 = 0;
  *(_WORD *)(v4 + 188) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v4,
    0,
    v4 + 144,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  v10 = 0;
  if ( *(_DWORD *)(v4 + 180) )
  {
    RmpMemoryMonitorGenerateHostListAndRevoke(
      v4,
      v9,
      *(_QWORD *)(v13 + 24) - *(_QWORD *)(a2 + 24),
      3u,
      7u,
      (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v14);
    if ( *(_DWORD *)(v4 + 184) )
    {
      if ( (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)v14[0] == v14 )
        goto LABEL_14;
      v10 = 1;
    }
  }
  RmpReleaseGlobalLock();
  if ( !v10 )
  {
    RmpMemoryMonitorRebootIfAble((struct _RM_MEMORY_MONITOR_DATA *)a1, a4);
    return 2;
  }
  if ( RmpMemoryMonitorWaitForEvents(
         (struct _RM_MEMORY_MONITOR_DATA *)a1,
         0x1Cu,
         *(_DWORD *)(a1 + 72),
         (enum _RM_MEMORY_MONITOR_EVENT *)&v13) )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_18009E490, 0LL, 0LL, 2u, &v15);
    v8 = 1;
  }
  else if ( (_DWORD)v13 == 2 )
  {
    v8 = 4;
  }
  RmpAcquireGlobalLock();
  RmpActivityHostCleanupRemediationGroup(v14);
LABEL_14:
  RmpReleaseGlobalLock();
  return v8;
}
