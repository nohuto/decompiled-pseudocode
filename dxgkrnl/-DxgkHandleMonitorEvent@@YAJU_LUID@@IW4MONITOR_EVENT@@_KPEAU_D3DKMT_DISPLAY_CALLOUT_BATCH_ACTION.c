/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F50BC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02CF1D0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02F83B0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C00561C4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A5F14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01C1894 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C01E5660 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F5F2C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F751C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  int v8; // r12d
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r14
  bool v15; // zf
  int v16; // eax
  DXGGLOBAL *v17; // rax
  struct DXGADAPTER *v18; // rax
  char v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h]
  int v25; // [rsp+60h] [rbp-A0h]
  char v26; // [rsp+70h] [rbp-90h]
  __int16 v27; // [rsp+71h] [rbp-8Fh]
  char v28; // [rsp+73h] [rbp-8Dh]
  char v29; // [rsp+74h] [rbp-8Ch]
  char v30; // [rsp+75h] [rbp-8Bh]
  char v31; // [rsp+77h] [rbp-89h]
  int v32; // [rsp+78h] [rbp-88h]
  unsigned __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  unsigned int v40; // [rsp+C0h] [rbp-40h]
  unsigned int v41; // [rsp+C4h] [rbp-3Ch]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  struct _LUID v43; // [rsp+D0h] [rbp-30h]
  unsigned int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  int v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E4h] [rbp-1Ch]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]

  v22 = a1;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v23);
  if ( a3 == 12 )
  {
    v27 = 0;
    goto LABEL_27;
  }
  *a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_10;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_10:
      DxgkSetPresenterViewMode(0, 0);
      v8 = HandleMonitorDepartureCase(&v23, &v22, a2, a3, a4, a5 + 24);
      Global = DXGGLOBAL::GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305192, 1u, *(_QWORD *)&v22);
      goto LABEL_26;
    }
    v14 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24);
    v15 = a4 == 1;
  }
  else
  {
    v14 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24);
    if ( !a3 && (a4 == 1 || a4 == 4 || a4 == 3) || a3 == 1 && !a4 )
      goto LABEL_24;
    v15 = a3 == 3;
  }
  if ( v15 )
  {
LABEL_24:
    DxgkSetPresenterViewMode(0, 0);
    v16 = HandleMonitorArrival(&v23, &v22, a2, a3, a4, v14);
LABEL_25:
    v8 = v16;
LABEL_26:
    if ( v8 < 0 )
      goto LABEL_39;
    goto LABEL_27;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      WdLogSingleEntry1(1LL, 4369LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Parameter == (ULONG_PTR) 0", 4369LL, 0LL, 0LL, 0LL, 0LL);
    }
    v16 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v23, &v22, a2, v14);
    goto LABEL_25;
  }
LABEL_27:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v9) && !v24 )
  {
    v17 = DXGGLOBAL::GetGlobal();
    v18 = DXGGLOBAL::ReferenceAdapterByLuid(v17, v22, &v33);
    if ( v18 )
    {
      *a5 ^= (*a5 ^ (*a5 | (16 * *(_BYTE *)(*((_QWORD *)v18 + 365) + 24LL)))) & 0x10;
      DXGADAPTER::ReleaseReference(v18);
    }
  }
  if ( (!a3 || a3 == 12) && a4 == 1 )
    v19 = 32;
  else
    v19 = 0;
  LOBYTE(v12) = *a5 | v19 & 0x20;
  v15 = v26 == 0;
  *a5 = v12;
  if ( v15 )
  {
    a5[1] = a5[1] & 0xFE | (a3 == 9);
  }
  else
  {
    LOBYTE(v11) = v12 ^ (v12 ^ ((HIBYTE(v27) != 0 ? 4 : 0) | v12)) & 4;
    LOBYTE(v12) = (v31 != 0 ? 0x40 : 0) | v11 & 0xBF | (v30 != 0 ? 8 : 0);
    *a5 = v12;
  }
LABEL_39:
  v38 = 0;
  v37 = 0LL;
  v39 = 0;
  v36 = 0LL;
  v34[0] = 2;
  v34[1] = 96;
  v41 = a3;
  v43 = v22;
  v45 = v32;
  v47 = v23;
  v48 = v25;
  v49 = v24;
  v35 = 0LL;
  v40 = HIBYTE(v27) & 1 | (4 * (v28 & 1 | (2 * (v29 & 1))));
  v42 = a4;
  v44 = a2;
  v46 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v11, v12, v13);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, CurrentProcessSessionId);
  return (unsigned int)v8;
}
