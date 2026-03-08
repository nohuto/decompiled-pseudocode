/*
 * XREFs of ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1C01FA460
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D748 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D77C (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1C001D7B0 (--$-9V-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@Y.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x1C006BE78 (-reset@-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wi.c)
 *     ?UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1C01FA738 (-UpdatePnPDeviceInterfaceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorPnpState::RegisterPnPTargetDeviceNotification(
        DxgMonitor::MonitorPnpState *this,
        PCUNICODE_STRING SourceString,
        struct _DEVICE_OBJECT *a3,
        __int64 a4)
{
  void *v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  struct _DEVICE_OBJECT *v13; // rcx
  DxgkCompositionObject *AttachedDeviceReference; // rax
  NTSTATUS v15; // eax
  NTSTATUS updated; // eax
  unsigned int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp+18h] BYREF

  DeviceObject = a3;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_WORD *)this + 32) = 0;
  v7 = SourceString->Length + 2;
  *((_WORD *)this + 33) = v7;
  v8 = operator new[](v7, 0x4D677844u, 256LL);
  *((_QWORD *)this + 9) = v8;
  if ( v8 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)this + 4, SourceString);
    if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
            v9,
            (_QWORD *)this + 3) )
    {
      DeviceObject = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)this + 5,
        0LL);
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)this + 4,
                              0x80000000,
                              (PFILE_OBJECT *)this + 5,
                              &DeviceObject);
      LODWORD(v12) = DeviceObjectPointer;
      if ( DeviceObjectPointer == -1073741772 )
      {
        WdLogSingleEntry1(7LL, *((_QWORD *)this + 9));
      }
      else if ( DeviceObjectPointer < 0 )
      {
        WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), DeviceObjectPointer);
      }
      else
      {
        if ( !wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
                v11,
                (_QWORD *)this + 5) )
          WdLogSingleEntry0(1LL);
        v13 = DeviceObject;
        if ( !DeviceObject )
        {
          WdLogSingleEntry0(1LL);
          v13 = DeviceObject;
        }
        AttachedDeviceReference = (DxgkCompositionObject *)IoGetAttachedDeviceReference(v13);
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)this + 4,
          AttachedDeviceReference);
        wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          (void **)this + 3,
          0LL);
        v15 = IoRegisterPlugPlayNotification(
                EventCategoryTargetDeviceChange,
                0,
                *((PVOID *)this + 5),
                g_pDriverObject,
                DXGMONITOR::_PnPTargetDeviceChangeNotification,
                DeviceObject,
                (PVOID *)this + 3);
        v12 = v15;
        if ( v15 >= 0 )
        {
          updated = IoRegisterDeviceInterface(
                      *((PDEVICE_OBJECT *)this + 1),
                      &GUID_DEVINTERFACE_MONITOR,
                      0LL,
                      (PUNICODE_STRING)this + 3);
          if ( updated < 0
            || (updated = DxgMonitor::MonitorPnpState::UpdatePnPDeviceInterfaceProperties(this), updated < 0)
            || (updated = IoSetDeviceInterfaceState((PUNICODE_STRING)this + 3, 1u), updated < 0) )
          {
            v19 = updated;
            v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
            WdLogSingleEntry2(2LL, v20, v19);
          }
          LODWORD(v12) = 0;
          return (unsigned int)v12;
        }
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
        WdLogSingleEntry2(2LL, v18, v12);
        wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
          (DxgkCompositionObject **)this + 5,
          0LL);
      }
      wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 3);
      return (unsigned int)v12;
    }
    WdLogSingleEntry1(7LL, this);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
}
