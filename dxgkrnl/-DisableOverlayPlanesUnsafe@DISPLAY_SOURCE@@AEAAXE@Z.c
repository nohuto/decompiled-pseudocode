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
