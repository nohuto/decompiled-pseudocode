/*
 * XREFs of ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1C01A9CE0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01AE1E0 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x1C01D3110 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01D7F30 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02B925C (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct SESSION_VIEW *__fastcall ADAPTER_DISPLAY::GetSessionViewOwner(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rcx
  _DWORD **v8; // rdi

  v4 = 0LL;
  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 37LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"VidPnSourceId < m_NumVidPnSources", 37LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 4000 * v5;
  v8 = *(_DWORD ***)(4000 * v5 + *((_QWORD *)this + 16) + 48);
  if ( !v8 )
    return 0LL;
  if ( **v8 == (unsigned int)PsGetCurrentProcessSessionId(v7, a2, a3, a4) )
    return (struct SESSION_VIEW *)v8;
  return (struct SESSION_VIEW *)v4;
}
