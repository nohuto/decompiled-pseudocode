/*
 * XREFs of ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C017669C
 * Callers:
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C01737EC (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0176614 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C02B73F8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01762FC (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01767E8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0176820 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C02B6DC8 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(DISPLAY_SOURCE *this, char a2)
{
  unsigned int i; // edi
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct tagRECT v7; // [rsp+70h] [rbp-18h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9976LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9976LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 3768) || a2 )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    for ( i = a2 == 0; i < *((_DWORD *)this + 940); ++i )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
      {
        v7 = 0LL;
        DISPLAY_SOURCE::CreateNewPlaneConfig(
          this,
          i,
          0LL,
          0,
          0,
          &v7,
          &v7,
          &v7,
          D3DDDI_ROTATION_IDENTITY,
          D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
          D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
          0,
          D3DDDIFMT_UNKNOWN,
          0);
      }
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal )
    {
      if ( *(_BYTE *)LatestPostCompositionConfigInternal )
      {
        v7 = 0LL;
        DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v7, &v7);
      }
    }
    *((_BYTE *)this + 3768) = 0;
  }
}
