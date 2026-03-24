/*
 * XREFs of MonitorFillMonitorDeviceInfo @ 0x1C014D3D8
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C014D238 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000A258 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C014D6FC (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(struct HDXGMONITOR__ *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PZZWSTR v6; // rbx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *v8; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  SymbolicLinkList = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, (struct DXGMONITOR **)&SymbolicLinkList);
  if ( (int)result >= 0 )
  {
    v6 = SymbolicLinkList;
    if ( !SymbolicLinkList )
    {
      v14 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v14);
      v17 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 148), 1u);
    if ( *((_DWORD *)v6 + 108) == 1 && (*((_DWORD *)v6 + 10) & 0x10) == 0 )
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v7);
      *(_QWORD *)(v18 + 24) = v6;
      WdLogEvent5_WdDmmEvent(v18);
      v12 = -1073741275;
    }
    else
    {
      memset((void *)(a2 + 164), 0, 0x100uLL);
      v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 7);
      if ( !v8 || !*((_QWORD *)v6 + 12) )
        goto LABEL_13;
      SymbolicLinkList = 0LL;
      DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v8, 0, &SymbolicLinkList);
      v12 = DeviceInterfaces;
      if ( DeviceInterfaces < 0 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = DeviceInterfaces;
      }
      else
      {
        v12 = RtlStringCchCopyW((unsigned __int16 *)(a2 + 164), 0x80uLL, SymbolicLinkList);
        ExFreePoolWithTag(SymbolicLinkList, 0);
        if ( v12 >= 0 )
        {
          *(_WORD *)(a2 + 166) = 92;
LABEL_13:
          v12 = DXGMONITOR::_FillMonitorDeviceInfo((DXGMONITOR *)v6, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          if ( v12 == -1071841279 )
            v12 = 0;
          if ( v12 >= 0 )
          {
            v13 = *(_DWORD *)(a2 + 20);
            if ( (v13 & 1) == 0 && !*(_WORD *)(a2 + 36) )
              *(_DWORD *)(a2 + 20) = v13 | 2;
          }
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v6 + 148));
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  return result;
}
