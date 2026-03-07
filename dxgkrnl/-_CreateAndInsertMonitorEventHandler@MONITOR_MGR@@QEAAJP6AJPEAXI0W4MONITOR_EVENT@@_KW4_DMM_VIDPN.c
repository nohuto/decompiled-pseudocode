__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        MONITOR_MGR *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        DXGFASTMUTEX *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  __int64 v6; // rax
  MONITOR_MGR *v7; // rbx
  MONITOR_MGR **v8; // rcx
  DXGFASTMUTEX *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  v6 = operator new[](0x20uLL, 0x4D677844u, 256LL);
  v7 = (MONITOR_MGR *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 16) = VIDPN_MGR::_MonitorEventHandler;
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 128));
    v8 = (MONITOR_MGR **)*((_QWORD *)this + 8);
    if ( *v8 != (MONITOR_MGR *)((char *)this + 56) )
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = v8;
    *(_QWORD *)v7 = (char *)this + 56;
    *v8 = v7;
    *((_QWORD *)this + 8) = v7;
    *a4 = v7;
    MUTEX_LOCK::~MUTEX_LOCK(&v10);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
}
