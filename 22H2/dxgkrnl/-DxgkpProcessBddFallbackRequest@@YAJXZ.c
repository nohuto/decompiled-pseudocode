/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B7170
 * Callers:
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___ @ 0x1C0023F14 (DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___.c)
 *     _DXGKCALLONEXIT__lambda_4c48f59c4c84661c362f6a1166e0c309____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0023F68 (_DXGKCALLONEXIT__lambda_4c48f59c4c84661c362f6a1166e0c309____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C016C898 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01B6388 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02B744C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D5BF8 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 DxgkpProcessBddFallbackRequest(void)
{
  unsigned int v0; // edi
  struct DXGGLOBAL *Global; // rbx
  bool v2; // zf
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rax
  struct DXGGLOBAL *v11; // rax
  unsigned int v12; // esi
  struct DXGADAPTER **v13; // rbx
  int v14; // [rsp+50h] [rbp-49h] BYREF
  struct _LUID v15; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v16[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v17; // [rsp+68h] [rbp-31h]
  __int128 v18; // [rsp+70h] [rbp-29h] BYREF
  bool *v19; // [rsp+80h] [rbp-19h]
  int *v20; // [rsp+88h] [rbp-11h]
  _BYTE v21[96]; // [rsp+90h] [rbp-9h] BYREF
  bool v22; // [rsp+108h] [rbp+6Fh] BYREF
  int v23; // [rsp+110h] [rbp+77h] BYREF
  int v24; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304482)
    && !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304480)
    && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(1LL, 12796LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Investigate why DWM failed to initialize, contact basevid",
      12796LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v0 = -1073741823;
    v23 = 1;
    v24 = -1073741823;
    v14 = 0;
    Global = DXGGLOBAL::GetGlobal();
    v2 = *((_QWORD *)Global + 121) == *((_QWORD *)DXGGLOBAL::GetGlobal() + 120);
    *(_QWORD *)&v18 = &v24;
    *((_QWORD *)&v18 + 1) = &v23;
    v22 = v2;
    v19 = &v22;
    v20 = &v14;
    DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v21, &v18);
    v3 = 2;
    if ( ((dword_1C0140A00 - 10) & 0xFFFFFFF9) == 0 && dword_1C0140A00 != 12 )
    {
      v0 = -1073741637;
LABEL_18:
      v24 = v0;
LABEL_21:
      v23 = v3;
      goto LABEL_11;
    }
    if ( !(unsigned int)DxgIsRemoteSession() )
    {
      v14 = 1;
LABEL_9:
      v0 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v23);
LABEL_10:
      v24 = v0;
LABEL_11:
      DXGKCALLONEXIT__lambda_4c48f59c4c84661c362f6a1166e0c309____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v21);
      return v0;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v4) )
    {
      v14 = 2;
      v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v7 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
          *((_BYTE *)SessionDataForSpecifiedSession + 18505) = 0;
      }
      v10 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 119);
      if ( !v10 )
      {
        v0 = -1073741275;
        goto LABEL_18;
      }
      v15 = *(struct _LUID *)(v10 + 404);
      v17 = &v18;
      v16[0] = 0;
      v16[1] = 1;
      v11 = DXGGLOBAL::GetGlobal();
      v3 = 4;
      v24 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)v11,
              (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpAdapterRefCallback,
              (__int64)v16,
              4);
      if ( v24 < 0 )
      {
        WdLogSingleEntry1(1LL, 12881LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"As we do not support more than one remote ID adapter we would not expect the search to fail",
          12881LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v0 = v24;
        goto LABEL_21;
      }
      if ( !v16[0] )
      {
        v0 = -1073741275;
        v23 = 6;
        goto LABEL_10;
      }
      v12 = 0;
      do
      {
        v13 = (struct DXGADAPTER **)&v17[v12];
        v24 = DxgkSetIndirectDisplayRenderAdapter(*v13, &v15);
        DXGADAPTER::ReleaseReference(*v13);
        ++v12;
      }
      while ( v12 < v16[0] );
    }
    else
    {
      v14 = 3;
      if ( v22 )
        goto LABEL_9;
    }
    v23 = 7;
    goto LABEL_10;
  }
  return 0LL;
}
