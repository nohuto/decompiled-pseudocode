/*
 * XREFs of ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18008126C
 * Callers:
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180079B60 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180079D50 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180079EA8 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x18007A968 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007AD10 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@.c)
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007B780 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007BE38 (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 * Callees:
 *     CemRcTableFind @ 0x18000EBC0 (CemRcTableFind.c)
 */

struct _HAM_CLIENT_PACKAGE_CONTEXT *__fastcall HampClientPkgFindByPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableFind(
                                                 (unsigned __int64)a1 + 56,
                                                 (__int64)&v3,
                                                 (__int64 (__fastcall *)(__int64, __int64))HampClientPkgCompareByHandle);
}
