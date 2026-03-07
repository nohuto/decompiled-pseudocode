__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct DXGMONITOR *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  DxgMonitor::MonitorModes *v6; // rdi
  DxgMonitor::MonitorModes *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  PERESOURCE v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdx
  struct _ERESOURCE *v14; // rdi
  struct _ERESOURCE *v15; // rdi
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) == 1 )
    WdLogSingleEntry0(1LL);
  v4 = (__int64 *)DxgMonitor::MonitorModes::CopyInstance(*((_QWORD *)a2 + 29), &Resource, this, *((_QWORD *)this + 26));
  v5 = *v4;
  *v4 = 0LL;
  v6 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = v5;
  if ( v6 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v6);
    operator delete(v6);
  }
  v7 = (DxgMonitor::MonitorModes *)Resource;
  Resource = 0LL;
  if ( v7 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v7);
    operator delete(v7);
  }
  if ( !*((_QWORD *)this + 29) )
    return 3221225495LL;
  v8 = (__int64 *)DxgMonitor::MonitorColorState::CopyInstance(
                    *((_QWORD *)a2 + 28),
                    &Resource,
                    this,
                    *((_QWORD *)this + 26));
  v9 = *v8;
  *v8 = 0LL;
  v10 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v9;
  if ( v10 )
    operator delete(v10);
  v11 = Resource;
  Resource = 0LL;
  if ( v11 )
    operator delete(v11);
  if ( !*((_QWORD *)this + 28) )
    return 3221225495LL;
  v12 = (__int64 *)DxgMonitor::MonitorDescriptorState::CopyInstance(
                     *((_QWORD *)a2 + 27),
                     &Resource,
                     this,
                     *((_QWORD *)this + 26));
  v13 = *v12;
  *v12 = 0LL;
  v14 = (struct _ERESOURCE *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v13;
  if ( v14 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v14);
    operator delete(v14);
  }
  v15 = Resource;
  Resource = 0LL;
  if ( v15 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v15);
    operator delete(v15);
  }
  return *((_QWORD *)this + 27) == 0LL ? 0xC0000017 : 0;
}
