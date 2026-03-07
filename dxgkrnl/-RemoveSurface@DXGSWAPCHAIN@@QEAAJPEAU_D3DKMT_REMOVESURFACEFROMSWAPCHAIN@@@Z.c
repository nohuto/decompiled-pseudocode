__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(struct _KTHREAD **this, struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2)
{
  __int64 BufferIdx; // r9
  unsigned int v6; // eax
  __int64 v7; // rax
  const wchar_t *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KTHREAD *v11; // r8
  char *v12; // rbx
  HANDLE hNtSurfaceHandle; // rdx
  DXGSWAPCHAIN *v14; // rcx

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2464LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2464LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    WdLogSingleEntry1(2LL, 2470LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RemoveSurface is not allowed for sequential swapchains",
      2470LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  BufferIdx = a2->BufferIdx;
  v6 = *((_DWORD *)this + 14);
  if ( (unsigned int)BufferIdx >= v6 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)BufferIdx, v6);
    v7 = *((unsigned int *)this + 14);
    v8 = L"Surface index (0x%I64x) is outside of the range of the table size (0x%I64x)";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, a2->BufferIdx, v7, 0LL, 0LL, 0LL);
LABEL_8:
    DXGSWAPCHAIN::MarkAbandoned(this, v9, v10);
    return 3221225485LL;
  }
  v11 = this[8];
  v12 = (char *)v11 + 112 * BufferIdx;
  if ( !*((_DWORD *)v12 + 2) )
  {
    WdLogSingleEntry2(2LL, a2->BufferIdx, 0LL);
    v7 = *((int *)v12 + 2);
    v8 = L"Surface index (0x%I64x) is not in use by producer, current status (0x%I64x)";
    goto LABEL_7;
  }
  hNtSurfaceHandle = a2->hNtSurfaceHandle;
  if ( *((HANDLE *)v12 + 8) != hNtSurfaceHandle )
  {
    WdLogSingleEntry3(2LL, hNtSurfaceHandle, *((_QWORD *)v11 + 8), BufferIdx);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Surface handle (0x%I64x) provided by caller does not match the handle (0x%I64x) for that index (0x%I64x)",
      (__int64)a2->hNtSurfaceHandle,
      *((_QWORD *)this[8] + 8),
      a2->BufferIdx,
      0LL,
      0LL);
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)this, 0, (__int64)v11 + 112 * BufferIdx);
  if ( v12[80] )
  {
    *((_DWORD *)v12 + 2) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v14, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v12);
    memset(v12, 0, 0x70uLL);
    --*((_DWORD *)this + 15);
  }
  return 0LL;
}
