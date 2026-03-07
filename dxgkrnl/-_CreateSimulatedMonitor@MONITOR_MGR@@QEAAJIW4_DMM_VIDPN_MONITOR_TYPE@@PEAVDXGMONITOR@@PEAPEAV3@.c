__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DxgMonitor::IMonitorComponentParent **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v8; // r14
  __int64 v9; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v10; // edi
  char *v11; // rax
  DXGMONITOR *v12; // rax
  struct DxgMonitor::IMonitorComponentParent *v13; // rsi
  int v14; // eax
  __int64 v15; // rdi
  DXGMONITOR *v16; // rbx
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // [rsp+20h] [rbp-C9h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v20[2]; // [rsp+40h] [rbp-A9h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64); // [rsp+48h] [rbp-A1h] BYREF
  struct DXGMONITOR *v22; // [rsp+50h] [rbp-99h]
  _QWORD v23[14]; // [rsp+60h] [rbp-89h] BYREF
  int v24; // [rsp+D0h] [rbp-19h]

  v22 = a4;
  v8 = a2;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v8 == -1 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 1 )
  {
    WdLogSingleEntry0(1LL);
    *a5 = 0LL;
  }
  else
  {
    *a5 = 0LL;
    if ( a3 == 5 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v20[0] = D3DKMDT_VOT_UNINITIALIZED;
      if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(v9 + 16), v8, v20, 0LL) < 0 )
        WdLogSingleEntry0(1LL);
      v10 = v20[0];
      if ( v20[0] == D3DKMDT_VOT_UNINITIALIZED )
        WdLogSingleEntry0(1LL);
      if ( (unsigned int)v10 >= D3DKMDT_VOT_DVI
        && v10 != D3DKMDT_VOT_SDTVDONGLE
        && *(_BYTE *)(a1 + 19)
        && (!IsInternalVideoOutput(v10) || *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 2820LL) >= 1200) )
      {
        MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0LL, 8, 1uLL, (__int64)a6, 0LL);
      }
    }
  }
  v11 = (char *)operator new[](0x380uLL, 0x4D677844u, 64LL);
  if ( !v11 || (v12 = DXGMONITOR::DXGMONITOR(v11, (struct MONITOR_MGR *)a1), (v13 = v12) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v15) = -1073741801;
    return (unsigned int)v15;
  }
  DxgMonitor::CreateMonitorDriverInterface((__int64 *)&v21, (__int64)v12, *(_QWORD *)(a1 + 24), v8, 0LL);
  if ( v21 )
  {
    LOBYTE(v19) = 0;
    v14 = DXGMONITOR::_InitializeMonitorNoDriver(v13, (__int64 *)&v21, (unsigned int)v8, 0LL, v19, 0, a3, 0LL);
    LODWORD(v15) = v14;
    if ( v14 >= 0 )
    {
      v23[0] = &MonitorEventDeferral::`vftable';
      memset(&v23[2], 0, 0x60uLL);
      v24 = 0;
      v23[1] = a1 + 8;
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(v20, (__int64)v13, 1);
      v15 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                   v13,
                   v22,
                   (struct DxgMonitor::IMonitorDeferredEventSource *)v23,
                   a6);
      if ( *(_QWORD *)v20 )
      {
        ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)v20 + 24LL));
        KeLeaveCriticalRegion();
      }
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v23, a6);
      if ( (int)v15 >= 0 )
      {
        v16 = 0LL;
        *a5 = v13;
      }
      else
      {
        WdLogSingleEntry2(2LL, v8, v15);
        v16 = v13;
      }
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v23);
      goto LABEL_31;
    }
    WdLogSingleEntry2(2LL, v8, v14);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v15) = -1073741801;
  }
  v16 = v13;
LABEL_31:
  v17 = v21;
  v21 = 0LL;
  if ( v17 )
    (**v17)(v17, 1LL);
  if ( v16 )
    DXGMONITOR::`scalar deleting destructor'(v16, 1);
  return (unsigned int)v15;
}
