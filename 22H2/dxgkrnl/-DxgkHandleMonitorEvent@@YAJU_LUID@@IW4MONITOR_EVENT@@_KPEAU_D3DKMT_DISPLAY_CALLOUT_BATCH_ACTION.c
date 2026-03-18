/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F9EEC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02D3F50 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02FD1E0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C0057064 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01841B4 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01AC934 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01B6388 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C01F3F80 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAD5C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FBEA0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FC34C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, unsigned int a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  int v8; // r12d
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // r14
  bool v12; // zf
  int v13; // eax
  DXGGLOBAL *v14; // rax
  struct DXGADAPTER *v15; // rax
  char v16; // r8
  char v17; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h]
  int v23; // [rsp+60h] [rbp-A0h]
  char v24; // [rsp+70h] [rbp-90h]
  __int16 v25; // [rsp+71h] [rbp-8Fh]
  char v26; // [rsp+73h] [rbp-8Dh]
  char v27; // [rsp+74h] [rbp-8Ch]
  char v28; // [rsp+75h] [rbp-8Bh]
  char v29; // [rsp+77h] [rbp-89h]
  int v30; // [rsp+78h] [rbp-88h]
  unsigned __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v32[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  unsigned int v38; // [rsp+C0h] [rbp-40h]
  unsigned int v39; // [rsp+C4h] [rbp-3Ch]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  struct _LUID v41; // [rsp+D0h] [rbp-30h]
  unsigned int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E4h] [rbp-1Ch]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]

  v20 = a1;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v21);
  if ( a3 == 12 )
  {
    v25 = 0;
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
      v8 = HandleMonitorDepartureCase(&v21, &v20, a2, a3, a4, a5 + 24);
      Global = DXGGLOBAL::GetGlobal();
      RAPID_HPD_MANAGER::ExtendExistingHPDPeriod((__int64)Global + 305192, 1u, *(_QWORD *)&v20);
      goto LABEL_26;
    }
    v11 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24);
    v12 = a4 == 1;
  }
  else
  {
    v11 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24);
    if ( !a3 && (a4 == 1 || a4 == 4 || a4 == 3) || a3 == 1 && !a4 )
      goto LABEL_24;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_24:
    DxgkSetPresenterViewMode(0, 0);
    v13 = HandleMonitorArrival(&v21, &v20, a2, a3, a4, v11);
LABEL_25:
    v8 = v13;
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
    v13 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v21, &v20, a2, v11);
    goto LABEL_25;
  }
LABEL_27:
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v9) && !v22 )
  {
    v14 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(v14, v20, &v31);
    if ( v15 )
    {
      *a5 ^= (*a5 ^ (*a5 | (16 * *(_BYTE *)(*((_QWORD *)v15 + 365) + 24LL)))) & 0x10;
      DXGADAPTER::ReleaseReference(v15);
    }
  }
  if ( (!a3 || a3 == 12) && a4 == 1 )
    v16 = 32;
  else
    v16 = 0;
  v17 = *a5 | v16 & 0x20;
  v12 = v24 == 0;
  *a5 = v17;
  if ( v12 )
    a5[1] = a5[1] & 0xFE | (a3 == 9);
  else
    *a5 = (v29 != 0 ? 0x40 : 0) | (v17 ^ (v17 ^ ((HIBYTE(v25) != 0 ? 4 : 0) | v17)) & 4) & 0xBF | (v28 != 0 ? 8 : 0);
LABEL_39:
  v36 = 0;
  v35 = 0LL;
  v37 = 0;
  v34 = 0LL;
  v32[0] = 2;
  v32[1] = 96;
  v39 = a3;
  v41 = v20;
  v43 = v30;
  v45 = v21;
  v46 = v23;
  v47 = v22;
  v33 = 0LL;
  v38 = HIBYTE(v25) & 1 | (4 * (v26 & 1 | (2 * (v27 & 1))));
  v40 = a4;
  v42 = a2;
  v44 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, CurrentProcessSessionId);
  return (unsigned int)v8;
}
