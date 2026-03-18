/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0186EA0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0017140 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01E8DF4 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  PERESOURCE *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  unsigned int CurrentProcessSessionId; // eax
  volatile signed __int32 *SessionDataForSpecifiedSession; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 10718LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 10718LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 10719LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      10719LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = this[16];
  v7 = 500 * v4;
  if ( (BYTE2(v6[500 * v4 + 95]) != 0) == (a3 != 0) )
  {
    if ( a3 )
      return;
  }
  else
  {
    BYTE2(v6[v7 + 95]) = a3;
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v9 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
      SessionDataForSpecifiedSession = (volatile signed __int32 *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                    v9,
                                                                    CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( a3 )
    {
      _InterlockedIncrement(SessionDataForSpecifiedSession + 4630);
      return;
    }
    DXGSESSIONDATA::DecrementDesktopVidPnCount((DXGSESSIONDATA *)SessionDataForSpecifiedSession);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 76), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  DISPLAY_SOURCE::ClearAllDisplayState((DISPLAY_SOURCE *)&this[16][v7]);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
