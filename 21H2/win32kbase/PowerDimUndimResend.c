/*
 * XREFs of PowerDimUndimResend @ 0x1C007E570
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C007D730 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C007E8AC (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007EA88 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall PowerDimUndimResend(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  char v5; // di
  char Data3; // al
  __int128 v7; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v9[96]; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  memset(ActivityId, 0, 24);
  if ( !gProtocolType && !gfSwitchInProgress )
  {
    if ( byte_1C0296FB4 || dword_1C0296F90 == -1 )
    {
      v5 = 0;
    }
    else
    {
      v5 = 1;
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), dword_1C0296F90, a3, a4, (__int64)&byte_1C0296FB4, 1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( dword_1C0296F70 == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v7 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(ActivityId[0].Data3, &v7);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v5 && byte_1C0296FB4 )
    {
      memset(v9, 0, 0x58uLL);
      LOBYTE(v4) = dword_1C0296F90 == dword_1C0296F84;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v9, v4);
      ((void (__fastcall *)(_BYTE *))qword_1C0296790)(v9);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
