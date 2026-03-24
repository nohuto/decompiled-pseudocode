/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020D3AC
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b___ @ 0x1C0036678 (DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b___.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C01486C4 (-DxgIsRemoteSession@@YAHXZ.c)
 *     _lambda_d09497a32bb74d6babe0eba3071d053b_::operator() @ 0x1C020BB7C (_lambda_d09497a32bb74d6babe0eba3071d053b_--operator().c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020D5EC (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226DB8 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 __fastcall DxgkpProcessBddFallbackRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  DXGSESSIONMGR *v26; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _LUID v32; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // esi
  struct DXGADAPTER **v38; // rbx
  int v39; // [rsp+20h] [rbp-39h] BYREF
  struct _LUID v40; // [rsp+28h] [rbp-31h] BYREF
  _DWORD v41[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 *v42; // [rsp+38h] [rbp-21h]
  __int128 v43; // [rsp+40h] [rbp-19h] BYREF
  bool *v44; // [rsp+50h] [rbp-9h]
  int *v45; // [rsp+58h] [rbp-1h]
  int *v46[4]; // [rsp+60h] [rbp+7h] BYREF
  char v47; // [rsp+80h] [rbp+27h]
  bool v48; // [rsp+C8h] [rbp+6Fh] BYREF
  int v49; // [rsp+D0h] [rbp+77h] BYREF
  int v50; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(a1, a2) + 304322) )
    return 0LL;
  v5 = WdLogNewEntry5_WdAssertion(v3, v2);
  *(_QWORD *)(v5 + 24) = 11997LL;
  WdLogEvent5_WdAssertion(v5);
  v39 = 0;
  v6 = -1073741823;
  v49 = -1073741823;
  v50 = 1;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 105);
  v12 = v9 == *((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 104);
  *(_QWORD *)&v43 = &v49;
  *((_QWORD *)&v43 + 1) = &v50;
  v48 = v12;
  v44 = &v48;
  v45 = &v39;
  DXGKCALLONEXIT__lambda_d09497a32bb74d6babe0eba3071d053b_((__int64)v46, &v43);
  if ( (unsigned int)DxgIsRemoteSession(v14, v13, v15, v16) )
  {
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v18, v17, v19, v20) )
    {
      v23 = 2;
      v39 = 2;
      v26 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v22, v21) + 102);
      if ( v26 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25, v24);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v26, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession )
        *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 0;
      v29 = *((_QWORD *)DXGGLOBAL::GetGlobal(v25, v24) + 103);
      if ( !v29 )
        goto LABEL_21;
      v32 = *(struct _LUID *)(v29 + 316);
      v41[0] = 0;
      v40 = v32;
      v42 = &v43;
      v41[1] = 1;
      Global = DXGGLOBAL::GetGlobal(v31, v30);
      v23 = 4;
      v49 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpAdapterRefCallback,
              (__int64)v41,
              4);
      if ( v49 < 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v36 + 24) = 12070LL;
        WdLogEvent5_WdAssertion(v36);
        v6 = v49;
LABEL_22:
        v50 = v23;
        goto LABEL_7;
      }
      if ( !v41[0] )
      {
        v23 = 6;
LABEL_21:
        v6 = -1073741275;
        v49 = -1073741275;
        goto LABEL_22;
      }
      v37 = 0;
      do
      {
        v38 = (struct DXGADAPTER **)&v42[v37];
        v49 = DxgkSetIndirectDisplayRenderAdapter(*v38, &v40);
        DXGADAPTER::ReleaseReference(*v38);
        ++v37;
      }
      while ( v37 < v41[0] );
    }
    else
    {
      v39 = 3;
      if ( v48 )
        goto LABEL_5;
    }
    v50 = 7;
    goto LABEL_6;
  }
  v39 = 1;
LABEL_5:
  v6 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v50);
LABEL_6:
  v49 = v6;
LABEL_7:
  if ( v47 )
    lambda_d09497a32bb74d6babe0eba3071d053b_::operator()(v46);
  return v6;
}
