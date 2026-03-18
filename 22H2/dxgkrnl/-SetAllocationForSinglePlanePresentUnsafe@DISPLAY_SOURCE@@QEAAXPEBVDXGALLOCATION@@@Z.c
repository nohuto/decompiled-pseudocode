/*
 * XREFs of ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0172028
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C01879D4 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C0171C7C (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C0172908 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0172A8C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe(
        DISPLAY_SOURCE *this,
        const struct DXGALLOCATION *a2)
{
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9352LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9352LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
    this,
    0,
    a2,
    1u,
    0,
    (const struct tagRECT *)this + 43,
    (const struct tagRECT *)this + 43,
    (const struct tagRECT *)this + 43,
    D3DDDI_ROTATION_IDENTITY,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
    0,
    D3DDDIFMT_UNKNOWN,
    0);
  DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(this, 0);
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
}
