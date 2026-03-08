/*
 * XREFs of ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1C01689F8
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C016BD68 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C01713D8 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03BFB74 (MonitorIsMonitorAndLinkHDRCapable.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v8; // ecx
  __int64 v9; // [rsp+50h] [rbp-29h] BYREF
  int v10; // [rsp+58h] [rbp-21h]
  const wchar_t *v11; // [rsp+60h] [rbp-19h]
  int *v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  int *v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+90h] [rbp+17h]
  __int128 v18; // [rsp+98h] [rbp+1Fh]
  __int128 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]
  int v21; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( !g_OSTestSigningEnabled )
    goto LABEL_4;
  v21 = 0;
  v9 = 0LL;
  v11 = L"HighColor";
  v10 = 288;
  v12 = &v21;
  v13 = 0x4000000;
  v14 = &v21;
  v15 = 4;
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Dwm", &v9, 0LL, 0LL) < 0
    || (unsigned int)(v21 - 1) > 4 )
  {
LABEL_4:
    if ( a2 != 12 )
    {
      if ( a2 != 30 )
      {
        if ( a2 == 33 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 436LL);
          if ( (v8 & 0x200) == 0 && (v8 & 8) == 0 )
          {
            WdLogSingleEntry1(1LL, 3089LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"this->GetAdapter()->IsXBoxOneDevice() || this->GetAdapter()->IsSoftGPU()",
              3089LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        return v3;
      }
      return 3;
    }
    v21 = 0;
    if ( (int)MonitorIsMonitorAndLinkHDRCapable(a3, &v21) < 0 || (v21 & 1) == 0 )
      return v3;
    return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
  }
  switch ( v21 )
  {
    case 1:
      return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
    case 2:
      return 1;
    case 3:
      return 2;
    case 5:
      return 3;
  }
  return v3;
}
