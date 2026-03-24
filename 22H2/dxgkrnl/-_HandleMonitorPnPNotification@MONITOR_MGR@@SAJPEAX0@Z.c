/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C017EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memcmp @ 0x1C0028BC0 (memcmp.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0148D38 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C017EA00 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rsi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // edi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // r12
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  struct _FAST_MUTEX *v26; // rdi
  int MonitorInstance; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGMONITOR *v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-B8h] BYREF
  struct DXGMONITOR *v51; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD InputBuffer[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v54[4]; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  _QWORD v56[10]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v57[144]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v56, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[1]);
  LODWORD(v52[0]) = -1;
  v56[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v56[3]) = 2;
  LOBYTE(v56[6]) = -1;
  v52[1] = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    LOBYTE(InputBuffer[0]) = 1;
    LODWORD(v52[0]) = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 7061);
  }
  else
  {
    LOBYTE(InputBuffer[0]) = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v52, 7061LL);
  WdLogNewEntry5_WdTrace(v6, v5);
  if ( !NotificationStructure )
    goto LABEL_26;
  v8 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v8 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v8 )
  {
    v35 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v35 + 24) = (char *)NotificationStructure + 20;
    WdLogEvent5_WdError(v35);
LABEL_26:
    v14 = -1073741811;
LABEL_27:
    LODWORD(v13) = v14;
    goto LABEL_28;
  }
  v9 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(v9, 0x80000000, &FileObject, &DeviceObject);
  v13 = DeviceObjectPointer;
  v14 = -1073741772;
  if ( DeviceObjectPointer == -1073741772 )
  {
    v39 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v39 + 24) = v9->Buffer;
    WdLogEvent5_WdDmmEvent(v39);
    goto LABEL_27;
  }
  if ( DeviceObjectPointer < 0 )
  {
    v40 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v40 + 24) = v9->Buffer;
    *(_QWORD *)(v40 + 32) = v13;
    WdLogEvent5_WdError(v40);
    goto LABEL_28;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v55 = 0LL;
  *(_OWORD *)&InputBuffer[1] = 0LL;
  *(_OWORD *)v54 = 0LL;
  v13 = (int)DxgkCallDriverIoControl(DeviceObject, 2302983LL, &InputBuffer[1], 0x28u, &InputBuffer[1], 0x28u, 1u, 0LL);
  ObfDereferenceObject(FileObject);
  if ( (int)v13 < 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v41 + 24) = v9->Buffer;
    *(_QWORD *)(v41 + 32) = v13;
    WdLogEvent5_WdWarning(v41);
    goto LABEL_28;
  }
  v19 = InputBuffer[1];
  v20 = v54[0];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, (struct DXGADAPTER *const)InputBuffer[1], 0LL);
  v22 = COREADAPTERACCESS::AcquireExclusive((__int64)v57, (unsigned int)(v21 + 1));
  LODWORD(v13) = v22;
  if ( v22 < 0 )
  {
    if ( v22 != -1073741130 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v42);
    }
    v43 = WdLogNewEntry5_WdError(v24, v23);
    WdLogEvent5_WdError(v43);
    goto LABEL_24;
  }
  v25 = *(_QWORD *)(v19 + 2696);
  if ( !v25 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v24, v23);
    WdLogEvent5_WdAssertion(v44);
    v25 = *(_QWORD *)(v19 + 2696);
  }
  v26 = *(struct _FAST_MUTEX **)(v25 + 96);
  if ( !v26 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v24, v23);
    WdLogEvent5_WdAssertion(v45);
  }
  v51 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v26, (unsigned int)v20, 1, &v51);
  v13 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( MonitorInstance != -1073741275 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v48[3] = v20;
      v48[4] = v26;
      v48[5] = v13;
      WdLogEvent5_WdError(v48);
      goto LABEL_24;
    }
    v47 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v47 + 24) = v20;
    *(_QWORD *)(v47 + 32) = v26;
    goto LABEL_42;
  }
  v31 = v51;
  if ( !v51 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v29, v28);
    WdLogEvent5_WdAssertion(v46);
  }
  if ( *((PDEVICE_OBJECT *)v31 + 7) != DeviceAttachmentBaseRef )
  {
    v47 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v47 + 24) = v26;
LABEL_42:
    WdLogEvent5_WdWarning(v47);
    goto LABEL_23;
  }
  v32 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
  if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
    v32 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
  if ( v32 )
  {
    LODWORD(v13) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                 ? 0xC000000D
                 : 0;
    goto LABEL_24;
  }
  v33 = DXGMONITOR::_OnMonitorFunctionDriverArrival(v31, v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v56);
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v26, 3LL, v20, v33, 0LL);
LABEL_23:
  LODWORD(v13) = 0;
LABEL_24:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57, v34);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v52, v7);
  if ( LOBYTE(InputBuffer[0]) && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v52[0]);
  return (unsigned int)v13;
}
