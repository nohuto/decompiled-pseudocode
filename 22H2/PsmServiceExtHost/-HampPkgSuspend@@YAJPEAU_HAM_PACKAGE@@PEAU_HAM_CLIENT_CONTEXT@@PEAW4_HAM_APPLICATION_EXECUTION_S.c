/*
 * XREFs of ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18008097C
 * Callers:
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007B780 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000DB28 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025DE8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180027468 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002A2E4 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003B730 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003B9CC (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BA18 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007E260 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E330 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180080948 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgSuspend(
        struct _HAM_PACKAGE *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v6; // r15d
  __int64 v7; // rdx
  int v8; // ebx
  struct _HAM_RC_TREE_NODE *i; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi
  __int64 v12; // rdx
  int v14; // edx
  struct _RM_HAM_ACTIVITY_HOST **Next; // rax
  struct _RM_HAM_ACTIVITY_HOST **v16; // rcx
  struct _RM_HAM_ACTIVITY_HOST **v17; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]

  v19 = 0LL;
  v20 = 0LL;
  HampPkgAcquireLockShared(a1);
  v6 = (*((_DWORD *)a1 + 86) >> 5) & 7;
  HampPkgReleaseLockShared(a1, v7);
  v8 = 0;
  for ( i = HamRcNodeGetFirst(a1, 1); i; i = HamRcNodeGetSuccessor(a1, i) )
  {
    v10 = HampAppTryReferenceMixedHost(i);
    v11 = v10;
    if ( v10 )
    {
      v8 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v19, v10);
      if ( v8 >= 0 )
        v8 = 0;
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v11 + 74))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v11 - 64), v12);
      RmpReleaseGlobalLock();
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741275 )
        goto LABEL_21;
      v8 = 0;
    }
  }
  v14 = DWORD2(v19);
  Next = 0LL;
  v16 = (struct _RM_HAM_ACTIVITY_HOST **)v19;
  if ( DWORD2(v19) )
  {
    Next = (struct _RM_HAM_ACTIVITY_HOST **)v19;
    LODWORD(v20) = 1;
  }
  if ( Next )
  {
    do
    {
      HampHostDebugQueueSuspend(*Next, a2);
      Next = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v19);
    }
    while ( Next );
    v14 = DWORD2(v19);
    v16 = (struct _RM_HAM_ACTIVITY_HOST **)v19;
  }
  v17 = 0LL;
  if ( v14 )
  {
    v17 = v16;
    LODWORD(v20) = 1;
  }
  while ( v17 )
  {
    HampHostDebugWaitForSuspendComplete(*v17);
    v17 = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)&v19);
  }
  *(_DWORD *)a3 = v6;
LABEL_21:
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v19);
  return (unsigned int)v8;
}
