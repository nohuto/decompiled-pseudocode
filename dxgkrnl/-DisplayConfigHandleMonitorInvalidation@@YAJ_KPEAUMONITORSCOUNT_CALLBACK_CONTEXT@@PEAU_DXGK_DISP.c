/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C01C24B0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F751C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A5F14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01C1894 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4F24 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v6; // rbx
  struct DXGGLOBAL *Global; // rax
  signed int v8; // eax
  unsigned int v9; // r14d
  struct DXGGLOBAL *v10; // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v14; // rdx
  struct DXGGLOBAL *v15; // rax
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // [rsp+50h] [rbp-9h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18; // [rsp+58h] [rbp-1h]
  _BYTE v19[48]; // [rsp+60h] [rbp+7h] BYREF
  char v20; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(a1) )
    return 0LL;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)v19);
  v6 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)v19;
  if ( a2 )
    v6 = a2;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v6 + 26);
  LODWORD(v17) = 4;
  if ( (a1 & 2) != 0 )
  {
    *((_DWORD *)v6 + 8) |= 4u;
    BYTE4(v17) = 0;
  }
  else
  {
    BYTE4(v17) = 1;
  }
  v18 = a3;
  *(_WORD *)((char *)&v17 + 5) = 0;
  HIBYTE(v17) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
         (__int64)&v17,
         4);
  v9 = v8;
  if ( (a1 & 1) == 0 )
  {
    WdLogSingleEntry2(4LL, a1, v8);
    return v9;
  }
  *(_QWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 0;
  v10 = DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v10,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v6,
          4);
  v9 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(3LL, v11);
    return v9;
  }
  if ( *(_DWORD *)v6 )
  {
    if ( *(_DWORD *)v6 > 1u )
    {
      if ( *((_DWORD *)v6 + 2) )
        *((_DWORD *)v6 + 8) |= 2u;
      v17 = 5LL;
      v18 = a3;
      v16 = DXGGLOBAL::GetGlobal();
      return (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                             (__int64)v16,
                             (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                             (__int64)&v17,
                             4);
    }
    return v9;
  }
  if ( *((_DWORD *)v6 + 2) )
  {
    WdLogSingleEntry1(1LL, 2662LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"io_pOptionalEmergencyContext->m_NumEmergencyMonitors == 0",
      2662LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)v6 + 8) |= 1u;
  v14 = *((unsigned int *)v6 + 5);
  if ( (_DWORD)v14 != -1 )
  {
    LOBYTE(v12) = *((_BYTE *)v6 + 30);
    v20 = 0;
    v9 = DisplayConfigHelperCreateSimulateMonitor((char *)v6 + 12, v14, 5LL, v12, &v20, a3);
    if ( (v9 & 0x80000000) == 0 && v20 )
    {
      if ( (a1 & 4) != 0 )
      {
        *((_BYTE *)v6 + 26) = 0;
LABEL_26:
        v15 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v15,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          4);
      }
    }
    else if ( (a1 & 4) != 0 )
    {
      goto LABEL_26;
    }
    return v9;
  }
  WdLogSingleEntry1(3LL, a1);
  return 3223191554LL;
}
