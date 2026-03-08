/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0353838
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0355968 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00583E4 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     McTemplateK0pqddpqqqqq_EtwWriteTransfer @ 0x1C0058784 (McTemplateK0pqddpqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqddpqqqqqq_EtwWriteTransfer @ 0x1C0058888 (McTemplateK0pqddpqqqqqq_EtwWriteTransfer.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C0353634 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C03555B8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v5; // r15
  BOOL bGlobalMetaData; // eax
  int bProducer; // ecx
  struct AUTOEXPANDALLOCATION *v11; // rdx
  UINT BufferSize; // r8d
  struct _KTHREAD **v13; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ecx
  char *v19; // rbx
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  size_t Size; // [rsp+20h] [rbp-81h]
  size_t Sizea; // [rsp+20h] [rbp-81h]
  size_t Sizeb; // [rsp+20h] [rbp-81h]
  void *v26; // [rsp+28h] [rbp-79h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v27; // [rsp+30h] [rbp-71h]
  __int64 v28; // [rsp+40h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v29; // [rsp+70h] [rbp-31h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v30; // [rsp+78h] [rbp-29h] BYREF
  int v31; // [rsp+80h] [rbp-21h] BYREF
  BOOL v32; // [rsp+84h] [rbp-1Dh]
  __int128 v33; // [rsp+88h] [rbp-19h]
  __int128 v34; // [rsp+98h] [rbp-9h]

  v5 = a3;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3090LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->pBuffer )
  {
    WdLogSingleEntry1(1LL, 3095LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pGetSetMetaData->pBuffer == nullptr",
      3095LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v5 && !a2->bSetMetaData )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Getting meta data with non-zero offset (0x%I64x) is not supported",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  bGlobalMetaData = a2->bGlobalMetaData;
  bProducer = a2->bProducer;
  v31 = bProducer;
  v32 = bGlobalMetaData;
  v33 = 0LL;
  v34 = 0LL;
  if ( bGlobalMetaData )
  {
    v11 = (DXGSWAPCHAIN *)((char *)this + 80);
    BufferSize = a2->BufferSize;
    v13 = (struct _KTHREAD **)this;
    if ( a2->bSetMetaData )
    {
      LODWORD(Size) = a2->BufferSize;
      LODWORD(v29) = 1;
      MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                           this,
                           v11,
                           (int *)&v29,
                           v5,
                           Size,
                           a4,
                           (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v31,
                           a5);
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v18 = -bProducer;
  v19 = (char *)this + (v18 != 0 ? 144LL : 96LL);
  v20 = *((_DWORD *)v19 + 10);
  if ( v20 == -1
    || (v29 = 0LL,
        v30 = 0LL,
        DXGSWAPCHAIN::GetClientSurfaceInfo(
          this,
          (DXGSWAPCHAIN *)((char *)this + (v18 != 0 ? 144LL : 96LL)),
          v20,
          &v29,
          &v30),
        *(_DWORD *)v29 != 1)
    || *((_DWORD *)v29 + 1) != *((_DWORD *)v19 + 7) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)v19 + 2), this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) does not own the swapchain 0x%I64x",
      *((_QWORD *)v19 + 2),
      (__int64)this,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !a2->bSetMetaData )
  {
    v11 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v29 + 2);
    BufferSize = a2->BufferSize;
    v13 = (struct _KTHREAD **)this;
LABEL_18:
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v13,
                         (const void **)v11,
                         BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v31,
                         a5,
                         &a2->DataCopied);
    goto LABEL_19;
  }
  LODWORD(Sizeb) = a2->BufferSize;
  MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                       this,
                       *((struct AUTOEXPANDALLOCATION **)v29 + 2),
                       (int *)v29 + 6,
                       v5,
                       Sizeb,
                       a4,
                       (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v31,
                       a5);
LABEL_19:
  v21 = MetaDataInternal;
  if ( a2->bSetMetaData )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    {
      LODWORD(v28) = DWORD2(v33);
      LODWORD(v27) = v32;
      LODWORD(v26) = v31;
      LODWORD(Sizea) = MetaDataInternal;
      McTemplateK0pqddpqqqqqq_EtwWriteTransfer(
        v16,
        v15,
        v17,
        this,
        Sizea,
        v26,
        v27,
        (_QWORD)v33,
        v28,
        HIDWORD(v33),
        (_DWORD)v34,
        DWORD1(v34),
        DWORD2(v34),
        HIDWORD(v34));
    }
  }
  else if ( a4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    LODWORD(v28) = HIDWORD(v33);
    LODWORD(v27) = v32;
    LODWORD(v26) = v31;
    LODWORD(Sizea) = MetaDataInternal;
    McTemplateK0pqddpqqqqq_EtwWriteTransfer(
      v16,
      v15,
      v17,
      this,
      Sizea,
      v26,
      v27,
      (_QWORD)v33,
      v28,
      (_DWORD)v34,
      DWORD1(v34),
      DWORD2(v34),
      HIDWORD(v34));
  }
  return v21;
}
