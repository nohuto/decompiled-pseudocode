/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02F1D80
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005DE10 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000D9E0 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2604 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F26E4 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  void *v10; // rdx
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 24;
  LOBYTE(v17[6]) = -1;
  v4 = (_QWORD **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2) + 24) = this;
  while ( 1 )
  {
    v7 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v7[1] != v4 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_15:
      __fastfail(3u);
    *v4 = v8;
    v9 = v7 - 2;
    v8[1] = v4;
    if ( *((_DWORD *)v7 + 104) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v7 - 2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
    }
    else
    {
      v10 = (void *)v9[55];
      if ( v10 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
        v9[55] = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v9);
    }
  }
  v11 = (_QWORD **)((char *)this + 144);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      break;
    if ( (_QWORD **)v12[1] != v11 )
      goto LABEL_15;
    v13 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_15;
    *v11 = v13;
    v13[1] = v11;
    v14 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v14 + 24) = v12[2];
    *(_QWORD *)(v14 + 32) = v12[3];
    WdLogEvent5_WdError(v14);
    operator delete(v12);
  }
  v15 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v15 )
  {
    KeSetEvent(v15 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((PVOID *)this + 96), v16);
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}
