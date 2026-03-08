/*
 * XREFs of ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01762FC
 * Callers:
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01730CC (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C017669C (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C0041178 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C017648C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@EPEAU_DISPLAY_PLANE_CONFIG_STATE@@@Z @ 0x1C01764A8 (-SetPlaneConfigState@@YAXEPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIP.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPlaneConfig(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        char a14)
{
  __int64 v17; // rdi
  int NextConfigIndex; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8

  v17 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9844LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9844LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * v17 + 286));
  v20 = *(_DWORD *)(v19 + 1148);
  v21 = NextConfigIndex;
  *(_DWORD *)(v19 + 1144) = NextConfigIndex;
  if ( NextConfigIndex == v20 || v20 == -1 )
  {
    v22 = GetNextConfigIndex(v20);
    *(_DWORD *)(v19 + 1148) = v22;
  }
  SetPlaneConfigState(
    a4,
    a3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    (struct _DISPLAY_PLANE_CONFIG_STATE *)(80 * v21 + v19 + 1152));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      v24,
      v23,
      v25,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      *((_DWORD *)this + 4),
      v17,
      a4,
      v25,
      a6->left,
      a6->top,
      a6->right,
      a6->bottom,
      a7->left,
      a7->top,
      a7->right,
      a7->bottom,
      a8->left,
      a8->top,
      a8->right,
      a8->bottom,
      a10,
      a11,
      a12);
}
