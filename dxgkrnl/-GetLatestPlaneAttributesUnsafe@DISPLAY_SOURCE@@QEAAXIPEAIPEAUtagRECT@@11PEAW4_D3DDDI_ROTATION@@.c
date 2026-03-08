/*
 * XREFs of ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C02B8C58
 * Callers:
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0221C6C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C031F540 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C022030E (-GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        enum _D3DDDI_ROTATION *a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *a8,
        enum D3DDDI_COLOR_SPACE_TYPE *a9,
        unsigned int *a10)
{
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9611LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9611LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, a2);
  if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
  {
    GetPlaneConfigState(LatestPlaneConfigInternal, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  else
  {
    *a3 = 0;
    *(_QWORD *)&a4->left = 0LL;
    *(_QWORD *)&a4->right = 0LL;
    *(_QWORD *)&a5->left = 0LL;
    *(_QWORD *)&a5->right = 0LL;
    *(_QWORD *)&a6->left = 0LL;
    *(_QWORD *)&a6->right = 0LL;
    *a7 = D3DDDI_ROTATION_IDENTITY;
    *a8 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
    *a9 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
    *a10 = 0;
  }
}
