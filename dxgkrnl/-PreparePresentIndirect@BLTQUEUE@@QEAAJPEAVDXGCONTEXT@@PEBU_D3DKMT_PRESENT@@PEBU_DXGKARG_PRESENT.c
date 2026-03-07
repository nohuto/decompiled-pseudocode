__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // rax
  struct DXGSWAPCHAIN *v10; // rcx
  __int64 result; // rax
  UINT DirtyRectCount; // r15d
  UINT MoveRectCount; // esi
  bool v14; // zf
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int SetMetaDataInternal; // eax
  D3DKMT_PRESENT_RGNS *v17; // rax
  UINT v18; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v20; // rcx
  int v21; // eax
  UINT PresentCount; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  struct DXGSWAPCHAIN **v26; // rcx
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v27; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v28[10]; // [rsp+80h] [rbp-49h] BYREF

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  if ( v6 )
  {
    v10 = *v6;
    if ( *((_DWORD *)*v6 + 58) )
    {
      return 0LL;
    }
    else
    {
      v27.hNtSwapChain = 0LL;
      *(_QWORD *)&v27.DataCopied = 0LL;
      DirtyRectCount = 0;
      v27.bGlobalMetaData = 0;
      MoveRectCount = 0;
      v14 = (a3->Flags.Value & 0x400000) == 0;
      v27.bProducer = 1;
      v27.bSetMetaData = 1;
      if ( !v14 )
      {
        pPresentRegions = a3->pPresentRegions;
        if ( pPresentRegions )
        {
          MoveRectCount = pPresentRegions->MoveRectCount;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( MoveRectCount )
          {
            v27.pBuffer = (PVOID)pPresentRegions->pMoveRects;
            v27.BufferSize = 24 * MoveRectCount;
            SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v10, &v27, 16 * (DirtyRectCount + 5), 0);
            if ( SetMetaDataInternal < 0 )
              WdLogSingleEntry1(3LL, SetMetaDataInternal);
          }
          v17 = a3->pPresentRegions;
          v18 = v17->DirtyRectCount;
          if ( v17->DirtyRectCount )
          {
            pDirtyRects = (RECT *)v17->pDirtyRects;
            v27.BufferSize = 16 * v18;
            v20 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
            v27.pBuffer = pDirtyRects;
            v21 = SwapChainGetSetMetaDataInternal(*v20, &v27, 0x50u, 0);
            if ( v21 < 0 )
              WdLogSingleEntry1(3LL, v21);
          }
        }
      }
      memset(v28, 0, sizeof(v28));
      v28[3] = 0LL;
      PresentCount = a3->PresentCount;
      LODWORD(v28[6]) = 0;
      HIDWORD(v28[1]) = PresentCount;
      v28[2] = __PAIR64__(MoveRectCount, DirtyRectCount);
      if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
      {
        if ( a2 )
        {
          v23 = *((_QWORD *)a2 + 2);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 1880);
            if ( v24 )
            {
              v25 = PopulateHDRMetadataFromDisplay(
                      a3->VidPnSourceId,
                      *(struct ADAPTER_DISPLAY **)(v24 + 2920),
                      (struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v28[6] + 4),
                      (enum _D3DDDI_HDR_METADATA_TYPE *)&v28[6]);
              if ( v25 < 0 )
                WdLogSingleEntry1(3LL, v25);
            }
          }
        }
      }
      v26 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
      v27.pBuffer = (char *)&v28[1] + 4;
      v27.BufferSize = 68;
      result = SwapChainGetSetMetaDataInternal(*v26, &v27, 0xCu, 0);
      if ( (int)result < 0 )
      {
        WdLogSingleEntry1(3LL, (int)result);
        result = 0LL;
      }
      if ( *((_DWORD *)this + 694) )
        return BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 1479LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1479LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
