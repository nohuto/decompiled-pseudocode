__int64 __fastcall ACPIBuildProcessPowerResourcePhasePep(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  signed __int32 v6; // edx

  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v5 = 0;
  if ( (*(_DWORD *)(v3 + 16) & 0x4000LL) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v3 + 16), 0x4000uLL);
    v5 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v3 + 32), ACPIBuildDiscoverPowerNodeCompletion, a1);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 56);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqs(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 57);
  if ( v5 != 259 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v6);
  }
  return (unsigned int)v5;
}
