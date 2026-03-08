/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B3464 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02B4808 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0009C00 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 */

_DWORD *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, _DWORD *a2)
{
  bool v4; // zf
  int v5; // eax
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // eax

  *a2 = *((_DWORD *)this + 109) & 4 | (*((_QWORD *)this + 366) != 0LL) | (8 * (*((_DWORD *)this + 109) & 1)) | (*((_DWORD *)this + 109) >> 2) & 0x40 | (*((_BYTE *)this + 209) != 0 ? 0x80 : 0) | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (*((_QWORD *)this + 365) != 0LL ? 2 : 0);
  v4 = (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() == 0;
  v5 = *((_DWORD *)this + 638);
  if ( v4 )
  {
    if ( v5 < 8704 || *((_DWORD *)this + 524) < 0x7007u || !*((_QWORD *)this + 144) )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v5 < 8704 || *((_DWORD *)this + 524) < 0x7007u || !*((_QWORD *)this + 144) )
    goto LABEL_12;
  if ( *((_QWORD *)this + 366) )
  {
LABEL_10:
    if ( *((_QWORD *)this + 128) )
      goto LABEL_11;
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
LABEL_11:
  v6 = 1;
LABEL_13:
  v7 = *((_DWORD *)this + 698) >> 3;
  v8 = (v6 << 9) & 0xFFFFFBCF | *a2 & 0xFFFFF9CF | (16
                                                  * (*((_BYTE *)this + 2759) & 1 | (2
                                                                                  * ((16 * (*((_DWORD *)this + 698) & 2)) | *((_BYTE *)this + 2764) & 1))));
  *a2 = v8;
  if ( (v7 & 1) != 0 )
  {
    v9 = *((_DWORD *)this + 571);
    *a2 = v8 | 0x800;
    if ( (v9 & 0x80u) == 0 && !DXGADAPTER::IsGpuVirtualAddressingSupported(this) )
      *a2 |= 0x1000u;
  }
  return a2;
}
