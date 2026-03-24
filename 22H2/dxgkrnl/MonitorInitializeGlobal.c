/*
 * XREFs of MonitorInitializeGlobal @ 0x1C017E718
 * Callers:
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v26; // rax
  ULONG Disposition[2]; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+A0h] [rbp-68h] BYREF
  GUID EventCategoryData; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v34[10]; // [rsp+C8h] [rbp-40h] BYREF
  int v35; // [rsp+168h] [rbp+60h]
  _OWORD v36[10]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v37; // [rsp+218h] [rbp+110h]

  WdLogNewEntry5_WdTrace(a1, a2);
  v31[0] = 10748066LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  byte_1C00B3200 = 0;
  v2 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  ObjectAttributes.RootDirectory = 0LL;
  v34[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v3 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[1] = v2;
  v4 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[2] = v3;
  v5 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[3] = v4;
  v6 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[4] = v5;
  v7 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v34[5] = v6;
  v8 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v34[6] = v7;
  v34[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v9 = *(_OWORD *)L"OnBadEDID";
  v10 = *(_DWORD *)L"D";
  v34[8] = v8;
  v34[9] = v9;
  v35 = v10;
  v31[1] = v34;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v31;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    byte_1C00B3200 = 1;
    ZwClose(KeyHandle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_1C00B3F60 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  EventCategoryData = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v11 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &EventCategoryData,
          g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  v14 = v11;
  if ( v11 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v26 + 24) = v14;
    WdLogEvent5_WdError(v26);
  }
  qword_1C00B3FB8 = 0LL;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  Handle = 0LL;
  v32[0] = 11010214LL;
  qword_1C00B3FB0 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v15 = *(_OWORD *)(0x1C0000000LL + 493312);
  ObjectAttributes.RootDirectory = 0LL;
  v36[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  Disposition[0] = 0;
  v16 = *(_OWORD *)(0x1C0000000LL + 493328);
  v36[1] = v15;
  v17 = *(_OWORD *)(0x1C0000000LL + 493344);
  v36[2] = v16;
  v18 = *(_OWORD *)(0x1C0000000LL + 493360);
  v36[3] = v17;
  v19 = *(_OWORD *)(0x1C0000000LL + 493376);
  v36[4] = v18;
  v20 = *(_OWORD *)(0x1C0000000LL + 493392);
  v36[5] = v19;
  v21 = *(_OWORD *)(0x1C0000000LL + 493408);
  v36[6] = v20;
  v22 = *(_OWORD *)(0x1C0000000LL + 493424);
  v36[7] = v21;
  v23 = *(_OWORD *)(0x1C0000000LL + 493440);
  v24 = *(_QWORD *)(0x1C0000000LL + 493456);
  v36[8] = v22;
  v36[9] = v23;
  v37 = v24;
  v32[1] = v36;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v32;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, Disposition) >= 0 )
    ZwClose(Handle);
  return (unsigned int)v14;
}
