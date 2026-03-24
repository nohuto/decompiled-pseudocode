/*
 * XREFs of MonitorSetAppOverride @ 0x1C02F4D98
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0183F54 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0185724 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C019CF40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02F6C80 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F930C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetAppOverride(
        DXGADAPTER **this,
        struct HDXGMONITOR__ *a2,
        GUID *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  int v21; // r15d
  int v22; // ecx
  int TtmDevice; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int updated; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _FAST_MUTEX *v34; // rbx
  __int64 v35; // rax
  char v37; // [rsp+30h] [rbp-61h]
  struct DXGMONITOR *v38; // [rsp+38h] [rbp-59h] BYREF
  GUID Guid; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v40[10]; // [rsp+50h] [rbp-41h] BYREF

  if ( !a2 )
  {
    LODWORD(v8) = -1073741811;
    goto LABEL_25;
  }
  v38 = 0LL;
  LODWORD(v8) = MONITOR_MGR::_GetMonitorFromHandle(a2, &v38);
  if ( (int)v8 < 0 )
    goto LABEL_25;
  v11 = v38;
  if ( !v38 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 0;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (struct _ERESOURCE *)((char *)v11 + 296);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v11 + 296), 1u);
  Guid = *a3;
  LODWORD(v8) = DXGMONITOR::_SetAppOverride(v11, &Guid, a4, a5);
  if ( (int)v8 < 0 )
  {
LABEL_9:
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  v18 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v18 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  if ( !v18 )
  {
    Global = DXGGLOBAL::GetGlobal(v17, v16);
    DXGGLOBAL::RecordFeatureUsage((__int64)Global, 12, 1);
    v21 = *((_DWORD *)v11 + 148);
    v37 = *((_BYTE *)v11 + 596);
    v22 = a4 != 0 ? 2 : 0;
    if ( v21 != v22 )
    {
      *((_DWORD *)v11 + 148) = v22;
      *((_BYTE *)v11 + 596) = 0;
      v13 = 1;
      if ( a4 )
      {
        DXGMONITOR::_DestroyTtmDevice(v11);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v11, v20);
        v8 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_BYTE *)v11 + 596) = v37;
          *((_DWORD *)v11 + 148) = v21;
          v26 = WdLogNewEntry5_WdError(v25, v24);
          *(_QWORD *)(v26 + 24) = v8;
          WdLogEvent5_WdError(v26);
          goto LABEL_9;
        }
      }
      LOBYTE(v24) = a4 != 0;
      updated = DXGMONITOR::_UpdateLinkInfo(v11, v24);
      v30 = updated;
      if ( updated < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v31 + 24) = v30;
        WdLogEvent5_WdError(v31);
      }
    }
  }
  ExReleaseResourceLite(v15);
  KeLeaveCriticalRegion();
  if ( v13 )
  {
    v33 = *((_QWORD *)*this + 337);
    v34 = *(struct _FAST_MUTEX **)(v33 + 96);
    if ( v34 )
    {
      memset(v40, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v40[1]);
      v40[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v40[3]) = 67;
      LOBYTE(v40[6]) = -1;
      LODWORD(v40[4]) = *((_DWORD *)v38 + 148);
      MONITOR_MGR::_IssueMonitorEvent(
        v34,
        *((unsigned int *)v38 + 11),
        10,
        (*((_DWORD *)v38 + 148) != 0) + 1LL,
        *((_DWORD *)v38 + 108),
        (__int64)v40);
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v35 + 24) = *this;
      WdLogEvent5_WdError(v35);
    }
  }
  LODWORD(v8) = 0;
LABEL_25:
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  return (unsigned int)v8;
}
