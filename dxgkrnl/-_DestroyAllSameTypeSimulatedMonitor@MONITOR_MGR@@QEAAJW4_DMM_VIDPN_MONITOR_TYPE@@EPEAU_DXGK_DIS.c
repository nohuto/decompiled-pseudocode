/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017F340
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C01DAAD8 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C01E4828 (MonitorAdapterPowerChange.c)
 * Callees:
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0004750 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C00048E4 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C00092F8 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E77F0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C02019C0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C03A97C8 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03C323C (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03C5474 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 *v22; // rcx
  DXGMONITOR *v23; // rsi
  unsigned int v24; // ebx
  int v25; // eax
  DXGFASTMUTEX *v26; // [rsp+30h] [rbp-38h] BYREF
  DXGFASTMUTEX *v27; // [rsp+38h] [rbp-30h] BYREF
  DXGFASTMUTEX *v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-20h] BYREF
  __int64 **v30; // [rsp+50h] [rbp-18h]
  DXGFASTMUTEX *v31; // [rsp+B0h] [rbp+48h] BYREF
  int v32; // [rsp+B8h] [rbp+50h]
  char v33; // [rsp+C0h] [rbp+58h]
  __int64 v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v4 = a4;
  if ( a2 == 1 )
    WdLogSingleEntry0(1LL);
  v30 = &v29;
  v29 = (__int64 *)&v29;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v31, (struct DXGFASTMUTEX *)(a1 + 80));
  v6 = a1 + 40;
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 == a1 + 40 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v7 - 152;
    if ( !v7 )
      v8 = 0LL;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v31);
  if ( v8 )
  {
    while ( 1 )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v26, (struct DXGFASTMUTEX *)(a1 + 80));
      v9 = (__int64 *)(v8 + 152);
      v10 = *(_QWORD *)(v8 + 152);
      if ( v10 == v6 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = v10 - 152;
        if ( !v10 )
          v11 = 0LL;
      }
      MUTEX_LOCK::~MUTEX_LOCK(&v26);
      if ( v32 == *(_DWORD *)(v8 + 312) )
      {
        if ( !v33
          || (v14 = *(_QWORD *)(a1 + 24),
              v15 = *(_DWORD *)(v8 + 180),
              LOBYTE(v31) = 0,
              DmmIsTargetInClientVidPnTopology(*(void *const *)(v14 + 16), v15, (unsigned __int8 *)&v31) >= 0)
          && !(_BYTE)v31 )
        {
          MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v27, (struct DXGFASTMUTEX *)(a1 + 80));
          v16 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 )
            goto LABEL_38;
          v17 = *(__int64 ***)(v8 + 160);
          if ( *v17 != v9 )
            goto LABEL_38;
          *v17 = v16;
          v16[1] = (__int64)v17;
          v18 = v30;
          if ( *v30 != (__int64 *)&v29 )
            goto LABEL_38;
          *(_QWORD *)(v8 + 160) = v30;
          *v9 = (__int64)&v29;
          *v18 = v9;
          v30 = (__int64 **)(v8 + 152);
          MUTEX_LOCK::~MUTEX_LOCK(&v27);
          v19 = *(_QWORD *)(v8 + 320);
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 312) != 1 )
              WdLogSingleEntry0(1LL);
            MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v28, (struct DXGFASTMUTEX *)(a1 + 80));
            v20 = *(_QWORD *)v6;
            v21 = (_QWORD *)(*(_QWORD *)(v8 + 320) + 152LL);
            if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
              goto LABEL_38;
            *v21 = v20;
            v21[1] = v6;
            *(_QWORD *)(v20 + 8) = v21;
            *(_QWORD *)v6 = v21;
            MUTEX_LOCK::~MUTEX_LOCK(&v28);
            if ( MONITOR_MGR::_UsingCCDNameForTTM
              || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)(*(_QWORD *)(v8 + 200) + 40LL)) )
            {
              DXGMONITOR::_CreateTtmDevice(*(DXGMONITOR **)(v8 + 320));
            }
          }
          else
          {
            --*(_DWORD *)(a1 + 32);
          }
        }
      }
      v8 = v11;
      if ( !v11 )
      {
        v4 = v34;
        break;
      }
    }
  }
  while ( 1 )
  {
    v12 = v29;
    if ( v29 == (__int64 *)&v29 )
      break;
    if ( (__int64 **)v29[1] != &v29 || (v22 = (__int64 *)*v29, *(__int64 **)(*v29 + 8) != v29) )
LABEL_38:
      __fastfail(3u);
    v29 = (__int64 *)*v29;
    v23 = (DXGMONITOR *)(v12 - 19);
    if ( !v12 )
      v23 = 0LL;
    v22[1] = (__int64)&v29;
    if ( !v23 )
      break;
    v24 = *((_DWORD *)v23 + 45);
    MONITOR_MGR::_IssueMonitorEvent(a1 + 8, v24, 0LL, 2LL, *((_DWORD *)v23 + 78), v4);
    DXGMONITOR::_SetAttachedPhysicalMonitor(v23, 0LL);
    v25 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v23);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826, v24, v25, 0LL);
  }
  return 0LL;
}
