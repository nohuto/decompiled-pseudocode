/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180076C10
 * Callers:
 *     ?RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800759C4 (-RmpMemoryMonitorCommitSaveAndRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034D1C (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006B670 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x1800723F8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180072470 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007661C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180076DC0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int HostListAndRevoke; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF

  v2 = (__int64)*a1;
  v11[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11;
  v11[2] = a1[4];
  RmpAcquireGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    (struct _RM_PARTITION *)v2,
    (struct _RM_POLICY *)(*((_QWORD *)*a1 + 3) + 400LL),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v15,
    (struct _RM_SYSTEM_MEMORY_METRICS *)v12);
  v5 = 2;
  RmpPolicyPopulateActivityHostMetrics(
    (struct _RM_PARTITION *)v2,
    0,
    v2 + 144,
    67,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  RmpPolicyPopulateFastCommitUse((struct _RM_SYSTEM_MEMORY_METRICS *)v12, (struct _RM_POLICY_WORK_BUFFER *)(v2 + 144));
  if ( v13 - v14 < a2 )
  {
    v5 = 3;
LABEL_14:
    RmpReleaseGlobalLock();
    return v5;
  }
  if ( !*(_DWORD *)(v2 + 180) )
    goto LABEL_14;
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(
                        v2,
                        v6,
                        v13 - v14 - a2,
                        1u,
                        5u,
                        (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v11);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( RmpMemoryMonitorWaitForEvents(
           (struct _RM_MEMORY_MONITOR_DATA *)a1,
           0xDu,
           *((_DWORD *)a1 + 18),
           (enum _RM_MEMORY_MONITOR_EVENT *)&v10) )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18009E4C3, 0LL, 0LL, 2u, &v16);
      v5 = 1;
    }
    else if ( v10 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup(v11);
    goto LABEL_14;
  }
  return v5;
}
