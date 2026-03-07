char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        unsigned int a1,
        unsigned int a2,
        struct CIFlipPresentHistoryTokenData *a3,
        char a4,
        struct ADAPTER_RENDER *a5,
        struct ADAPTER_DISPLAY *a6,
        struct tagRECT *a7)
{
  struct ADAPTER_DISPLAY *v7; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  struct tagRECT *v11; // rbx
  const struct DXGALLOCATION *PlaneAllocationUnsafe; // r15
  __int128 v14; // xmm6
  __int64 v15; // rax
  enum D3DDDI_COLOR_SPACE_TYPE v16; // edi
  const struct tagRECT *v17; // r14
  const struct tagRECT *v18; // r8
  char v19; // di
  unsigned int v20[28]; // [rsp+78h] [rbp-61h] BYREF
  int v21; // [rsp+128h] [rbp+4Fh] BYREF
  char v22; // [rsp+140h] [rbp+67h]

  v22 = a4;
  v7 = a6;
  v9 = a1;
  v10 = a2;
  v11 = (struct tagRECT *)(*((_QWORD *)a6 + 16) + 4000LL * a1);
  PlaneAllocationUnsafe = DISPLAY_SOURCE::GetPlaneAllocationUnsafe((DISPLAY_SOURCE *)v11, a2);
  if ( PlaneAllocationUnsafe )
  {
    memset(v20, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      v20,
      (struct tagRECT *)&v20[1],
      (struct tagRECT *)&v20[5],
      (struct tagRECT *)&v20[9],
      (enum _D3DDDI_ROTATION *)&v20[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v20[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v20[18],
      &v20[20]);
    v14 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 8LL))(a3);
    v15 = *(_QWORD *)a3;
    *(_OWORD *)&v20[1] = v14;
    v16 = (*(unsigned int (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(v15 + 112))(a3);
    v17 = a7;
    v20[18] = v16;
    if ( v22 )
    {
      v18 = a7;
      *a7 = v11[43];
      *(_OWORD *)&v20[5] = v14;
      *(_OWORD *)&v20[9] = v14;
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v11, (const struct tagRECT *)&v20[1], v18);
    }
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      PlaneAllocationUnsafe,
      v20[0],
      (const struct tagRECT *)&v20[1],
      (const struct tagRECT *)&v20[5],
      (const struct tagRECT *)&v20[9],
      (enum _D3DDDI_ROTATION)v20[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v20[14],
      v16,
      v20[20]);
    v19 = 0;
    v21 = 0;
    LODWORD(a6) = 0;
    CheckMultiPlaneOverlayInternal3(v9, a5, v7, &v21, (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)&a6);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v11, v10);
    if ( v21 )
    {
      v19 = 1;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        (DISPLAY_SOURCE *)v11,
        v10,
        PlaneAllocationUnsafe,
        1u,
        v20[0],
        (const struct tagRECT *)&v20[1],
        (const struct tagRECT *)&v20[5],
        (const struct tagRECT *)&v20[9],
        (enum _D3DDDI_ROTATION)v20[13],
        (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v20[14],
        (enum D3DDDI_COLOR_SPACE_TYPE)v20[18],
        v20[20],
        D3DDDIFMT_FORCE_UINT|0x80000000,
        1u);
      if ( v22 )
      {
        DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v11);
        DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v11, 1, (const struct tagRECT *)&v20[1], v17);
      }
    }
    return v19;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)v9, (unsigned int)v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failing CheckAndUpdateMultiPlaneOverlayFromInternalState because allocation is NULL, VidPnSourceId: (0x%I"
                "64x), Plane: (0x%I64x)",
      v9,
      v10,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
