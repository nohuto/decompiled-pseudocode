/*
 * XREFs of ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02960E8
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02257B0 (DxgkPollDisplayChildrenInternal.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C0298750 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C0148338 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     DxgkSetPresenterViewMode @ 0x1C016CCE0 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02967CC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297518 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02979B4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkHandleMonitorEvent(struct _LUID a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v18; // rax
  char v19; // dl
  unsigned int CurrentProcessSessionId; // eax
  struct _LUID v22; // [rsp+30h] [rbp-91h] BYREF
  int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h]
  int v25; // [rsp+40h] [rbp-81h]
  char v26; // [rsp+50h] [rbp-71h]
  __int16 v27; // [rsp+51h] [rbp-70h]
  char v28; // [rsp+53h] [rbp-6Eh]
  char v29; // [rsp+54h] [rbp-6Dh]
  char v30; // [rsp+55h] [rbp-6Ch]
  char v31; // [rsp+57h] [rbp-6Ah]
  int v32; // [rsp+58h] [rbp-69h]
  unsigned __int64 v33; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v34[2]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v35; // [rsp+78h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-39h]
  __int64 v37; // [rsp+90h] [rbp-31h]
  int v38; // [rsp+98h] [rbp-29h]
  int v39; // [rsp+9Ch] [rbp-25h]
  unsigned int v40; // [rsp+A0h] [rbp-21h]
  unsigned int v41; // [rsp+A4h] [rbp-1Dh]
  __int64 v42; // [rsp+A8h] [rbp-19h]
  struct _LUID v43; // [rsp+B0h] [rbp-11h]
  unsigned int v44; // [rsp+B8h] [rbp-9h]
  int v45; // [rsp+BCh] [rbp-5h]
  unsigned int v46; // [rsp+C0h] [rbp-1h]
  int v47; // [rsp+C4h] [rbp+3h]
  int v48; // [rsp+C8h] [rbp+7h]
  int v49; // [rsp+CCh] [rbp+Bh]

  v22 = a1;
  v7 = a2;
  v8 = 0;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)&v23, a2);
  if ( a3 == 11 )
    v27 = 0;
  else
    *(_BYTE *)a5 |= 2u;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_11;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_11:
      DxgkSetPresenterViewMode(0LL, 0LL);
      v13 = HandleMonitorDepartureCase(&v23, &v22, v7, a3, a4, a5 + 24);
      goto LABEL_25;
    }
    v14 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_24;
    v14 = a3 == 3;
  }
  if ( v14 )
  {
LABEL_24:
    DxgkSetPresenterViewMode(0LL, 0LL);
    v13 = HandleMonitorArrival(&v23, &v22, v7, a3, a4, a5 + 24);
    goto LABEL_25;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v15 + 24) = 4329LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v13 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v23,
            &v22,
            v7,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a5 + 24));
LABEL_25:
    v8 = v13;
    if ( v13 < 0 )
      goto LABEL_38;
  }
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v10, v9, v11, v12) && !v24 )
  {
    Global = DXGGLOBAL::GetGlobal(v16, v9);
    v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v22, &v33);
    if ( v18 )
    {
      *(_BYTE *)a5 ^= (*(_BYTE *)a5 ^ (*(_BYTE *)a5 | (16 * *((_BYTE *)v18 + 2576)))) & 0x10;
      DXGADAPTER::ReleaseReference(v18);
    }
  }
  if ( (!a3 || a3 == 11) && a4 == 1 )
    v19 = 32;
  else
    v19 = 0;
  LOBYTE(v9) = *(_BYTE *)a5 | v19 & 0x20;
  v14 = v26 == 0;
  *(_BYTE *)a5 = v9;
  if ( v14 )
  {
    *(_BYTE *)(a5 + 1) = *(_BYTE *)(a5 + 1) & 0xFE | (a3 == 9);
  }
  else
  {
    LOBYTE(v9) = (v31 != 0 ? 0x40 : 0) | (v9 ^ (v9 ^ (v9 | (HIBYTE(v27) != 0 ? 4 : 0))) & 4) & 0xBF | (v30 != 0 ? 8 : 0);
    *(_BYTE *)a5 = v9;
  }
LABEL_38:
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
  v44 = v7;
  v46 = v8;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, CurrentProcessSessionId);
  return v8;
}
