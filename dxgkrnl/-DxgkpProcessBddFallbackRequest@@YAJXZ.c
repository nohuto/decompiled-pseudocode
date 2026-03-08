/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B22B0
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___ @ 0x1C0024404 (DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___.c)
 *     _DXGKCALLONEXIT__lambda_ac7822d55a092b4fdea37af52b75bf92____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C002445C (_DXGKCALLONEXIT__lambda_ac7822d55a092b4fdea37af52b75bf92____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A5F14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C01C3D28 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02B258C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D0E78 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 DxgkpProcessBddFallbackRequest(void)
{
  unsigned int v0; // edi
  struct DXGGLOBAL *Global; // rbx
  bool v2; // zf
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rax
  struct DXGGLOBAL *v14; // rax
  unsigned int v15; // esi
  struct DXGADAPTER **v16; // rbx
  int v17; // [rsp+50h] [rbp-49h] BYREF
  struct _LUID v18; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v19[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v20; // [rsp+68h] [rbp-31h]
  __int128 v21; // [rsp+70h] [rbp-29h] BYREF
  bool *v22; // [rsp+80h] [rbp-19h]
  int *v23; // [rsp+88h] [rbp-11h]
  _BYTE v24[96]; // [rsp+90h] [rbp-9h] BYREF
  bool v25; // [rsp+108h] [rbp+6Fh] BYREF
  int v26; // [rsp+110h] [rbp+77h] BYREF
  int v27; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304482)
    && !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304480)
    && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(1LL, 12883LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Investigate why DWM failed to initialize, contact basevid",
      12883LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v0 = -1073741823;
    v26 = 1;
    v27 = -1073741823;
    v17 = 0;
    Global = DXGGLOBAL::GetGlobal();
    v2 = *((_QWORD *)Global + 121) == *((_QWORD *)DXGGLOBAL::GetGlobal() + 120);
    *(_QWORD *)&v21 = &v27;
    *((_QWORD *)&v21 + 1) = &v26;
    v25 = v2;
    v22 = &v25;
    v23 = &v17;
    DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v24, &v21);
    v3 = 2;
    if ( ((dword_1C013BA00 - 10) & 0xFFFFFFF9) == 0 && dword_1C013BA00 != 12 )
    {
      v0 = -1073741637;
LABEL_18:
      v27 = v0;
LABEL_21:
      v26 = v3;
      goto LABEL_11;
    }
    if ( !(unsigned int)DxgIsRemoteSession((unsigned int)dword_1C013BA00) )
    {
      v17 = 1;
LABEL_9:
      v0 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v26);
LABEL_10:
      v27 = v0;
LABEL_11:
      DXGKCALLONEXIT__lambda_ac7822d55a092b4fdea37af52b75bf92____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v24);
      return v0;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v4) )
    {
      v17 = 2;
      v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v8 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
          *((_BYTE *)SessionDataForSpecifiedSession + 18505) = 0;
      }
      v13 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 119);
      if ( !v13 )
      {
        v0 = -1073741275;
        goto LABEL_18;
      }
      v18 = *(struct _LUID *)(v13 + 404);
      v20 = &v21;
      v19[0] = 0;
      v19[1] = 1;
      v14 = DXGGLOBAL::GetGlobal();
      v3 = 4;
      v27 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)v14,
              (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpAdapterRefCallback,
              (__int64)v19,
              4);
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(1LL, 12968LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"As we do not support more than one remote ID adapter we would not expect the search to fail",
          12968LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v0 = v27;
        goto LABEL_21;
      }
      if ( !v19[0] )
      {
        v0 = -1073741275;
        v26 = 6;
        goto LABEL_10;
      }
      v15 = 0;
      do
      {
        v16 = (struct DXGADAPTER **)&v20[v15];
        v27 = DxgkSetIndirectDisplayRenderAdapter(*v16, &v18);
        DXGADAPTER::ReleaseReference(*v16);
        ++v15;
      }
      while ( v15 < v19[0] );
    }
    else
    {
      v17 = 3;
      if ( v25 )
        goto LABEL_9;
    }
    v26 = 7;
    goto LABEL_10;
  }
  return 0LL;
}
