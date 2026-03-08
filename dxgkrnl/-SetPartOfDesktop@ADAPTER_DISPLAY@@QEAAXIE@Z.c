/*
 * XREFs of ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01D767C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C01D7400 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0015894 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01D779C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPartOfDesktop(PERESOURCE **this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  PERESOURCE *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int CurrentProcessSessionId; // eax
  volatile signed __int32 *SessionDataForSpecifiedSession; // rax
  _BYTE v15[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 10711LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 10711LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 10712LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      10712LL,
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
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v10 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
      SessionDataForSpecifiedSession = (volatile signed __int32 *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                    v10,
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 76), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  DISPLAY_SOURCE::ClearAllDisplayState((DISPLAY_SOURCE *)&this[16][v7]);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
