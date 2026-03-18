/*
 * XREFs of ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0088B58
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C000ED3C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C0088B14 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::UseSystemManagedIdleTimeout(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  unsigned int v2; // ebx
  int updated; // r9d
  FxObject *v5; // r10
  int v6; // r9d
  int v7; // r9d
  const void *_a1; // rax
  __int64 v9; // r10
  unsigned __int8 v10; // dl
  int _a3; // r11d
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r10
  int v14; // r11d

  v2 = 0;
  if ( FxLibraryGlobals.PoxRegisterDevice )
  {
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutSystemManaged);
    if ( updated )
    {
      v6 = updated - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return (unsigned int)-1073741595;
          v2 = -1073741808;
          _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v5);
          WPP_IFR_SF_qid(
            DriverGlobals,
            v10,
            0xCu,
            0xBu,
            WPP_PowerPolicyStateMachine_cpp_Traceguids,
            _a1,
            *(_QWORD *)(v9 + 144),
            _a3);
        }
        else
        {
          v2 = -1073741808;
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v5);
          WPP_IFR_SF_qid(
            DriverGlobals,
            2u,
            0xCu,
            0xAu,
            WPP_PowerPolicyStateMachine_cpp_Traceguids,
            ObjectHandleUnchecked,
            *(_QWORD *)(v13 + 144),
            v14);
        }
        FxVerifierDbgBreakPoint(DriverGlobals);
      }
    }
  }
  return v2;
}
