__int64 __fastcall MonitorFillMonitorDeviceInfo(__int64 a1, __int64 a2)
{
  PZZWSTR v3; // rbx
  int v4; // esi
  __int64 v5; // rax
  struct _DEVICE_OBJECT *v6; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&SymbolicLinkList, a1);
  v3 = SymbolicLinkList;
  v4 = -1073741275;
  if ( !SymbolicLinkList )
  {
    v15 = -1073741275LL;
    v16 = 2LL;
LABEL_23:
    WdLogSingleEntry1(v16, v15);
    goto LABEL_17;
  }
  if ( *((_DWORD *)SymbolicLinkList + 78) == 1 && !*(_BYTE *)(*((_QWORD *)SymbolicLinkList + 25) + 16LL) )
  {
    v15 = 1LL;
    v16 = 7LL;
    goto LABEL_23;
  }
  memset((void *)(a2 + 164), 0, 0x100uLL);
  v5 = *((_QWORD *)v3 + 25);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 8);
  if ( !v6 || !*(_QWORD *)(v5 + 56) )
  {
LABEL_11:
    v12 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v3, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
    if ( v12 == -1071841279 )
    {
      v12 = 0;
    }
    else if ( v12 < 0 )
    {
LABEL_16:
      v4 = v12;
      goto LABEL_17;
    }
    v13 = *(_DWORD *)(a2 + 20);
    if ( (v13 & 1) == 0 && !*(_WORD *)(a2 + 36) )
      *(_DWORD *)(a2 + 20) = v13 | 2;
    goto LABEL_16;
  }
  SymbolicLinkList = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v6, 0, &SymbolicLinkList);
  v4 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = DeviceInterfaces;
    goto LABEL_17;
  }
  v4 = RtlStringCchCopyW((char *)(a2 + 164), 128LL, (char *)SymbolicLinkList);
  ExFreePoolWithTag(SymbolicLinkList, 0);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a2 + 166) = 92;
    goto LABEL_11;
  }
LABEL_17:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 12));
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
