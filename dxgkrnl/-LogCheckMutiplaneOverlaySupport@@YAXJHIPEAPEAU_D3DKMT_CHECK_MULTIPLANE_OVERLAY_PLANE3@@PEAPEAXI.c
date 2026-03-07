void __fastcall LogCheckMutiplaneOverlaySupport(
        D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes,
        __int64 a2,
        unsigned int a3,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a4,
        void **a5,
        unsigned int a6,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a7,
        struct ADAPTER_RENDER *a8)
{
  __int64 v9; // rdi
  int v10; // r12d
  char v11; // r15
  float v12; // xmm2_4
  char v13; // bp
  int v14; // r14d
  int v15; // r10d
  __int64 v16; // r8
  float v17; // xmm3_4
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r11
  __int64 v19; // rbx
  float v20; // xmm1_4
  __int64 v22; // rbp
  int *v23; // rcx
  void **v24; // rbx
  signed __int64 v25; // rsi
  __int64 v26; // r8
  unsigned int *v27; // r14
  _DWORD *v28; // rdx
  int v29; // [rsp+28h] [rbp-C0h]

  v9 = a3;
  v10 = a2;
  v11 = (char)pPlaneAttributes;
  if ( bTracingEnabled )
  {
    v12 = FLOAT_1_0;
    v13 = 1;
    v14 = 1;
    v15 = 1;
    v16 = 1LL;
    v17 = FLOAT_1_0;
    if ( (_DWORD)v9 )
    {
      v18 = a4;
      v19 = (unsigned int)v9;
      do
      {
        pPlaneAttributes = (*v18)->pPlaneAttributes;
        a2 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        v20 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left)
            / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        if ( v20 <= v12 )
        {
          if ( v17 > v20 )
          {
            v15 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
            v16 = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
            v17 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left) / (float)v15;
          }
        }
        else
        {
          v13 = LOBYTE(pPlaneAttributes->SrcRect.right) - LOBYTE(pPlaneAttributes->SrcRect.left);
          v14 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
          v12 = (float)v14 / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    if ( v15 == 1 )
    {
      v16 = (unsigned int)v14;
      LOBYTE(v15) = v13;
    }
    if ( v10 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqqq_EtwWriteTransfer(
          (__int64)pPlaneAttributes,
          &EventCheckMultiPlaneOverlaySuccess,
          v16,
          (*a4)->VidPnSourceId,
          v9,
          v29,
          v15,
          v16,
          0);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqqq_EtwWriteTransfer(
        (__int64)pPlaneAttributes,
        &EventCheckMultiPlaneOverlayFail,
        v16,
        (*a4)->VidPnSourceId,
        v9,
        v29,
        v15,
        v16,
        v11);
    }
    if ( a6 )
    {
      v22 = a6;
      do
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v23 = (int *)*a7;
          McTemplateK0qqddddddddq_EtwWriteTransfer(
            (__int64)v23,
            a2,
            v16,
            *v23,
            v23[1],
            v23[2],
            v23[4],
            v23[3],
            v23[5],
            v23[6],
            v23[8],
            v23[7],
            v23[9],
            v23[10]);
        }
        ++a7;
        --v22;
      }
      while ( v22 );
    }
    if ( (_DWORD)v9 )
    {
      v24 = a5;
      v25 = (char *)a4 - (char *)a5;
      do
      {
        v26 = 0LL;
        v27 = *(unsigned int **)((char *)v24 + v25);
        if ( *v24 )
          v26 = (unsigned int)IsYUVAllocation(*v24, a8);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v28 = (_DWORD *)*((_QWORD *)v27 + 3);
          McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer(
            *v27,
            (__int64)v28,
            v26,
            v27[4],
            v26,
            *v28,
            v28[1],
            v28[3],
            v28[2],
            v28[4],
            v28[5],
            v28[7],
            v28[6],
            v28[8],
            v28[9],
            v28[11],
            v28[10],
            v28[12],
            v28[13],
            v28[14],
            v28[18],
            v28[19],
            *v27,
            v28[20]);
        }
        ++v24;
        --v9;
      }
      while ( v9 );
    }
  }
}
