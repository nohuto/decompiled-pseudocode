/*
 * XREFs of ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007DFAC
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0074544 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C007DF70 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 */

__int64 __fastcall IdleTimeoutManagement::UseSystemManagedIdleTimeout(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  int updated; // eax
  FxObject *v4; // r10
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  const void *_a1; // rax
  unsigned __int8 v9; // dl
  int _a3; // r8d
  __int64 v11; // r10
  unsigned __int16 v12; // r9

  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutSystemManaged);
  v5 = 0;
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
        v5 = -1073741808;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v4);
        v12 = 11;
      }
      else
      {
        v5 = -1073741808;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v4);
        v12 = 10;
      }
      WPP_IFR_SF_qid(
        DriverGlobals,
        v9,
        0xCu,
        v12,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        _a1,
        *(_QWORD *)(v11 + 144),
        _a3);
      FxVerifierDbgBreakPoint(DriverGlobals);
    }
  }
  return v5;
}
