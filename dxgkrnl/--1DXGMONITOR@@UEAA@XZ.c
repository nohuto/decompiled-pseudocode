/*
 * XREFs of ??1DXGMONITOR@@UEAA@XZ @ 0x1C03C45DC
 * Callers:
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x1C002A280 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00072DC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006BAF0 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01691C4 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C03C4988 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03C4C30 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1C03C54BC (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorPnpState@DxgMonitor@@QEAA@XZ @ 0x1C03C7054 (--1MonitorPnpState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03C720C (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x1C03C7968 (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03C7CA8 (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  void *v2; // rcx
  DxgMonitor::MonitorUsb4State *v3; // rdi
  __int64 v4; // rdi
  DxgMonitor::MonitorGammaState *v5; // rdi
  void *v6; // rcx
  DxgMonitor::MonitorModes *v7; // rdi
  void *v8; // rcx
  struct _ERESOURCE *v9; // rdi
  DxgMonitor::MonitorDataStore *v10; // rcx
  DxgMonitor::MonitorPnpState *v11; // rdi
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorComponentParent'};
  *((_QWORD *)this + 1) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorRegistryRoot'};
  *((_QWORD *)this + 2) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorDxgiGammaSource'};
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DXGMONITOR::LogMonitorObjectOnOffState((__int64)this, (__int64)&ActivityId, 0, 1);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 280), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorCCDName(this);
  v2 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v2 )
    operator delete(v2);
  v3 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 )
  {
    DxgMonitor::MonitorUsb4State::~MonitorUsb4State(v3);
    operator delete(v3);
  }
  v4 = *((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v4 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(v4 + 32));
    operator delete((void *)v4);
  }
  v5 = (DxgMonitor::MonitorGammaState *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v5 )
  {
    DxgMonitor::MonitorGammaState::~MonitorGammaState(v5);
    operator delete(v5);
  }
  v6 = (void *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v6 )
    operator delete(v6);
  v7 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v7 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v7);
    operator delete(v7);
  }
  v8 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v8 )
    operator delete(v8);
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v9 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v9);
    operator delete(v9);
  }
  v10 = (DxgMonitor::MonitorDataStore *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v10 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v10, 1);
  v11 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v11 )
  {
    DxgMonitor::MonitorPnpState::~MonitorPnpState(v11);
    operator delete(v11);
  }
  v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v12 )
    (**v12)(v12, 1LL);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 24));
}
