void __fastcall PowerUnDimMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // edi
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 DxgkWin32kInterface; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int128 v54; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v56[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !gProtocolType )
  {
    v4 = SGDGetUserSessionState(a1, a2, a3, a4);
    v9 = SGDGetUserSessionState(v6, v5, v7, v8);
    v10 = *(_DWORD *)(v4 + 3112);
    v11 = *(_DWORD *)(v9 + 3092);
    memset(v56, 0, 0x58uLL);
    if ( v10 == v11 )
    {
      if ( *(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 3080) == 1 )
        goto LABEL_2;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v56, 0);
      v20 = SGDGetUserSessionState(v17, v16, v18, v19) + 3148;
      SGDGetUserSessionState(v22, v21, v23, v24);
      v29 = SGDGetUserSessionState(v26, v25, v27, v28);
      DrvSetMonitorBrightness(*((_QWORD *)gpDispInfo + 2), *(_DWORD *)(v29 + 3116), v30, v31, v20, 0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v54 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v54);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v10 != v11 )
    {
      if ( qword_1C02D6B38 )
      {
        v34 = qword_1C02D6B38();
        if ( v34 >= 0 && qword_1C02D6B40 )
          qword_1C02D6B40();
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v33, v32);
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v56);
      v40 = *(_DWORD *)(SGDGetUserSessionState(v37, v36, v38, v39) + 3116);
      *(_DWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 3092) = v40;
      v49 = *(_DWORD *)(SGDGetUserSessionState(v46, v45, v47, v48) + 3092);
      *(_DWORD *)(SGDGetUserSessionState(v51, v50, v52, v53) + 3112) = v49;
    }
  }
LABEL_2:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
