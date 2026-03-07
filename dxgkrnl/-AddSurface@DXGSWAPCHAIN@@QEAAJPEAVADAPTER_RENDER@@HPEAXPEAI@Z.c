__int64 __fastcall DXGSWAPCHAIN::AddSurface(
        struct _KTHREAD **this,
        DXGADAPTER **a2,
        int a3,
        void *a4,
        unsigned int *a5)
{
  __int64 v8; // rdi
  BOOL v9; // r15d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rbx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  char *v14; // r12
  int v15; // eax
  int v16; // esi
  __int64 v17; // r14
  const wchar_t *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // rcx
  DXGSWAPCHAIN *v23; // rcx
  _DWORD v24[24]; // [rsp+50h] [rbp-88h] BYREF
  DXGSYNCOBJECT *v25; // [rsp+E0h] [rbp+8h] BYREF

  v8 = (__int64)this;
  if ( this[3] != KeGetCurrentThread() || !DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 2343LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_SwapChainLock.IsOwner() && pRenderCore->IsCoreResourceSharedOwner()",
      2343LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = a3 == 0;
  if ( *(_DWORD *)(v8 + 60) >= 0x32u )
  {
    WdLogSingleEntry1(2LL, 2351LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Swapchain is at max number of surfaces so cannot add anymore",
      2351LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((DXGSWAPCHAIN *)v8);
  if ( !EmptySlot )
  {
    if ( *(_DWORD *)(v8 + 56) != *(_DWORD *)(v8 + 60) )
    {
      WdLogSingleEntry1(1LL, 2359LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_SurfaceTableSize == m_ActiveSurfaceCo",
        2359LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = *(_DWORD *)(v8 + 56) + 5;
    v13 = 112LL * v12;
    if ( !is_mul_ok(v12, 0x70uLL) )
      v13 = -1LL;
    v14 = (char *)operator new[](v13, 0x4B677844u, 256LL);
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate new surface table, size %ld",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(v14, *(const void **)(v8 + 64), 112LL * *(unsigned int *)(v8 + 56));
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v14[112 * *(unsigned int *)(v8 + 56)];
    operator delete(*(void **)(v8 + 64));
    *(_QWORD *)(v8 + 64) = v14;
    *(_DWORD *)(v8 + 56) = v12;
  }
  memset(v24, 0, sizeof(v24));
  v24[3] |= 1u;
  v24[2] = 3;
  v15 = CreateSynchronizationObjectInternal(0LL, 1, (__int64)a2, (__int64)v24, 0xDu, 0, &v25, 0LL, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = v15;
    WdLogSingleEntry2(2LL, v8, v15);
    v18 = L"CreateSynchronizationObjectInternal failed. Returning 0x%I64x";
LABEL_23:
    v21 = 0x40000;
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, v21, -1, (__int64)v18, v8, v17, 0LL, 0LL, 0LL);
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v22, v9, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v23, EmptySlot);
      memset(EmptySlot, 0, 0x70uLL);
    }
    return (unsigned int)v16;
  }
  *((_DWORD *)EmptySlot + 7) = v24[20];
  v19 = operator new[](0x10uLL, 0x4B677844u, 256LL);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)(v19 + 8) = 0LL;
    *(_QWORD *)v19 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v19, 0, 0);
  }
  else
  {
    v20 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v20;
  if ( !v20 )
  {
    v8 = 2416LL;
    WdLogSingleEntry1(6LL, 2416LL);
    v21 = 262145;
    v18 = L"Out of memory allocating AUTOEXPANDALLOCATION class";
    v16 = -1073741801;
    v17 = 0LL;
    goto LABEL_24;
  }
  v16 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
          (DXGSWAPCHAIN *)v8,
          EmptySlot,
          (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 32 * v9 + 48),
          a4);
  if ( v16 < 0 )
  {
    v8 = 2425LL;
    WdLogSingleEntry1(2LL, 2425LL);
    v18 = L"OpenSurfacesResourcesLocalForCreator failed";
    v17 = 0LL;
    goto LABEL_23;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  *a5 = -1227133513 * (((__int64)EmptySlot - *(_QWORD *)(v8 + 64)) >> 4);
  ++*(_DWORD *)(v8 + 60);
  return (unsigned int)v16;
}
