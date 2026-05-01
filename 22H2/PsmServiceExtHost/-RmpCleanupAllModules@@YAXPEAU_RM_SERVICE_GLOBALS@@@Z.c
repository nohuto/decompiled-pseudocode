/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180064434
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003EDF0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025DE8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180027468 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800408E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006B5E8 (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18006DF78 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180070E30 (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180071994 (-RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800829A8 (-HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rsi
  void *v4; // r8
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // r8
  struct _HAM_RC_TREE_NODE *j; // rax
  struct _HAM_RC_TREE_NODE *v9; // rdi
  __int64 v10; // rcx

  v2 = *((_QWORD *)a1 + 340);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 340) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536));
  RmpActivityHostCleanupModule(a1);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 688);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 728));
  v4 = (void *)*((_QWORD *)a1 + 95);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RmpReleaseGlobalLock();
  RmpEnforcerContextCleanup(a1);
  v5 = *((_QWORD *)a1 + 210);
  if ( v5 )
    TpReleaseWork(v5);
  v6 = (void *)*((_QWORD *)a1 + 45);
  if ( v6 )
    NtClose(v6);
  v7 = (void *)*((_QWORD *)a1 + 47);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( *((_DWORD *)a1 + 624) || *((_DWORD *)a1 + 625) )
    NtDeleteWnfStateName((char *)a1 + 2496);
  HampPdcCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2104));
  for ( j = HamRcNodeGetFirst((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2328), 4);
        ;
        j = HamRcNodeGetSuccessor((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2328), v9) )
  {
    v9 = j;
    if ( !j )
      break;
    CemRcObjectDereference(j);
  }
  v10 = *((_QWORD *)a1 + 70);
  if ( v10 )
    TpReleaseTimer(v10);
  *((_DWORD *)a1 + 168) &= ~1u;
}
