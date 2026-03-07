__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r8d
  unsigned int updated; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  const wchar_t *v19; // r9
  int v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int ActiveConsoleId; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+B0h] [rbp+40h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2195);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2195);
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp_EtwWriteTransfer(v7, v6, v8, *a1);
  v9 = *a1;
  if ( *a1 > 7 )
  {
    if ( v9 == 8 || v9 == 9 || v9 == 10 )
    {
LABEL_9:
      updated = 0;
      goto LABEL_10;
    }
    if ( v9 != 11 )
    {
      if ( v9 == 12 )
      {
        WdLogSingleEntry1(4LL, ProcessSessionId);
        updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
        if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
        {
          WdLogSingleEntry1(4LL, ActiveConsoleId);
          v14 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
LABEL_34:
      WdLogSingleEntry1(1LL, *a1);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unsupported state change notification type. (pNotification->Type = 0x%I64x)",
        *a1,
        0LL,
        0LL,
        0LL,
        0LL);
      updated = -1073741637;
      goto LABEL_10;
    }
LABEL_24:
    WdLogSingleEntry1(4LL, ProcessSessionId);
    updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ServerSiloServiceSessionId == -1 )
    {
      WdLogSingleEntry1(2LL, ProcessSessionId);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get service session ID from server silo of current session %u.",
        ProcessSessionId,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
    if ( ServerSiloServiceSessionId != ProcessSessionId )
    {
      v16 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
      if ( v16 < 0 )
      {
        v17 = v16;
        WdLogSingleEntry2(2LL, ServerSiloServiceSessionId, v16);
        v18 = ServerSiloServiceSessionId;
        v19 = L"Failed to send MODE_CHANGE WNF notification to service session %u, status = 0x%I64x.";
        goto LABEL_38;
      }
    }
    goto LABEL_10;
  }
  if ( v9 == 7 )
    goto LABEL_24;
  if ( v9 != 1 )
  {
    if ( v9 == 2 || v9 == 3 || v9 == 4 || (unsigned int)(v9 - 5) < 2 )
      goto LABEL_9;
    goto LABEL_34;
  }
  WdLogSingleEntry1(4LL, ProcessSessionId);
  updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
  if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
  {
    WdLogSingleEntry1(4LL, ActiveConsoleId);
    v14 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
LABEL_17:
    v15 = ZwUpdateWnfStateData(v14, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
    if ( v15 >= 0 )
      goto LABEL_10;
    v17 = v15;
    WdLogSingleEntry2(2LL, ActiveConsoleId, v15);
    v18 = ActiveConsoleId;
    v19 = L"Failed to send OCCLUSION WNF notification to active session %u, status = 0x%I64x.";
LABEL_38:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, v17, 0LL, 0LL, 0LL);
  }
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
  return updated;
}
