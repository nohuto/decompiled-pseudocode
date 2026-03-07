char __fastcall PowerOnMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // ebx
  enum POWER_MONITOR_REQUEST_REASON v7; // ebp
  int v8; // r14d
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char result; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v5 = 0;
  v7 = (int)a1;
  v8 = 0;
  v9 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2952);
  result = **(_BYTE **)(SGDGetUserSessionState(v11, v10, v12, v13) + 2896);
  if ( !result )
  {
    EtwTracPowerOnMonitoreBegin(v4, v15, v16);
    if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
      InputTraceLogging::Power::PowerOnMonitor();
    if ( !v9 )
    {
      if ( !gProtocolType )
      {
        if ( !*(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2952)
          && !*(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 2972)
          && !*(_DWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 2976) )
        {
          v56 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v56, 4LL, 0LL, 0LL);
          v8 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start(v30, v29, v31, v32);
        if ( gptiCurrent )
        {
          v33 = *((_QWORD *)gptiCurrent + 57);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 8);
            if ( v34 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v34 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0, 0, 0);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0, 0);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)v7);
        v39 = SGDGetUserSessionState(v36, v35, v37, v38);
        ArmPowerWatchdog(*(_QWORD *)(v39 + 736), 80);
        DrvSetMonitorPowerState(*((_QWORD *)gpDispInfo + 2), 1u, 0, a2);
        v44 = SGDGetUserSessionState(v41, v40, v42, v43);
        DisarmPowerWatchdog(*(_QWORD *)(v44 + 736));
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C02D6B78 && (int)qword_1C02D6B78() >= 0 && qword_1C02D6B80 )
          qword_1C02D6B80();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        UserSessionSwitchBlock_End(v46, v45, v47, v48);
        LOBYTE(v49) = 1;
        DrvChangeD3RequestsState(v49);
      }
      v5 = 1;
    }
    PowerUnDimMonitor(v18, v17, v19, v20);
    if ( *(_DWORD *)(SGDGetUserSessionState(v51, v50, v52, v53) + 3080) == 2 || v5 )
      UpdateDisplayState(PowerMonitorOn, v7, v9 == 0);
    if ( !v9 && grpdeskRitInput && qword_1C02D6B68 && (int)qword_1C02D6B68() >= 0 && qword_1C02D6B70 )
      qword_1C02D6B70();
    if ( v8 )
    {
      v56 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v56, 4LL, 0LL, 0LL);
    }
    return EtwTracePowerOnMonitorEnd(v4, v54, v55);
  }
  return result;
}
