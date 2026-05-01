/*
 * XREFs of ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007F45C
 * Callers:
 *     ?HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z @ 0x18007B2E0 (-HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007F34C (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveDynamicDependency(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, __int64 a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+20h] [rbp-28h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  Host = RmHamFindHost(a1, a2, &v14);
  v7 = v14;
  v8 = Host;
  if ( Host >= 0 )
  {
    v9 = RmHamFindHost(a1, a3, &v15);
    v4 = v15;
    v8 = v9;
    if ( v9 >= 0 )
      v8 = HampDepGroupRemoveDependency(v7, v15, 1);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v11 = (*((_QWORD *)v7 + 74))-- == 1LL;
    if ( v11 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64), v10);
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v11 = (*((_QWORD *)v4 + 74))-- == 1LL;
    if ( v11 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64), v12);
    RmpReleaseGlobalLock();
  }
  return v8;
}
