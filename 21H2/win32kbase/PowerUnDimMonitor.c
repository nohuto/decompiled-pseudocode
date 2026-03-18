/*
 * XREFs of PowerUnDimMonitor @ 0x1C007D5BC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C007D2B0 (PowerOnMonitor.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C007D730 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C007E8AC (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007EA88 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 */

void PowerUnDimMonitor()
{
  bool v0; // bl
  int v1; // r8d
  int v2; // r9d
  __int128 v3; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v5[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !gProtocolType )
  {
    v0 = dword_1C0296F90 != dword_1C0296F7C;
    memset(v5, 0, 0x58uLL);
    if ( dword_1C0296F90 == dword_1C0296F7C )
    {
      if ( dword_1C0296F70 == 1 )
        goto LABEL_4;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v5, 0);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), dword_1C0296F94, v1, v2, (__int64)&byte_1C0296FB4, 0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v3 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0, &v3);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v0 )
    {
      if ( qword_1C029C2F0 && (int)qword_1C029C2F0() >= 0 && qword_1C029C2F8 )
        qword_1C029C2F8();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      ((void (__fastcall *)(_BYTE *))qword_1C0296790)(v5);
      dword_1C0296F7C = dword_1C0296F94;
      dword_1C0296F90 = dword_1C0296F94;
    }
  }
LABEL_4:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
