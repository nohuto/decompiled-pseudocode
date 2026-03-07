unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::IsMonitorConnected(
        DMMVIDEOPRESENTTARGET *this,
        enum _DMM_VIDPN_MONITOR_TYPE *a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  int MonitorType; // eax

  *(_DWORD *)a2 = 0;
  v5 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v5 )
    return 0;
  if ( !*((_QWORD *)this + 5) )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v8 + 8) )
    WdLogSingleEntry0(1LL);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
  MonitorType = MonitorGetMonitorType(v5, a2, a3, a4);
  if ( MonitorType < 0 )
  {
    WdLogSingleEntry3(2LL, v5, v9, MonitorType);
    *(_DWORD *)a2 = 0;
  }
  return 1;
}
