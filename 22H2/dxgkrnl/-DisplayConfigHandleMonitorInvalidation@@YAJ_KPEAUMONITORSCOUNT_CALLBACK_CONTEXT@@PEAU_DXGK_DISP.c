/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148220
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C01480C0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297518 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02979B4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C0148338 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295F50 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v9; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  struct DXGGLOBAL *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGGLOBAL *v28; // rax
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+38h] [rbp-38h]
  _BYTE v32[48]; // [rsp+40h] [rbp-30h] BYREF
  char v33; // [rsp+A8h] [rbp+38h] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(a1, (__int64)a2, (__int64)a3, a4) )
    return 0LL;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)v32);
  v9 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)v32;
  if ( a2 )
    v9 = a2;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v9 + 26);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v9 + 8) |= 4u;
  LODWORD(v30) = 4;
  v31 = a3;
  BYTE4(v30) = (a1 & 2) == 0;
  *(_WORD *)((char *)&v30 + 5) = 0;
  HIBYTE(v30) = 0;
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  v13 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
               (__int64)Global,
               (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
               (__int64)&v30,
               4);
  if ( (a1 & 1) == 0 )
  {
    v21 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v21 + 24) = a1;
    *(_QWORD *)(v21 + 32) = v13;
    WdLogEvent5_WdEvent(v21);
    return (unsigned int)v13;
  }
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = 0;
  v14 = DXGGLOBAL::GetGlobal(v12, v11);
  v15 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v14,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v9,
          4);
  v13 = v15;
  if ( v15 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v22 + 24) = v13;
    WdLogEvent5_WdWarning(v22);
    return (unsigned int)v13;
  }
  if ( *(_DWORD *)v9 )
  {
    if ( *(_DWORD *)v9 > 1u )
    {
      if ( *((_DWORD *)v9 + 2) )
        *((_DWORD *)v9 + 8) |= 2u;
      v30 = 5LL;
      v31 = a3;
      v29 = DXGGLOBAL::GetGlobal(v17, v16);
      LODWORD(v13) = DXGGLOBAL::IterateAdaptersWithCallback(
                       (__int64)v29,
                       (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                       (__int64)&v30,
                       4);
    }
    return (unsigned int)v13;
  }
  if ( *((_DWORD *)v9 + 2) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v23 + 24) = 2656LL;
    WdLogEvent5_WdAssertion(v23);
  }
  *((_DWORD *)v9 + 8) |= 1u;
  v24 = *((unsigned int *)v9 + 5);
  if ( (_DWORD)v24 != -1 )
  {
    LOBYTE(v19) = *((_BYTE *)v9 + 30);
    v33 = 0;
    LODWORD(v13) = DisplayConfigHelperCreateSimulateMonitor((char *)v9 + 12, v24, 5LL, v19, &v33, a3, v30, v31);
    if ( (int)v13 < 0 || !v33 )
    {
LABEL_24:
      if ( (a1 & 4) != 0 )
      {
        v28 = DXGGLOBAL::GetGlobal(v27, v26);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v28,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          4);
      }
      return (unsigned int)v13;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v9 + 26) = 0;
      goto LABEL_24;
    }
    return (unsigned int)v13;
  }
  v25 = WdLogNewEntry5_WdWarning(v17, v24, v18);
  *(_QWORD *)(v25 + 24) = a1;
  WdLogEvent5_WdWarning(v25);
  return 3223191554LL;
}
