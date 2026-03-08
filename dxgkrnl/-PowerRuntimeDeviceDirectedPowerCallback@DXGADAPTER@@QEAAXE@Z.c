/*
 * XREFs of ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C003F52C
 * Callers:
 *     ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C0045850 (-DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C00458A0 (-DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerIrp @ 0x1C001B144 (DpiRequestDevicePowerIrp.c)
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02E1A30 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(DXGADAPTER *this, unsigned __int8 a2)
{
  DXGGLOBAL *Global; // rax
  POWER_STATE v5; // edx
  __int64 v6; // rcx

  WdLogSingleEntry1(9LL, a2);
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::SetDFxEngaged(Global, a2 == 0);
  v5.SystemState = PowerSystemWorking;
  v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( !a2 )
  {
    *(_BYTE *)(v6 + 4168) = 1;
    v5.SystemState = PowerSystemSleeping3;
  }
  DpiRequestDevicePowerIrp(v6, v5);
}
