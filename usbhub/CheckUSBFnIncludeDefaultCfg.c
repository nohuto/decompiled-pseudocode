/*
 * XREFs of CheckUSBFnIncludeDefaultCfg @ 0x1C005C528
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005CE14 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_L @ 0x1C005CF54 (WPP_RECORDER_SF_L.c)
 *     MyRegOpenKeyForRead @ 0x1C005D0D4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005D320 (MyRegQueryUlong.c)
 */

char __fastcall CheckUSBFnIncludeDefaultCfg(__int64 a1)
{
  int v1; // eax
  unsigned __int16 v2; // r9
  int Ulong; // eax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+28h] [rbp-8h]
  HANDLE Handle; // [rsp+48h] [rbp+18h] BYREF

  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v1 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_18;
    v2 = 20;
    goto LABEL_4;
  }
  Ulong = MyRegQueryUlong(Handle);
  if ( Ulong >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(WPP_GLOBAL_Control->DeviceExtension, v4, v5, 22);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x15u,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v11);
  }
  ZwClose(Handle);
  Handle = 0LL;
  v1 = MyRegOpenKeyForRead(v6, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN", &Handle);
  if ( v1 >= 0 )
  {
    v1 = MyRegQueryUlong(Handle);
    if ( v1 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_L(WPP_GLOBAL_Control->DeviceExtension, v7, v8, 25);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 24;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 23;
LABEL_4:
    LODWORD(v10) = v1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      v2,
      (__int64)&WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      v10);
  }
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return 0;
}
