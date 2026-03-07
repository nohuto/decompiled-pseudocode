__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        __int64 a3,
        bool *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rdi
  unsigned __int8 v7; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  char v12; // bp
  __int64 v13; // rax
  __int64 v15; // r15
  unsigned int v16; // esi
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = a1;
  if ( !a1 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  v10 = (__int64)a5;
  if ( a5 )
  {
    *((_DWORD *)a5 + 9) = v6;
    v11 = *(_QWORD *)(a1 + 404);
    *(_DWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 52) = v11;
  }
  v12 = 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v13 = *((_QWORD *)a1 + 365);
  if ( !v13 || (v15 = *(_QWORD *)(v13 + 112)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v16 = MONITOR_MGR::_HandleRemovePhysicalMonitor(
          *(MONITOR_MGR **)(v13 + 112),
          v6,
          v7,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v10);
  MONITOR_MGR::_LogMonitorPresentEvent(v15, 2, v6, v16, 0LL);
  if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
  {
    anonymous_namespace_::DetermineIfNeedToChangeActivity((DXGADAPTER *)a1, v6, a4);
  }
  else if ( a4 )
  {
    LOBYTE(v17) = 0;
    if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
      || a1[2833]
      || (int)DmmIsTargetForceable((DXGADAPTER *)a1, v6, (bool *)&v17, 0) < 0
      || (_BYTE)v17
      || (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, v6, &v17) < 0 )
    {
      v12 = 0;
    }
    *a4 = v12;
  }
  return v16;
}
