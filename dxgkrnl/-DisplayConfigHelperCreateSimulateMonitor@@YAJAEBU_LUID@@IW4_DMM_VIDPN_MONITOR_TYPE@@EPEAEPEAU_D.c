/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4F24
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F751C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C03A97C8 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03BF180 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  int v32; // [rsp+20h] [rbp-108h]
  int v33; // [rsp+30h] [rbp-F8h]
  bool v34; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v36[144]; // [rsp+50h] [rbp-D8h] BYREF

  v8 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v35);
  v16 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v11, 0LL);
    v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v36, (unsigned int)(v19 + 2));
    IsTargetInClientVidPnTopology = v20;
    if ( v20 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v16, v8, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
          IsTargetInClientVidPnTopology = 0;
          v31[3] = v8;
          v31[4] = v16;
          v31[5] = *((int *)v16 + 102);
          v31[6] = *((unsigned int *)v16 + 101);
        }
      }
      v34 = 0;
      if ( a4 || (int)DmmIsTargetForceable(v16, v8, &v34, a3) >= 0 && v34 )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v16, v32, a4, v33, a6);
    }
    else
    {
      if ( v20 == -1073741130 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v26[3] = v16;
        v26[4] = *((int *)v16 + 102);
        v26[5] = *((unsigned int *)v16 + 101);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v16);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
