/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F9460
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0133648 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0148D38 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C017EA00 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F93C8 (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02F9CA8 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // r12
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct _FAST_MUTEX *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  PERESOURCE v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v42; // rdx
  PVOID Reserved2; // rcx
  __int64 v44; // rcx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56[4]; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  _QWORD v58[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v59[144]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v58, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v58[1]);
  v58[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v58[3]) = 3;
  LOBYTE(v58[6]) = -1;
  v6 = WdLogNewEntry5_WdTrace(v5, v4);
  v7 = 0;
  *(_QWORD *)(v6 + 24) = Context;
  *(_QWORD *)(v6 + 32) = NotificationStructure;
  if ( NotificationStructure && Context )
  {
    v57 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v56 = 0LL;
    v8 = DxgkCallDriverIoControl(Context, 2302983LL, InputBuffer, 0x28u, InputBuffer, 0x28u, 1u, 0LL);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = Context;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return 0LL;
    }
    v15 = InputBuffer[0];
    v16 = v56[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, InputBuffer[0], 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive((__int64)v59, (unsigned int)(v17 + 1));
    if ( v18 >= 0 )
    {
      v23 = *((_QWORD *)v15 + 337);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v24);
        v23 = *((_QWORD *)v15 + 337);
      }
      v25 = *(struct _FAST_MUTEX **)(v23 + 96);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v26);
      }
      Resource = 0LL;
      if ( (int)MONITOR_MGR::_GetMonitorInstance(v25, (unsigned int)v16, 1, (struct DXGMONITOR **)&Resource) >= 0 )
      {
        v30 = Resource;
        if ( !Resource )
        {
          v31 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v31);
        }
        if ( LODWORD(v30[4].OwnerTable) != 1 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v32);
        }
        LODWORD(v33) = 0;
        Resource = (PERESOURCE)((char *)v30 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v30 + 296), 1u);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
        if ( !DeviceAttachmentBaseRef )
        {
          v37 = WdLogNewEntry5_WdAssertion(v35, v34);
          WdLogEvent5_WdAssertion(v37);
        }
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        if ( DeviceAttachmentBaseRef == *(PDEVICE_OBJECT *)&v30->OwnerEntry.0 )
        {
          v41 = *(_QWORD *)(NotificationStructure + 4);
          v42 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v41);
          if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v41 )
            v42 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(*(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4
                                                          - *(_QWORD *)(NotificationStructure + 12));
          if ( v42 )
          {
            v44 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v41;
            if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v41 )
              v44 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
            if ( v44 )
            {
              v51 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v41;
              if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v41 )
                v51 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
              if ( v51 )
              {
                LODWORD(v33) = -1073741811;
              }
              else
              {
                DXGMONITOR::_OnMonitorFunctionDriverDeparture((DXGMONITOR *)v30, v42);
                v52 = DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)v30);
                MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 6LL, v16, v52, 0LL);
              }
            }
            else
            {
              MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 5LL, v16, 0, 0LL);
              DeviceObject = 0LL;
              DeviceObjectPointer = IoGetDeviceObjectPointer(
                                      (PUNICODE_STRING)&v30[1],
                                      0x80000000,
                                      (PFILE_OBJECT *)&v30->Reserved2,
                                      &DeviceObject);
              v33 = DeviceObjectPointer;
              if ( DeviceObjectPointer < 0 )
              {
                v48 = WdLogNewEntry5_WdError(v47, v46);
                *(_QWORD *)(v48 + 24) = v30[1].SystemResourcesList.Blink;
                *(_QWORD *)(v48 + 32) = v33;
                WdLogEvent5_WdError(v48);
              }
              if ( !v30->Reserved2 )
              {
                v49 = WdLogNewEntry5_WdAssertion(v47, v46);
                WdLogEvent5_WdAssertion(v49);
              }
              if ( !DeviceObject )
              {
                v50 = WdLogNewEntry5_WdAssertion(v47, v46);
                WdLogEvent5_WdAssertion(v50);
              }
            }
          }
          else
          {
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)v25, 4LL, v16, 0, 0LL);
            Reserved2 = v30->Reserved2;
            if ( Reserved2 )
            {
              ObfDereferenceObject(Reserved2);
              v30->Reserved2 = 0LL;
            }
          }
          v7 = v33;
        }
        else
        {
          v40 = WdLogNewEntry5_WdError(v39, v38);
          *(_QWORD *)(v40 + 24) = v16;
          WdLogEvent5_WdError(v40);
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        goto LABEL_45;
      }
      v22 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v22 + 24) = v16;
    }
    else
    {
      if ( v18 != -1073741130 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20, v19);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdError(v20, v19);
    }
    WdLogEvent5_WdError(v22);
LABEL_45:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v29);
    return v7;
  }
  return 3221225485LL;
}
