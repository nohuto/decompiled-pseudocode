void __fastcall DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe(
        DISPLAY_SOURCE *this,
        const struct DXGALLOCATION *a2)
{
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9345LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9345LL,
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
