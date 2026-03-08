/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0353BA8
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C0356B70 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C005858C (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE Value; // r9d
  _DWORD *v7; // rax
  UINT v8; // ecx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // rax

  Value = (struct _D3DKMT_CREATESWAPCHAIN_FLAGS::$70BC0A62F566DF14DEA3AFF552124300::$9AEF5401B229F3C9C4195726AE3176CE)a3->Flags.Value;
  *((_DWORD *)this + 58) = (*(_BYTE *)&Value & 2) != 0;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    v7 = (_DWORD *)operator new[](8uLL, 0x4B677844u, 256LL);
    if ( v7 )
    {
      v8 = a3->SurfaceCount - 1;
      *v7 = 0;
      v7[1] = v8;
    }
    else
    {
      v7 = 0LL;
    }
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      v9 = 1733LL;
      WdLogSingleEntry1(6LL, 1733LL);
      v10 = L"Out of memory allocating ROTATING_BUFFER_IDX class";
LABEL_7:
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
      return 3221225495LL;
    }
  }
  v12 = operator new[](0x18uLL, 0x4B677844u, 256LL);
  if ( v12 )
  {
    v13 = *((_DWORD *)this + 52);
    *(_DWORD *)v12 = 20;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 4) = v13;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    v9 = 1742LL;
    WdLogSingleEntry1(6LL, 1742LL);
    v10 = L"Failed to allocate surface queue";
    goto LABEL_7;
  }
  v14 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *((_QWORD *)this + 25) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 404LL);
    v16 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 436LL);
    if ( (v16 & 0x10) != 0 )
      *((_DWORD *)this + 49) = 1;
    Current = DXGPROCESS::GetCurrent(v16);
    WdLogSingleEntry2(4LL, this, Current);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to init queue. Returning 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
}
