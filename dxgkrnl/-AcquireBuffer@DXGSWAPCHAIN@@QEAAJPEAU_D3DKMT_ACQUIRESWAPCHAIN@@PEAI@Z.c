/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C0355C20 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C0356160 (DxgkAcquireSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C00583E4 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C0058644 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq_EtwWriteTransfer @ 0x1C00589A0 (McTemplateK0pqddqq_EtwWriteTransfer.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0224A6A (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C03545C0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  struct _KTHREAD **v5; // rdi
  char *v6; // rbp
  _DWORD *v7; // r12
  int inserted; // ebx
  void *v9; // r8
  unsigned int v10; // r15d
  int v11; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v12; // r14
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v13; // r13
  unsigned int v14; // r9d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v21; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v22; // [rsp+98h] [rbp+10h] BYREF

  v3 = a3;
  v5 = this;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2668LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2668LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)v5 + (a2->bProducer ? 144LL : 96LL);
  v7 = v6 + 28;
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *v7 != 1 )
    {
      WdLogSingleEntry1(2LL, 2680LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Release before acquire is only supported for consumers",
        2680LL,
        0LL,
        0LL,
        0LL,
        0LL);
      inserted = -1073741637;
      goto LABEL_29;
    }
    this = (struct _KTHREAD **)v5[27];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_7;
    v9 = *(void **)&a2->AcquiredBufferIdx;
    *(_QWORD *)&a2->AcquiredBufferIdx = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v5, &a2->ReleaseInfo, v9, 1, 0);
    if ( inserted < 0 )
      goto LABEL_9;
  }
  if ( *((_DWORD *)v6 + 10) != -1 )
    goto LABEL_7;
  LODWORD(v21) = 0;
  if ( *v7 )
  {
    v11 = DXGFIXEDQUEUE::Remove(v5[27], (unsigned int *)&v21);
    inserted = v11;
    if ( v11 == -2147483622 )
      goto LABEL_7;
    if ( v11 < 0 )
    {
LABEL_9:
      DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v5, (bool)a2);
      goto LABEL_29;
    }
    v10 = (unsigned int)v21;
  }
  else
  {
    if ( !v3 )
      v3 = (unsigned int *)v5[28];
    v10 = *v3;
  }
  v21 = 0LL;
  v22 = 0LL;
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v5,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
    v10,
    &v21,
    &v22);
  v12 = v21;
  v13 = v22;
  if ( *((_DWORD *)v5 + 58) )
  {
    if ( !*(_BYTE *)v22 )
    {
      inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)v5, v21, 0, 0LL);
      if ( inserted < 0 )
        goto LABEL_9;
    }
  }
  if ( *(_DWORD *)v12 == 2 )
  {
    *(_DWORD *)v12 = 0;
    inserted = 0;
    goto LABEL_25;
  }
  inserted = 0;
  if ( *(_DWORD *)v12 )
  {
LABEL_7:
    inserted = 259;
    goto LABEL_29;
  }
LABEL_25:
  if ( *((_DWORD *)v12 + 1) != *v7 )
    goto LABEL_7;
  *(_DWORD *)v12 = 1;
  *((_DWORD *)v6 + 10) = v10;
  *((_DWORD *)v12 + 6) = 0;
  v14 = *((_DWORD *)v13 + 1);
  if ( v14 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)v5,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
                 v12,
                 v14);
    if ( inserted < 0 )
      goto LABEL_9;
  }
  LODWORD(a2[1].hNtSwapChain) = v10;
  *(_QWORD *)&a2[1].bReleaseBeforeAcquire = *((_QWORD *)v13 + 3);
  this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v12 + 2) + 8LL);
  LODWORD(a2[1].ReleaseInfo.hNtSwapChain) = (_DWORD)this;
LABEL_29:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    LODWORD(v20) = a2[1].ReleaseInfo.hNtSwapChain;
    LODWORD(v19) = a2[1].hNtSwapChain;
    LODWORD(v18) = a2->bReleaseBeforeAcquire;
    LODWORD(v17) = a2->bProducer;
    LODWORD(v16) = inserted;
    McTemplateK0pqddqq_EtwWriteTransfer((__int64)this, (__int64)a2, (__int64)a3, v5, v16, v17, v18, v19, v20);
  }
  return (unsigned int)inserted;
}
