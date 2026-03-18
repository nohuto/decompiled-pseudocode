/*
 * XREFs of DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0167B20 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0168160 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0186080 (DxgkDisplayOnOff.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0186620 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0188C5C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0193D3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01E00A0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02EA660 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C018871C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01AB278 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkGetCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        char a5)
{
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  unsigned int v11; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_ADAPTER *SessionAdapterFromLuid; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax

  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v10
    && (v11 = PsGetCurrentProcessSessionId(v9),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11)) != 0LL) )
  {
    if ( *((_QWORD *)SessionDataForSpecifiedSession + 2332) )
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
      if ( SessionAdapterFromLuid )
        return SESSION_ADAPTER::GetCddDeviceAndContext(SessionAdapterFromLuid, a2, a3, a4, a5);
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
        a1->HighPart,
        a1->LowPart,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
      WdLogSingleEntry3(2LL, CurrentProcessSessionId, -1073741811LL, 2LL);
      v17 = PsGetCurrentProcessSessionId(v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x does not have DXGPROCESS for CSRSS.exe, returning 0x%I64x.",
        v17,
        -1073741811LL,
        2LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v18 = PsGetCurrentProcessSessionId(v9);
    WdLogSingleEntry3(2LL, v18, -1073741811LL, 1LL);
    v20 = PsGetCurrentProcessSessionId(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v20,
      -1073741811LL,
      1LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
