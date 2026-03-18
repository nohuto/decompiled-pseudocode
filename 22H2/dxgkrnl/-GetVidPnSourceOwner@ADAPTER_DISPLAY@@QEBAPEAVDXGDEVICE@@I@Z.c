/*
 * XREFs of ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0016E64
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0186B84 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0193C40 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01952F8 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01C35A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B6DB0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02BC74C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02C22DC (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D08B0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02D31C0 (DxgkNeedToEnableCddPrimary.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02F8A74 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C032DDA0 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwner(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v5; // edx
  int v6; // r8d

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6261LL);
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
          6261LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(struct DXGDEVICE **)(4000 * v3 + *((_QWORD *)this + 16) + 728);
}
