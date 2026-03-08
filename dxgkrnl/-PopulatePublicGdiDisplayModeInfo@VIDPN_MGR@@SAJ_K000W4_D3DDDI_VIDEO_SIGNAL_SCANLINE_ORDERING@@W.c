/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C016CB80
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C016B6B0 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C016C838 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C016CC80 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        DWORD a1,
        DWORD a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a6,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  DWORD v12; // ebx
  int v13; // r10d
  __int64 v14; // r11
  DWORD v15; // eax
  int v16; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  __int64 v21; // rbx

  v12 = 1;
  if ( !a8 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  a8->dmBitsPerPel = a1;
  v13 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a6);
  if ( ((v13 - 1) & 0xFFFFFFFD) != 0 )
  {
    v15 = a3;
  }
  else
  {
    v15 = a2;
    a2 = a3;
  }
  a8->dmPelsHeight = a2;
  a8->dmPelsWidth = v15;
  v16 = v13 - 1;
  if ( !v16 )
    goto LABEL_6;
  v18 = v16 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 251 )
        {
          v21 = v14;
          WdLogSingleEntry1(2LL, v14);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid rotation %I64d", v21, 0LL, 0LL, 0LL, 0LL);
        }
LABEL_6:
        v12 = 0;
        goto LABEL_7;
      }
      v12 = 3;
    }
    else
    {
      v12 = 2;
    }
  }
LABEL_7:
  a8->dmDisplayOrientation = v12;
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput);
  a8->dmDisplayFrequency = a4;
  if ( a5 == D3DDDI_VSSLO_PROGRESSIVE )
  {
    a8->dmDisplayFlags = 0;
LABEL_9:
    a8->dmFields = 544997504;
    return 0LL;
  }
  if ( (unsigned int)(a5 - 2) < 2 )
  {
    a8->dmDisplayFlags |= 2u;
    goto LABEL_9;
  }
  WdLogSingleEntry1(2LL, a5);
  return 3223192402LL;
}
