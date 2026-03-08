/*
 * XREFs of FxInitialize @ 0x1C0043DE4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00227AC (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00228D4 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C00443BC (FxRegistrySettingsInitialize.c)
 *     LockVerifierSection @ 0x1C0045038 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C0045150 (WPP_IFR_SF_Z.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0045734 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00468C0 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C00484D0 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C0048684 (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C00889F4 (FxCacheBugCheckDriverInfo.c)
 *     FxRegisterBugCheckCallback @ 0x1C0088D28 (FxRegisterBugCheckCallback.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 IsRuleClassEnabled; // si
  const _UNICODE_STRING *v8; // rdx
  const _UNICODE_STRING *v9; // rdx
  _DRIVER_OBJECT *v10; // r8
  int v11; // esi
  const _UNICODE_STRING *v13; // rdx

  IsRuleClassEnabled = 0;
  if ( MmIsDriverVerifying(DriverObject) )
    IsRuleClassEnabled = VfIsRuleClassEnabled(33LL);
  FxRegistrySettingsInitialize(FxDriverGlobals, v8, IsRuleClassEnabled);
  FxIFRStart(FxDriverGlobals, v9, v10);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, 5u, 0x11u, 0xDu, WPP_globals_cpp_Traceguids, RegistryPath);
  v11 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v11 >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, v13) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
  else
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v11;
  }
}
