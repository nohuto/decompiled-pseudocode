/*
 * XREFs of ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800
 * Callers:
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01DE304 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C0207C44 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C021428C (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0216A04 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0325A2C (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C0327860 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C03284BC (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1C032CB68 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1C032D01C (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C032D410 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C032D758 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C032D884 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C032F0F0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C032FBA4 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C03522BC (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C03527E8 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C03555B8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

void *__fastcall AUTOEXPANDALLOCATION::GetBuffer(const void **this, unsigned int a2, int a3)
{
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  void *v6; // rax
  void *v7; // rdi
  void *result; // rax
  int v9; // ecx
  void *v10; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 3) < a2 )
  {
    if ( a3 )
    {
      v10 = (void *)operator new[](a2, 0x674D444Fu, 256LL);
      v7 = v10;
      if ( v10 )
      {
        memmove(v10, *this, *((unsigned int *)this + 2));
        operator delete((void *)*this);
        goto LABEL_7;
      }
      operator delete((void *)*this);
    }
    else
    {
      v5 = (void *)*this;
      if ( v5 )
        operator delete(v5);
      v6 = (void *)operator new[](v4, 0x674D444Fu, 256LL);
      v7 = v6;
      if ( v6 )
      {
        memset(v6, 0, v4);
LABEL_7:
        *this = v7;
        result = v7;
        v9 = v7 != 0LL ? v4 : 0;
        *((_DWORD *)this + 2) = v9;
        *((_DWORD *)this + 3) = v9;
        return result;
      }
    }
    v7 = 0LL;
    goto LABEL_7;
  }
  result = (void *)*this;
  *((_DWORD *)this + 2) = a2;
  return result;
}
