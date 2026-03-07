__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  NTSTATUS v9; // eax
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // r14
  int v13; // r8d
  unsigned int v14; // edi
  int v15; // eax
  MONITOR_MGR *v16; // r12
  unsigned int v17; // ebx
  struct DXGMONITOR *v18; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct DXGMONITOR *v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v29[4]; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _QWORD v31[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[144]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v31, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v31[1]);
  v31[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v31[3]) = 3;
  LOBYTE(v31[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
  *(_QWORD *)(v8 + 24) = Context;
  *(_QWORD *)(v8 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    v30 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v29 = 0LL;
    v9 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u);
    if ( v9 < 0 )
    {
      WdLogSingleEntry2(3LL, Context, v9);
      return 0LL;
    }
    v11 = InputBuffer[0];
    v12 = v29[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, InputBuffer[0], 0LL);
    v14 = v13 + 1;
    v15 = COREADAPTERACCESS::AcquireExclusive((__int64)v32, (unsigned int)(v13 + 1));
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v11 + 365) )
        WdLogSingleEntry0(v14);
      v16 = *(MONITOR_MGR **)(*((_QWORD *)v11 + 365) + 112LL);
      if ( !v16 )
        WdLogSingleEntry0(v14);
      v26 = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v16, v12, v14, &v26) >= 0 )
      {
        v18 = v26;
        if ( !v26 )
          WdLogSingleEntry0(1LL);
        if ( *((_DWORD *)v18 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        v17 = 0;
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v27, (__int64)v18, 1);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
          WdLogSingleEntry0(1LL);
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)(*((_QWORD *)v18 + 25) + 8LL) )
        {
          v22 = *(_QWORD *)(NotificationStructure + 4);
          v23 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v22;
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v22 )
            v23 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
          if ( v23 )
          {
            v24 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v22;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v22 )
              v24 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v24 )
            {
              v25 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v22;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v22 )
                v25 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v25 )
              {
                v17 = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DxgMonitor::MonitorPnpState **)v18, 0LL, v20, v21);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v16, 6, v12, 0, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v16, 5, v12, 0, 0LL);
              DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(*((DxgMonitor::MonitorPnpState **)v18 + 25));
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v16, 4, v12, 0, 0LL);
            wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
              (DxgkCompositionObject **)(*((_QWORD *)v18 + 25) + 40LL),
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v12);
        }
        if ( v27 )
        {
          ExReleaseResourceLite((PERESOURCE)(v27 + 24));
          KeLeaveCriticalRegion();
        }
        goto LABEL_39;
      }
      WdLogSingleEntry1(2LL, v12);
    }
    else
    {
      if ( v15 != -1073741130 )
        WdLogSingleEntry0(v14);
      WdLogSingleEntry0(2LL);
    }
    v17 = 0;
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    return v17;
  }
  return 3221225485LL;
}
