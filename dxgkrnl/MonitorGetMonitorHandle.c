__int64 __fastcall MonitorGetMonitorHandle(__int64 a1, __int64 a2, __int64 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  unsigned __int8 v7; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  MONITOR_MGR *v11; // rdi
  int MonitorInstance; // eax
  unsigned int v13; // ebx
  DXGMONITOR *v14; // rbx
  struct DXGMONITOR *v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = a1;
  if ( !a1 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  if ( !*(_QWORD *)(a1 + 2920) )
    WdLogSingleEntry0(1LL);
  v11 = *(MONITOR_MGR **)(*(_QWORD *)(a1 + 2920) + 112LL);
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v16 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, v6, v7, &v16);
  v13 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v6, v11);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v6, v11);
    return v13;
  }
  else
  {
    v14 = v16;
    if ( !v16 )
      WdLogSingleEntry0(1LL);
    DXGMONITOR::_AddReference(v14, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v14);
    return 0LL;
  }
}
