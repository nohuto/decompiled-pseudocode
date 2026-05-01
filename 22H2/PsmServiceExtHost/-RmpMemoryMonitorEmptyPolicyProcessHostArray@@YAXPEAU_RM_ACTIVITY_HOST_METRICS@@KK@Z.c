/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180076058
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180076378 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180033C18 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180071C40 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x1800766F4 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  size_t v3; // rsi
  char v4; // r14
  bool v5; // r12
  char v6; // r13
  _WORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  int (__cdecl *v12)(const void *, const void *); // r9

  v3 = a2;
  v4 = a3 & 1;
  v5 = 0;
  v6 = a3;
  if ( a2 )
  {
    v8 = (_WORD *)((char *)a1 + 60);
    v9 = a2;
    do
    {
      v10 = *(_QWORD *)(v8 - 6);
      if ( v4
        && RmpMemoryMonitorIsLargeAppTerminationTarget(
             *(struct _RM_ACTIVITY_HOST **)(v8 - 6),
             (struct _RM_ACTIVITY_HOST_METRICS *)(v8 - 30)) )
      {
        *v8 |= 0x8000u;
      }
      else if ( !v5 && RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v10) )
      {
        v11 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v10 + 48) + 400LL, v10, 1);
        v5 = (v11 & *(_DWORD *)(v10 + 1244)) != v11;
      }
      v8 += 32;
      --v9;
    }
    while ( v9 );
    v6 = a3;
  }
  v12 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
  if ( (v6 & 0x10) == 0 )
    v12 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForEmpty;
  qsort(a1, v3, 0x40uLL, v12);
}
