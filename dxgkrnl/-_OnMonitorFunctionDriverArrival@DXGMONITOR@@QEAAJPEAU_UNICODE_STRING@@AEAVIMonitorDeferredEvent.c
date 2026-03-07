__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rcx
  bool v9; // r8
  struct _DEVICE_OBJECT *v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v23; // [rsp+30h] [rbp-10h] BYREF
  void *v24; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 176) & 1) == 0 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)this + 25) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
    WdLogSingleEntry0(1LL);
  v8 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 27);
  LOBYTE(v24) = 0;
  DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v8, (bool *)&v24);
  if ( (_BYTE)v24 )
    DXGMONITOR::OnDescriptorUpdated(this, a3, v9);
  DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((DxgMonitor::MonitorModes **)this + 29));
  DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
    *((DxgMonitor::MonitorPnpState **)this + 25),
    SourceString,
    v10,
    v11);
  if ( (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
    *((_BYTE *)this + 177) = (32
                            * DxgMonitor::MonitorPnpState::IsOemPanelDriverPresent(*((DxgMonitor::MonitorPnpState **)this
                                                                                   + 25))) | *((_BYTE *)this + 177) & 0xDF;
  else
    *((_BYTE *)this + 177) &= ~0x20u;
  LOBYTE(v12) = ~*((_BYTE *)this + 176);
  DXGMONITOR::TriggerMonitorTelemetry(this, (v12 >> 6) & 1, a4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 80LL))(*((_QWORD *)this + 21)) )
  {
    v13 = *((_DWORD *)this + 116);
    v14 = *((_QWORD *)this + 26);
    LODWORD(v24) = v13;
    if ( DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v14, 1LL, (__int64)L"PreferredScaleFactor", &v24) )
      v13 = (unsigned int)v24;
    if ( v13 && *((_DWORD *)this + 116) != v13 )
    {
      v15 = *((_QWORD *)this + 26);
      *((_DWORD *)this + 116) = v13;
      v16 = *(__int64 **)(v15 + 16);
      v17 = *v16;
      v24 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, void **))(v17 + 8))(v16, 0LL, &v24) >= 0 )
        DxgMonitor::MonitorDataStore::WriteData<unsigned long>(v18, v24, L"PreferredScaleFactor", v13);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&v24);
      (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64, _QWORD, _DWORD))a3)(
        a3,
        *((unsigned int *)this + 45),
        9LL,
        *((unsigned int *)this + 116),
        *((_DWORD *)this + 78));
    }
  }
  v19 = DxgMonitor::MonitorUsageState::_EvaluateUsageState(
          *((DxgMonitor::MonitorUsageState **)this + 30),
          *(const struct DxgMonitor::IMonitorDescriptor **)(*((_QWORD *)this + 27) + 160LL));
  DXGMONITOR::OnUsageUpdated(this, a3, v19);
  DxgMonitor::MonitorColorState::OnFunctionDriverArrival(*((DxgMonitor::MonitorColorState **)this + 28), a4);
  if ( (int)DxgkIncreaseMonitorUniqueness() >= 0 )
  {
    v23 = 0LL;
    LODWORD(v23) = 12;
    DxgkStatusChangeNotify((int *)&v23, v20, v21);
  }
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64, __int64, _DWORD))a3)(
    a3,
    *((unsigned int *)this + 45),
    12LL,
    1LL,
    *((_DWORD *)this + 78));
  return 0LL;
}
