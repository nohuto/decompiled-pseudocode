void __fastcall PowerDimUndimResend(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // si
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  char Data3; // cl
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 DxgkWin32kInterface; // rax
  __int128 v43; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v45[96]; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  memset(ActivityId, 0, 24);
  if ( !gProtocolType && !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    if ( *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3148)
      || *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3112) == -1 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      v10 = SGDGetUserSessionState(v6, v5, v7, v8) + 3148;
      SGDGetUserSessionState(v12, v11, v13, v14);
      SGDGetUserSessionState(v16, v15, v17, v18);
      v23 = SGDGetUserSessionState(v20, v19, v21, v22);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), *(_DWORD *)(v23 + 3112), v24, v25, v10, 1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    v26 = SGDGetUserSessionState(v6, v5, v7, v8);
    Data3 = ActivityId[0].Data3;
    if ( *(_DWORD *)(v26 + 3080) == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v28) = ActivityId[0].Data3;
    v43 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v28, &v43);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v9 && *(_BYTE *)(SGDGetUserSessionState(v30, v29, v31, v32) + 3148) )
    {
      memset(v45, 0, 0x58uLL);
      v37 = SGDGetUserSessionState(v34, v33, v35, v36);
      LOBYTE(v4) = *(_DWORD *)(v37 + 3112) == *(_DWORD *)(SGDGetUserSessionState(v39, v38, v40, v41) + 3100);
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v45, v4);
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v45);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
