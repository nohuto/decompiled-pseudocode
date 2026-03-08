/*
 * XREFs of ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x1C03C6CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03C5960 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03C6210 (-RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification(
        char *NotificationStructure,
        USB4_HOSTROUTER_MGR *Context,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, &EventProfilerEnter, a3, 7062);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7062);
  WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  if ( !NotificationStructure || !Context )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data4;
  if ( v9 )
  {
    WdLogSingleEntry1(2LL, NotificationStructure + 20);
LABEL_21:
    v13 = -1073741811;
    goto LABEL_22;
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v10 )
  {
    v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( v12 )
      goto LABEL_21;
    v11 = USB4_HOSTROUTER_MGR::RemoveHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
  }
  else
  {
    v11 = USB4_HOSTROUTER_MGR::AddHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
  }
  v13 = v11;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  }
  return v13;
}
