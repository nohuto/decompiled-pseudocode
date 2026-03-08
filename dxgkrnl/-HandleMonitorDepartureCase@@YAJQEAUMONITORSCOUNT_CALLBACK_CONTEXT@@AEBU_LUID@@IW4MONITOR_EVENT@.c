/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F50BC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01BAF14 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01C24B0 (DxgkInvalidateMonitorConnections.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C3C80 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02F7B6C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C03A97C8 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03B6CD4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C03B7A88 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v8; // r13
  struct DXGGLOBAL *Global; // rax
  int v10; // eax
  __int64 v11; // rdi
  DXGGLOBAL *v13; // rax
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // rbx
  unsigned int v16; // ebx
  int v17; // eax
  struct DXGGLOBAL *v18; // rax
  int v19; // eax
  int v20; // eax
  struct CCD_BTL *v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  int PathDescriptorByTarget; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  int v29; // eax
  unsigned __int8 v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+54h] [rbp-ACh]
  int v32; // [rsp+5Ch] [rbp-A4h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v34[9]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+BCh] [rbp-44h]
  int v36; // [rsp+C0h] [rbp-40h]

  v32 = a4;
  v33 = a6;
  v8 = a3;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            4);
    LODWORD(v11) = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
      return (unsigned int)v11;
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  if ( a5 == 5 )
  {
    v13 = DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(v13, *a2, (unsigned __int64 *)&v33);
    v15 = v14;
    if ( v14 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v14, 0LL);
      DXGADAPTER::ReleaseReference(v15);
      v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v30[0] = 0;
        if ( DmmIsTargetInClientVidPnTopology(v15, v8, v30) >= 0 && !v30[0] )
          *(_BYTE *)(a1 + 26) = 0;
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v34);
        *(_BYTE *)(a1 + 25) = 0;
        v18 = DXGGLOBAL::GetGlobal();
        v19 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)v18,
                (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
                a1,
                4);
        LODWORD(v11) = v19;
        if ( v19 >= 0 )
          LODWORD(v11) = 0;
        else
          WdLogSingleEntry1(3LL, v19);
      }
      else
      {
        WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, v17);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, NtStatus = 0x%I64x.",
          a2->HighPart,
          a2->LowPart,
          v11,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      return (unsigned int)v11;
    }
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      a2->HighPart,
      a2->LowPart,
      -1073741811LL,
      0LL,
      0LL);
  }
  else
  {
    v20 = DxgkInvalidateMonitorConnections(2LL);
    if ( v20 < 0 )
      WdLogSingleEntry1(4LL, v20);
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v8) < 0 )
      WdLogSingleEntry3(3LL, a2->HighPart, a2->LowPart, v8);
    if ( *(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v34, 8u, 0);
      v21 = CCD_BTL::Global();
      v22 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v34, (struct CCD_BTL *)((char *)v21 + 8));
      LODWORD(v31) = v22;
      if ( v22 < 0 )
      {
        v28 = v22;
        WdLogSingleEntry5(2LL, v22, a2->HighPart, a2->LowPart, v8, v32);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Ta"
                    "rgetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
          v28,
          a2->HighPart,
          a2->LowPart,
          v8,
          v32);
        DxgkLogCodePointPacket(0x3Du, v31, 0, 0, (__int64)*a2);
      }
      else
      {
        v23 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 478);
        if ( v23 > 1 )
        {
          WdLogSingleEntry1(3LL, 3202LL);
          v31 = 0LL;
          DxgkLogCodePointPacket(0x52u, v23, 0, 0, 0LL);
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v34);
          return 0LL;
        }
        if ( *(_DWORD *)(a1 + 20) != -1 )
        {
          *(_BYTE *)(a1 + 25) = 0;
          PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v34, a2, v8, 0LL);
          if ( PathDescriptorByTarget == -1073741275 )
          {
            v35 = 1;
            v36 = 4;
            v25 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v34, 0, 0);
            if ( v25 < 0 || (v25 = CCD_TOPOLOGY::Persist(v34, 0LL, v26, v27), v25 < 0) )
            {
              WdLogSingleEntry1(3LL, v25);
            }
            else
            {
              *(_DWORD *)(a1 + 32) |= 0x20u;
              *(_BYTE *)(a1 + 26) = 0;
              *(_BYTE *)(a1 + 31) = 0;
            }
          }
          else if ( PathDescriptorByTarget < 0 )
          {
            WdLogSingleEntry2(3LL, PathDescriptorByTarget, v8);
          }
        }
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v34);
    }
    if ( *(_BYTE *)(a1 + 30) )
    {
      *(_BYTE *)(a1 + 25) = 0;
      *(_DWORD *)(a1 + 20) = v8;
    }
    v29 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v33);
    v16 = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry1(4LL, v29);
      v16 = 0;
    }
    WdLogSingleEntry1(4LL, v16);
  }
  return v16;
}
