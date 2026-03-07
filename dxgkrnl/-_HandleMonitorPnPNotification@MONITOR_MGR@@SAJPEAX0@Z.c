__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  UNICODE_STRING *v10; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v12; // rbx
  int v13; // edi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r12
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // r15
  int v17; // r8d
  int v18; // eax
  MONITOR_MGR *v19; // rdi
  int MonitorInstance; // eax
  struct DXGMONITOR *v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGMONITOR *v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v36[4]; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  _QWORD v38[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v39[14]; // [rsp+F0h] [rbp-10h] BYREF
  int v40; // [rsp+160h] [rbp+60h]
  _BYTE v41[144]; // [rsp+170h] [rbp+70h] BYREF

  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v31 = -1;
  v32 = 0LL;
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 2;
  LOBYTE(v38[6]) = -1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 7061);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7061);
  WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  if ( !NotificationStructure )
    goto LABEL_33;
  v9 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v9 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v9 )
  {
    WdLogSingleEntry1(2LL, (char *)NotificationStructure + 20);
LABEL_33:
    v13 = -1073741811;
LABEL_34:
    LODWORD(v12) = v13;
    goto LABEL_28;
  }
  v10 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v10, 0x80000000, &FileObject, &DeviceObject);
  v12 = DeviceObjectPointer;
  v13 = -1073741772;
  if ( DeviceObjectPointer == -1073741772 )
  {
    WdLogSingleEntry1(7LL, v10->Buffer);
    goto LABEL_34;
  }
  if ( DeviceObjectPointer < 0 )
  {
    v27 = 2LL;
LABEL_38:
    WdLogSingleEntry2(v27, v10->Buffer, v12);
    goto LABEL_28;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v37 = 0LL;
  *(_OWORD *)InputBuffer = 0LL;
  *(_OWORD *)v36 = 0LL;
  v12 = DxgkCallDriverIoControl(DeviceObject, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u);
  ObfDereferenceObject(FileObject);
  if ( (int)v12 < 0 )
  {
    v27 = 3LL;
    goto LABEL_38;
  }
  v15 = InputBuffer[0];
  v16 = v36[0];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, InputBuffer[0], 0LL);
  v18 = COREADAPTERACCESS::AcquireExclusive((__int64)v41, (unsigned int)(v17 + 1));
  LODWORD(v12) = v18;
  if ( v18 < 0 )
  {
    if ( v18 != -1073741130 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry0(2LL);
    goto LABEL_27;
  }
  if ( !*((_QWORD *)v15 + 365) )
    WdLogSingleEntry0(1LL);
  v19 = *(MONITOR_MGR **)(*((_QWORD *)v15 + 365) + 112LL);
  if ( !v19 )
    WdLogSingleEntry0(1LL);
  v39[0] = &MonitorEventDeferral::`vftable';
  memset(&v39[2], 0, 0x60uLL);
  v40 = 0;
  v30 = 0LL;
  v39[1] = ((unsigned __int64)v19 + 8) & -(__int64)(v19 != 0LL);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v19, v16, 1, &v30);
  LODWORD(v12) = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v21 = v30;
    if ( !v30 )
      WdLogSingleEntry0(1LL);
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v34, (__int64)v21, 1);
    if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v21 + 25) + 8LL) == DeviceAttachmentBaseRef )
    {
      v22 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
      if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
        v22 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
      if ( v22 )
      {
        LODWORD(v12) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                     ? 0xC000000D
                     : 0;
LABEL_24:
        if ( v34 )
        {
          ExReleaseResourceLite((PERESOURCE)(v34 + 24));
          KeLeaveCriticalRegion();
        }
        goto LABEL_26;
      }
      v23 = DXGMONITOR::_OnMonitorFunctionDriverArrival(
              v21,
              v10,
              (struct DxgMonitor::IMonitorDeferredEventSource *)v39,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38);
      MONITOR_MGR::_LogMonitorPresentEvent((__int64)v19, 3, v16, v23, 0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, v19);
    }
    LODWORD(v12) = 0;
    goto LABEL_24;
  }
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(3LL, v16, v19);
    LODWORD(v12) = 0;
  }
  else
  {
    WdLogSingleEntry3(2LL, v16, v19, MonitorInstance);
  }
LABEL_26:
  MonitorEventDeferral::FlushEventsWithContext(
    (MonitorEventDeferral *)v39,
    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38);
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v39);
LABEL_27:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
  }
  return (unsigned int)v12;
}
