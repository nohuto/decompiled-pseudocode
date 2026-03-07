__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(struct _KTHREAD **this, struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v6; // rbx
  __int64 hNtSwapChain_low; // r9
  __int64 v8; // rax
  const wchar_t *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KTHREAD *v12; // r8
  char *v13; // r14
  PVOID pMetaData; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  const wchar_t *v20; // r9
  __int64 CurrentProcess; // rax
  HANDLE hNtPresentSurfaceHandle; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  void *v27; // r8
  int v28; // eax
  int v29; // [rsp+38h] [rbp-F0h]
  _BYTE v30[64]; // [rsp+50h] [rbp-D8h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN v31; // [rsp+90h] [rbp-98h] BYREF
  __int64 v32; // [rsp+130h] [rbp+8h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2562LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2562LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry1(2LL, 2567LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnOrderedPresent is not allowed for sequential swapchains",
      2567LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 14);
  v6 = a2 + 1;
  hNtSwapChain_low = LODWORD(a2[1].hNtSwapChain);
  if ( (unsigned int)hNtSwapChain_low >= v5 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hNtSwapChain_low, v5);
    v8 = *((unsigned int *)this + 14);
    v9 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, LODWORD(v6->hNtSwapChain), v8, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10, v11);
    return 3221225485LL;
  }
  v12 = this[8];
  v13 = (char *)v12 + 112 * hNtSwapChain_low;
  if ( !*((_DWORD *)v13 + 2) )
  {
    WdLogSingleEntry2(2LL, LODWORD(a2[1].hNtSwapChain), 0LL);
    v8 = *((int *)v13 + 2);
    v9 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    goto LABEL_7;
  }
  pMetaData = a2->pMetaData;
  if ( *((PVOID *)v13 + 8) == pMetaData )
  {
    memset(&v31, 0, 0x68uLL);
    v31.bProducer = a2->bProducer;
    v18 = DXGSWAPCHAIN::AcquireBuffer(this, &v31, (unsigned int *)&a2[1]);
    v17 = v18;
    if ( v18 >= 0 )
    {
      result = 259LL;
      if ( (_DWORD)v17 == 259 )
        return result;
      if ( a2->bProducer && a2->hNtPresentSurfaceHandle )
      {
        v32 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v19);
        hNtPresentSurfaceHandle = a2->hNtPresentSurfaceHandle;
        v23 = CurrentProcess;
        v25 = PsGetCurrentProcess(v24);
        LOBYTE(v29) = 1;
        v26 = ObDuplicateObject(v25, hNtPresentSurfaceHandle, v23, &v32, 0, 0, 6, v29);
        v17 = v26;
        if ( v26 < 0 )
        {
          WdLogSingleEntry2(2LL, a2->hNtPresentSurfaceHandle, v26);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to duplicate Fence Nt handle 0x%I64x, error 0x%I64x",
            (__int64)a2->hNtPresentSurfaceHandle,
            v17,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        *((_QWORD *)v13 + 4) = v32;
        *((_QWORD *)v13 + 5) = *(_QWORD *)&a2->PresentBufferIdx;
      }
      memset(v30, 0, sizeof(v30));
      v27 = *(void **)&a2[1].bProducer;
      *(_DWORD *)&v30[8] = a2->bProducer;
      *(_DWORD *)&v30[32] = HIDWORD(a2[1].hNtSwapChain);
      v28 = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, (struct _D3DKMT_RELEASESWAPCHAIN *)v30, v27, 1, 0);
      v17 = v28;
      if ( v28 >= 0 )
        return (unsigned int)v17;
      WdLogSingleEntry1(2LL, v28);
      v20 = L"ReleaseBuffer() failed with 0x%I64x for un-ordered present";
    }
    else
    {
      WdLogSingleEntry1(2LL, v18);
      v20 = L"AcquireBuffer() failed with 0x%I64x for un-ordered present";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v17, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v17;
  }
  WdLogSingleEntry3(2LL, pMetaData, *((_QWORD *)v12 + 8), hNtSwapChain_low);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
    (__int64)a2->pMetaData,
    *((_QWORD *)this[8] + 8),
    LODWORD(v6->hNtSwapChain),
    0LL,
    0LL);
  LODWORD(v17) = -1073741811;
LABEL_19:
  DXGSWAPCHAIN::MarkAbandoned(this, v15, v16);
  return (unsigned int)v17;
}
