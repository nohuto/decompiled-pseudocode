/*
 * XREFs of PowerDimMonitor @ 0x1C015B728
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0086BD0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00AF20C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00AF3F4 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00D0C0C (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall PowerDimMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int128 v56; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v58[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !gProtocolType )
  {
    v4 = 1;
    v5 = SGDGetUserSessionState(a1, a2, a3, a4);
    v11 = *(unsigned int *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3100);
    if ( *(_DWORD *)(v5 + 3112) == (_DWORD)v11
      || (v14 = SGDGetUserSessionState(v11, v10, v12, v13),
          *(_DWORD *)(v14 + 3100) >= *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 3092)) )
    {
      v4 = 0;
    }
    memset(v58, 0, 0x58uLL);
    if ( v4 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v58, 1);
      v23 = (_BYTE *)(SGDGetUserSessionState(v20, v19, v21, v22) + 3148);
      SGDGetUserSessionState(v25, v24, v26, v27);
      v32 = SGDGetUserSessionState(v29, v28, v30, v31);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), *(_DWORD *)(v32 + 3132), v33, v34, v23, 0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v35) = 1;
    v56 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v35, &v56);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v4 )
    {
      if ( qword_1C02D6B28 && (int)qword_1C02D6B28() >= 0 && qword_1C02D6B30 )
        qword_1C02D6B30();
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v36, a2);
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v58);
      v42 = *(_DWORD *)(SGDGetUserSessionState(v39, v38, v40, v41) + 3132);
      *(_DWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 3100) = v42;
      v51 = *(_DWORD *)(SGDGetUserSessionState(v48, v47, v49, v50) + 3100);
      *(_DWORD *)(SGDGetUserSessionState(v53, v52, v54, v55) + 3112) = v51;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId, a2, a3, a4);
}
