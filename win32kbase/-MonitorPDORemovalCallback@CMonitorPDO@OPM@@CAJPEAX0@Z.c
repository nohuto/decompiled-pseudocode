__int64 __fastcall OPM::CMonitorPDO::MonitorPDORemovalCallback(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  NotificationStructure[3] = 0LL;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4);
  v4 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v3;
  if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v3 )
    v4 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
  if ( !v4 )
    goto LABEL_7;
  v5 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v3;
  if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v3 )
    v5 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
  if ( !v5 )
LABEL_7:
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Context + 8LL))(Context);
  return 0LL;
}
