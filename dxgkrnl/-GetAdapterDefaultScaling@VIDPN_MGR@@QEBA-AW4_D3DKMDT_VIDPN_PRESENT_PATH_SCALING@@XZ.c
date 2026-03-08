/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01DD5A0
 * Callers:
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     BmlPinPathContentScaling @ 0x1C016DEBC (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C016DF60 (BmlInternalTryPinningScaling.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01C5508 (_EnforceDriverModelScalingPolicy.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C03A8880 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  result = 255LL;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2820LL) >= 1105 )
    return 4LL;
  return result;
}
