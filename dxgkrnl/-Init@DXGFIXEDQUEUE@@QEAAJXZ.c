/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C005858C
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0353BA8 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v2 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v2 = -1LL;
  v3 = operator new[](v2, 0x4B677844u, 256LL);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  WdLogSingleEntry1(6LL, *((unsigned int *)this + 1));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v5,
        v4,
        v6,
        0LL,
        1,
        -1,
        L"Out of memory allocating memory for queue, size 0x%I64x",
        *((unsigned int *)this + 1),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 3221225495LL;
}
