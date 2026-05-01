/*
 * XREFs of RmpCreateResourceManagerServer @ 0x18003FE7C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003EDF0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003F41C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003FEE0 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041288 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180041678 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 */

__int64 __fastcall RmpCreateResourceManagerServer(struct ModernResourceEnforcer *a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rdi
  __int64 result; // rax
  _BYTE v4[184]; // [rsp+20h] [rbp-B8h] BYREF

  v1 = RmSvcGlobals;
  RmpGetResourceManagerRuntimeConfiguration((struct _RM_RUNTIME_CONFIGURATION *)v4);
  RmpInitializeAllModules((struct _RM_RUNTIME_CONFIGURATION *)v4, v1);
  result = RmpAllocateAllModuleState(a1, v1);
  if ( (int)result >= 0 )
  {
    result = RmpStartAllModules(v1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
