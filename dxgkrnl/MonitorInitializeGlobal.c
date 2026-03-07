__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  USB4_HOSTROUTER_MGR *v14; // rax
  USB4_HOSTROUTER_MGR *v15; // rcx
  int v16; // ebx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  HANDLE v28; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v30; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v31; // [rsp+68h] [rbp-A0h] BYREF
  GUID v32; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v33[10]; // [rsp+88h] [rbp-80h] BYREF
  int v34; // [rsp+128h] [rbp+20h]
  _OWORD v35[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v36; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v28 = 0LL;
  *(_QWORD *)&v30.Length = 10748066LL;
  byte_1C013BBD0 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v33[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v33[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v33[6] = v9;
  v33[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v33[8] = v10;
  v33[9] = v11;
  v34 = v12;
  v30.Buffer = (wchar_t *)v33;
  if ( DxgkOpenRegistrySubkey(&v28, 0x20019u, 0LL, &v30) >= 0 )
  {
    byte_1C013BBD0 = 1;
    ZwClose(v28);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C013CBB0 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v32 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &v32,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  if ( v13 < 0 )
    WdLogSingleEntry1(2LL, v13);
  v14 = (USB4_HOSTROUTER_MGR *)operator new[](0x98uLL, 0x4D677844u, 64LL);
  if ( v14 )
  {
    MONITOR_MGR::_pUsb4Manager = USB4_HOSTROUTER_MGR::USB4_HOSTROUTER_MGR(v14);
    if ( MONITOR_MGR::_pUsb4Manager )
    {
      v16 = USB4_HOSTROUTER_MGR::Initalize(v15);
      goto LABEL_8;
    }
  }
  else
  {
    MONITOR_MGR::_pUsb4Manager = 0LL;
  }
  WdLogSingleEntry0(2LL);
  v16 = -1073741801;
LABEL_8:
  qword_1C013C078 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Handle = 0LL;
  *(_QWORD *)&v31.Length = 11010214LL;
  qword_1C013CBC8 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v17 = *(_OWORD *)(0x1C0000000LL + 587888);
  v35[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v18 = *(_OWORD *)(0x1C0000000LL + 587904);
  v35[1] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 587920);
  v35[2] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 587936);
  v35[3] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 587952);
  v35[4] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 587968);
  v35[5] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 587984);
  v35[6] = v22;
  v24 = *(_OWORD *)(0x1C0000000LL + 588000);
  v35[7] = v23;
  v25 = *(_OWORD *)(0x1C0000000LL + 588016);
  v26 = *(_QWORD *)(0x1C0000000LL + 588032);
  v35[8] = v24;
  v35[9] = v25;
  v36 = v26;
  v31.Buffer = (wchar_t *)v35;
  if ( DxgkCreateRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v31) >= 0 )
    ZwClose(Handle);
  if ( v16 >= 0 )
    return (unsigned int)DxgMonitor::EDIDCACHE::InitializeGlobalCache();
  return (unsigned int)v16;
}
