/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180075A30
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x180075AC0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180075B50 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180071C40 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180071C94 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rdi
  struct _RM_ACTIVITY_HOST *v3; // rbx
  __int16 v4; // ax

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 6);
  v4 = *((_WORD *)a2 + 30);
  if ( *((__int16 *)a1 + 30) < 0 )
  {
    if ( v4 < 0 )
      return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
    return 0xFFFFFFFFLL;
  }
  if ( v4 < 0 )
    return 1LL;
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)a1 + 6))
    && !RmpPolicyActivityHostIsValidEmptyTarget(v3) )
  {
    return 0xFFFFFFFFLL;
  }
  return !RmpPolicyActivityHostIsValidEmptyTarget(v2) && RmpPolicyActivityHostIsValidEmptyTarget(v3);
}
