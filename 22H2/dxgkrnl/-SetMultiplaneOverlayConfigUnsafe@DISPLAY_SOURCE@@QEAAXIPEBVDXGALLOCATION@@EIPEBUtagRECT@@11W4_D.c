/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C0171C7C
 * Callers:
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0172028 (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01C35A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0323F80 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0324D4C (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C0172568 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C01C3530 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01E95B4 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  unsigned int v19; // r11d
  struct _DISPLAY_PLANE_CONFIG *v20; // rdi
  const struct tagRECT *v21; // r9
  enum _D3DDDIFORMAT v22; // ecx
  int v23; // ecx

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9404LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9404LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a4 && !a3 )
  {
    WdLogSingleEntry1(1LL, 9405LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!Enabled || pAllocation != NULL", 9405LL, 0LL, 0LL, 0LL, 0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, a2);
  v19 = a12;
  v20 = LatestPlaneConfigInternal;
  v21 = a6;
  if ( LatestPlaneConfigInternal && PlaneConfigsMatch(LatestPlaneConfigInternal, a4, a5, a6, a7, a8, a9, a10, a11, a12) )
  {
    if ( *((_DWORD *)this + 940) <= a2 )
    {
      WdLogSingleEntry1(1LL, 9413LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaxPlanesUsed > PlaneIndex", 9413LL, 0LL, 0LL, 0LL, 0LL);
    }
    v23 = *((_DWORD *)v20 + 2);
    *(_QWORD *)v20 = a3;
    *((_DWORD *)v20 + 2) = (2 * (a4 & 1)) | a4 & 1 | v23 & 0xFFFFFFFC;
  }
  else
  {
    v22 = a13;
    if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v20 )
      v22 = *((_DWORD *)v20 + 18);
    DISPLAY_SOURCE::CreateNewPlaneConfig(this, a2, a3, a4, a5, v21, a7, a8, a9, a10, a11, v19, v22, a14);
    if ( a2 >= *((_DWORD *)this + 940) )
      *((_DWORD *)this + 940) = a2 + 1;
    if ( a2 )
    {
      if ( a4 )
        *((_BYTE *)this + 3768) = 1;
    }
  }
}
