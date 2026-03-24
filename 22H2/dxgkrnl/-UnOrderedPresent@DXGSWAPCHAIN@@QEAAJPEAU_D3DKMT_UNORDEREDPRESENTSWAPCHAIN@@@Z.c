/*
 * XREFs of ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C02AD1F4
 * Callers:
 *     DxgkUnOrderedPresentSwapChain @ 0x1C02AF840 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02AA584 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C02AB9C8 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C02AC574 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(struct _KTHREAD **this, struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v7; // rbx
  __int64 hNtSwapChain_low; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL bProducer; // ebx
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // r8
  int v34; // eax
  __int64 v35; // rax
  char v36; // [rsp+38h] [rbp-C0h]
  _BYTE v37[64]; // [rsp+40h] [rbp-B8h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN v38; // [rsp+80h] [rbp-78h] BYREF
  __int64 v39; // [rsp+100h] [rbp+8h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 2497LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 56) )
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = 2502LL;
    WdLogEvent5_WdError(v5);
    return 3221225659LL;
  }
  v7 = a2 + 1;
  hNtSwapChain_low = LODWORD(a2[1].hNtSwapChain);
  if ( (unsigned int)hNtSwapChain_low >= *((_DWORD *)this + 12) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = LODWORD(v7->hNtSwapChain);
    v10 = *((unsigned int *)this + 12);
LABEL_7:
    *(_QWORD *)(v9 + 32) = v10;
    WdLogEvent5_WdError(v9);
    DXGSWAPCHAIN::MarkAbandoned(this, v11, v12);
    return 3221225485LL;
  }
  v13 = (__int64)this[7] + 112 * hNtSwapChain_low;
  if ( !*(_DWORD *)(v13 + 8) )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = LODWORD(v7->hNtSwapChain);
    v10 = *(int *)(v13 + 8);
    goto LABEL_7;
  }
  if ( *(PVOID *)(v13 + 64) == a2->pMetaData )
  {
    memset(&v38, 0, 0x68uLL);
    v38.bProducer = a2->bProducer;
    v17 = DXGSWAPCHAIN::AcquireBuffer(this, &v38, (unsigned int *)&a2[1]);
    v7 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v17;
    if ( v17 >= 0 )
    {
      result = 259LL;
      if ( (_DWORD)v7 == 259 )
        return result;
      bProducer = a2->bProducer;
      if ( bProducer && a2->hNtPresentSurfaceHandle )
      {
        v39 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v19, v18, v20, v21);
        v28 = PsGetCurrentProcess(v25, v24, v26, v27);
        v36 = 1;
        v29 = ObDuplicateObject(v28, a2->hNtPresentSurfaceHandle, CurrentProcess, &v39, 0, 0, 6, v36);
        v7 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v29;
        if ( v29 < 0 )
        {
          v32 = WdLogNewEntry5_WdError(v31, v30);
          *(_QWORD *)(v32 + 24) = a2->hNtPresentSurfaceHandle;
          *(_QWORD *)(v32 + 32) = v7;
          WdLogEvent5_WdError(v32);
          goto LABEL_18;
        }
        *(_QWORD *)(v13 + 32) = v39;
        *(_QWORD *)(v13 + 40) = *(_QWORD *)&a2->PresentBufferIdx;
        bProducer = a2->bProducer;
      }
      memset(v37, 0, sizeof(v37));
      v33 = *(void **)&a2[1].bProducer;
      *(_DWORD *)&v37[32] = HIDWORD(a2[1].hNtSwapChain);
      *(_DWORD *)&v37[8] = bProducer;
      v34 = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, (struct _D3DKMT_RELEASESWAPCHAIN *)v37, v33, 1);
      v7 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)v34;
      if ( v34 >= 0 )
        return (unsigned int)v7;
    }
    v35 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v35 + 24) = v7;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v7;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
  v14[3] = a2->pMetaData;
  v14[4] = *((_QWORD *)this[7] + 8);
  v14[5] = LODWORD(v7->hNtSwapChain);
  WdLogEvent5_WdError(v14);
  LODWORD(v7) = -1073741811;
LABEL_18:
  DXGSWAPCHAIN::MarkAbandoned(this, v15, v16);
  return (unsigned int)v7;
}
