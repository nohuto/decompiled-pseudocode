/*
 * XREFs of ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0172AF0 (DxgkSetDisplayMode.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0195464 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     DxgkGetDisplayModeList @ 0x1C01A7B20 (DxgkGetDisplayModeList.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01F16B0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01F1940 (DxgkCheckMonitorPowerState.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B6DB0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02C0E14 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0 (DxgkGetSharedPrimaryHandle.c)
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F6AE4 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02FA4C4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C03BA8C4 (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsPartOfDesktop(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v5; // edx
  int v6; // r8d

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 5901LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v5,
          v6,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          5901LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_BYTE *)(4000 * v3 + *((_QWORD *)this + 16) + 762);
}
