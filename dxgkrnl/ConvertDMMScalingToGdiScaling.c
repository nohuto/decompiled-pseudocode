/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C016CC80
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016BD68 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C016CB80 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C02FC6CC (_PopulateDisplayModeFromPresentPath.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(int a1, _DWORD *a2)
{
  unsigned int v3; // esi

  v3 = 1;
  switch ( a1 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      *a2 = 2;
      return v3;
    case 3:
      *a2 = 1;
      return v3;
    case 4:
    case 5:
    case 255:
LABEL_2:
      *a2 = 0;
      break;
    default:
      WdLogSingleEntry1(3LL, a1);
      if ( a1 == 253 )
      {
        WdLogSingleEntry1(1LL, 156LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
          156LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *a2 = 0;
      return 0;
  }
  return v3;
}
