struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *__fastcall DXGSWAPCHAIN::FindEmptySlot(struct _KTHREAD **this)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *result; // rax

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2538LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2538LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = *((_DWORD *)this + 14);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    result = (struct _KTHREAD *)((char *)this[8] + 112 * v3);
    if ( !*((_DWORD *)result + 2) )
      break;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
