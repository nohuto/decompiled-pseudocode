__int64 __fastcall MonitorIsMonitorConnected(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // bp
  __int64 v8; // rax
  MONITOR_MGR *v9; // rcx
  __int64 result; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  if ( !*(_QWORD *)(a1 + 2920) )
    WdLogSingleEntry0(1LL);
  v9 = *(MONITOR_MGR **)(*(_QWORD *)(a1 + 2920) + 112LL);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v9, v5, v6, &v11);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v11 )
      WdLogSingleEntry0(1LL);
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v11 )
      WdLogSingleEntry0(1LL);
    *a4 = 1;
  }
  return 0LL;
}
