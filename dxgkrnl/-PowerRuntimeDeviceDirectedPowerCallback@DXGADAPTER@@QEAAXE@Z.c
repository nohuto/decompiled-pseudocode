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
