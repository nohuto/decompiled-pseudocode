/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03D1E68
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03D28F8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0232260 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C035A3F8 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03D0D34 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 */

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
  UINT DirtyRectCount; // r14d
  UINT MoveRectCount; // esi
  bool v14; // zf
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int SetMetaDataInternal; // eax
  D3DKMT_PRESENT_RGNS *v17; // rax
  UINT v18; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  struct DXGSWAPCHAIN **v25; // rcx
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v26; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v27[10]; // [rsp+80h] [rbp-49h] BYREF

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
      v26.hNtSwapChain = 0LL;
      *(_QWORD *)&v26.DataCopied = 0LL;
      DirtyRectCount = 0;
      v26.bGlobalMetaData = 0;
      MoveRectCount = 0;
      v14 = (a3->Flags.Value & 0x400000) == 0;
      v26.bProducer = 1;
      v26.bSetMetaData = 1;
      if ( !v14 )
      {
        pPresentRegions = a3->pPresentRegions;
        if ( pPresentRegions )
        {
          MoveRectCount = pPresentRegions->MoveRectCount;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( MoveRectCount )
          {
            v26.pBuffer = (PVOID)pPresentRegions->pMoveRects;
            v26.BufferSize = 24 * MoveRectCount;
            SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v10, &v26, 16 * (DirtyRectCount + 5), 0);
            if ( SetMetaDataInternal < 0 )
              WdLogSingleEntry1(3LL, SetMetaDataInternal);
          }
          v17 = a3->pPresentRegions;
          v18 = v17->DirtyRectCount;
          if ( v17->DirtyRectCount )
          {
            pDirtyRects = (RECT *)v17->pDirtyRects;
            v26.BufferSize = 16 * v18;
            v20 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
            v26.pBuffer = pDirtyRects;
            v21 = SwapChainGetSetMetaDataInternal(*v20, &v26, 0x50u, 0);
            if ( v21 < 0 )
              WdLogSingleEntry1(3LL, v21);
          }
        }
      }
      memset(v27, 0, sizeof(v27));
      v27[3] = 0LL;
      LODWORD(v27[6]) = 0;
      HIDWORD(v27[1]) = a3->PresentCount;
      v27[2] = __PAIR64__(MoveRectCount, DirtyRectCount);
      if ( a2 )
      {
        v22 = *((_QWORD *)a2 + 2);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 1880);
          if ( v23 )
          {
            v24 = PopulateHDRMetadataFromDisplay(
                    a3->VidPnSourceId,
                    *(struct ADAPTER_DISPLAY **)(v23 + 2920),
                    (struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v27[6] + 4),
                    (enum _D3DDDI_HDR_METADATA_TYPE *)&v27[6]);
            if ( v24 < 0 )
              WdLogSingleEntry1(3LL, v24);
          }
        }
      }
      v25 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
      v26.pBuffer = (char *)&v27[1] + 4;
      v26.BufferSize = 68;
      result = SwapChainGetSetMetaDataInternal(*v25, &v26, 0xCu, 0);
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
    WdLogSingleEntry1(2LL, 1476LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1476LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
