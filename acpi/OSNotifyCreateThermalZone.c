__int64 __fastcall OSNotifyCreateThermalZone(volatile signed __int32 *a1, unsigned __int64 a2)
{
  char v3; // di
  int v4; // edx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = (char)a1;
  v5 = ACPIBuildThermalZoneExtension(a1, a2, &v9);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 20;
      goto LABEL_7;
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v9);
    _InterlockedOr64((volatile signed __int64 *)(v6 + 8), a2);
    v3 = v9;
    v5 = ACPIBuildThermalZoneRequest(v9);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 21;
LABEL_7:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        v7,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        v3,
        v5);
    }
  }
  return (unsigned int)v5;
}
