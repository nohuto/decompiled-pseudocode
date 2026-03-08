/*
 * XREFs of ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C006DD80
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C006ECE4 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C006EDF4 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 * Callees:
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C00725F8 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

__int64 __fastcall FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(FxPkgPnp *this)
{
  __int64 result; // rax
  __int32 v2; // eax
  __int64 v3; // r10
  __int64 v4; // r11

  if ( !this->m_PendingDevicePowerIrp )
    return 5LL;
  v2 = FxPkgPnp::GetSystemPowerAction(this) - 4;
  if ( v2 && (unsigned int)(v2 - 1) >= 2 )
    result = *(unsigned int *)(*(_QWORD *)(v4 + 184) + 24LL);
  else
    result = 5LL;
  if ( *(_BYTE *)(v3 + 157) == 5 )
  {
    if ( *(_DWORD *)(v3 + 284) )
      return 6LL;
  }
  return result;
}
