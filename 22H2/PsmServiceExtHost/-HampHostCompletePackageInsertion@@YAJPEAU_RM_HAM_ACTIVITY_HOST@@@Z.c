/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DBEC
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180021824 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED5C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001FBF0 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180020B90 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800222BC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023100 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180025F10 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025F70 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002769C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CA04 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18003CEE8 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18008004C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rcx
  int v12; // ebx
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // r8
  __int64 j; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rdx

  v1 = *((_QWORD *)a1 + 97);
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 88);
  RmpAcquireGlobalLock();
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568);
  if ( v5 && RmHamHostReferenceUnsafe(v5) )
    v6 = *(_QWORD *)(v1 + 568);
  else
    v6 = 0LL;
  RmpReleaseGlobalLock();
  v7 = *(_QWORD **)(v1 + 600);
  v8 = (_QWORD *)((char *)a1 + 808);
  if ( *v7 != v1 + 592 )
    __fastfail(3u);
  *v8 = v1 + 592;
  *((_QWORD *)a1 + 102) = v7;
  *v7 = v8;
  *(_QWORD *)(v1 + 600) = v8;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    if ( *(_QWORD *)(v1 + 568) )
    {
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      HampAppQueueTerminate(v1, v20, 4864LL);
      v12 = -1058275322;
      goto LABEL_16;
    }
    *(_QWORD *)(v1 + 568) = a1;
  }
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( *((_DWORD *)a1 + 140) != 2 )
  {
    if ( v6 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
      *((_QWORD *)a1 + 98) = RmHamHostReference((struct _RM_HAM_ACTIVITY_HOST *)v6);
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
    }
    goto LABEL_23;
  }
  for ( i = HampAppGetFirstHost((struct _HAM_APPLICATION *)v1); ; i = HampAppGetNextHost(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( *((_DWORD *)i + 140) != 2 )
    {
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(v10, 0);
      *((_QWORD *)v10 + 98) = RmHamHostReference(a1);
      HampHostReleaseLockExclusiveEx(v10);
      RmpReleaseGlobalLock();
    }
  }
  if ( (*((_QWORD *)a1 + 81) & 0x400000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_QWORD *)(v4 + 328) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    v16 = 0LL;
    for ( j = v4; ; j = *(_QWORD *)(*(_QWORD *)(v19 + 776) + 88LL) )
    {
      v18 = HampHostEnumerateHostsInNode(j, 3LL, v16);
      v19 = v18;
      if ( !v18 )
        break;
      if ( (struct _RM_HAM_ACTIVITY_HOST *)v18 != a1 && *(_DWORD *)(v18 + 560) == 2 && !*(_QWORD *)(v18 + 696) )
      {
        v12 = HampDepGroupAddPpleDependency((struct _RM_HAM_ACTIVITY_HOST *)v18, a1);
        if ( v12 < 0 )
          goto LABEL_16;
      }
      v16 = v19;
    }
    goto LABEL_23;
  }
  if ( *((_QWORD *)a1 + 87) )
  {
LABEL_23:
    v12 = 0;
    goto LABEL_16;
  }
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
  v11 = *(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 328);
  if ( !v11 || !RmHamHostReferenceUnsafe(v11) )
  {
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RmpReleaseGlobalLock();
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  v3 = *(_QWORD *)(v4 + 328);
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
  RmpReleaseGlobalLock();
  v12 = HampDepGroupAddPpleDependency(a1, (struct _RM_HAM_ACTIVITY_HOST *)v3);
  if ( v12 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    v15 = (*(_QWORD *)(v3 + 592))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v3 - 64), v21);
    RmpReleaseGlobalLock();
  }
LABEL_16:
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v15 = (*(_QWORD *)(v6 + 592))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v6 - 64), v14);
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v12;
}
