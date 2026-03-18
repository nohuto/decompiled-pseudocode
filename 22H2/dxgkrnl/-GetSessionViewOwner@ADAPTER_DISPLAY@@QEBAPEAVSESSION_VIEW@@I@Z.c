/*
 * XREFs of ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C019D414
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0178EE0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01944D0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C019ADDC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C019B9B4 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01AB50C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x1C01DC820 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C021D210 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02BE17C (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

struct SESSION_VIEW *__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx
  _DWORD **v6; // rdi

  v2 = 0LL;
  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 38LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"VidPnSourceId < m_NumVidPnSources", 38LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = 4000 * v3;
  v6 = *(_DWORD ***)(4000 * v3 + *((_QWORD *)this + 16) + 48);
  if ( !v6 )
    return 0LL;
  if ( **v6 == (unsigned int)PsGetCurrentProcessSessionId(v5) )
    return (struct SESSION_VIEW *)v6;
  return (struct SESSION_VIEW *)v2;
}
