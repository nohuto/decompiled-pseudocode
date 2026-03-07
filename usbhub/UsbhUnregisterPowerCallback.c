int __fastcall UsbhUnregisterPowerCallback(__int64 a1)
{
  PVOID *v2; // rax
  PVOID *v3; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v2 = (PVOID *)FdoExt(a1);
  v3 = v2;
  if ( *((_DWORD *)v2 + 1310) )
  {
    LODWORD(v2) = PoUnregisterPowerSettingCallback(v2[656]);
    if ( (int)v2 >= 0 )
      *((_DWORD *)v3 + 1310) = 0;
  }
  return (int)v2;
}
