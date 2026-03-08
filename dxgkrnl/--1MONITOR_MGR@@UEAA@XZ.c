/*
 * XREFs of ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03C2954
 * Callers:
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006AEB0 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C006B344 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225178 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03C323C (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03C5474 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD **v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  void *v10; // rdx
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  struct _KEVENT *v14; // rcx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF

  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  memset(v15, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v15[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 24;
  LOBYTE(v15[6]) = -1;
  v6 = (_QWORD **)((char *)this + 40);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2, v4, v5) + 24) = this;
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_17:
      __fastfail(3u);
    *v6 = v8;
    v9 = v7 - 19;
    v8[1] = v6;
    if ( !v7 )
      v9 = 0LL;
    if ( *((_DWORD *)v9 + 78) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
    }
    else
    {
      v10 = (void *)v9[40];
      if ( v10 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
        DXGMONITOR::_SetAttachedPhysicalMonitor((DXGMONITOR *)v9, 0LL);
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v9);
    }
  }
  v11 = (_QWORD **)((char *)this + 56);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      break;
    if ( (_QWORD **)v12[1] != v11 )
      goto LABEL_17;
    v13 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_17;
    *v11 = v13;
    v13[1] = v11;
    WdLogSingleEntry2(2LL, v12[2], v12[3]);
    operator delete(v12);
  }
  v14 = (struct _KEVENT *)*((_QWORD *)this + 83);
  if ( v14 )
  {
    KeSetEvent(v14 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((PVOID *)this + 83));
    *((_QWORD *)this + 83) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 128));
  DXGFASTMUTEX::~DXGFASTMUTEX((MONITOR_MGR *)((char *)this + 80));
}
