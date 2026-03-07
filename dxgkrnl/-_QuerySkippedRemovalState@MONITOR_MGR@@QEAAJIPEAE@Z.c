__int64 __fastcall MONITOR_MGR::_QuerySkippedRemovalState(MONITOR_MGR *this, unsigned int a2, bool *a3)
{
  __int64 v3; // rbx
  int MonitorInstance; // edi
  __int64 v7; // rcx
  char v8; // al
  struct DXGMONITOR *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v10 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, &v10);
  if ( MonitorInstance >= 0 )
  {
    v7 = *((_QWORD *)v10 + 33);
    if ( *(_BYTE *)(v7 + 8) )
      v8 = *(_BYTE *)(v7 + 57);
    else
      v8 = 0;
    *a3 = v8 != 0;
  }
  else
  {
    WdLogSingleEntry2(2LL, v3, this);
  }
  return (unsigned int)MonitorInstance;
}
