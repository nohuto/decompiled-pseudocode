/*
 * XREFs of ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180009648
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000954C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampClientInsert(struct _HOST_ACTIVITY_MANAGER **a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  struct _HOST_ACTIVITY_MANAGER *v4; // rcx

  HampManagerAcquireLockExclusive(*a1);
  v2 = (__int64 *)(a1 + 1);
  v3 = (__int64)*a1 + 16 * *((int *)a1 + 34) + 16;
  v4 = *(struct _HOST_ACTIVITY_MANAGER **)(v3 + 8);
  if ( *(_QWORD *)v4 != v3 )
    __fastfail(3u);
  *v2 = v3;
  a1[2] = v4;
  *(_QWORD *)v4 = v2;
  *(_QWORD *)(v3 + 8) = v2;
  HampManagerReleaseLockExclusive(*a1);
}
