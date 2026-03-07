struct DXGSWAPCHAIN_CONTAINER *__fastcall SwapChainOpenInternal(void *a1)
{
  NTSTATUS v2; // eax
  PVOID v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = ObReferenceObjectByHandle(a1, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v4, 0LL);
  if ( v2 >= 0 )
    return (struct DXGSWAPCHAIN_CONTAINER *)v4;
  WdLogSingleEntry2(3LL, a1, v2);
  return 0LL;
}
