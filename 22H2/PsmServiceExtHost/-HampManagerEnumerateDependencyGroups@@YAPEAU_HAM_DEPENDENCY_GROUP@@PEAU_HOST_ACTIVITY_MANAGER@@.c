/*
 * XREFs of ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x18007C734
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8F8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C5A8 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8C8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampManagerEnumerateDependencyGroups(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_DEPENDENCY_GROUP *a2)
{
  char *v4; // rbp
  char *v5; // rbx
  char *v6; // r14
  signed __int64 v7; // rax
  unsigned __int64 i; // rcx
  signed __int64 v9; // rtt
  char *v10; // rsi

  v4 = 0LL;
  HampManagerAcquireLockShared(a1, (__int64)a2);
  if ( a2 )
    v5 = (char *)*((_QWORD *)a2 + 5);
  else
    v5 = (char *)*((_QWORD *)a1 + 34);
  v6 = (char *)a1 + 272;
  while ( v5 != v6 )
  {
    v4 = v5 - 40;
    _m_prefetchw(v5 + 56);
    v7 = *((_QWORD *)v5 + 7);
    for ( i = v7 + 1; i > 1; i = v7 + 1 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 12, i, v7);
      if ( v9 == v7 )
        goto LABEL_13;
    }
    if ( i != 1 )
      __fastfail(0xEu);
    v5 = *(char **)v5;
  }
LABEL_13:
  HampManagerReleaseLockShared(a1);
  v10 = 0LL;
  if ( v5 != v6 )
    v10 = v4;
  if ( a2 )
    HampDepGroupDereference(a2);
  return (struct _HAM_DEPENDENCY_GROUP *)v10;
}
