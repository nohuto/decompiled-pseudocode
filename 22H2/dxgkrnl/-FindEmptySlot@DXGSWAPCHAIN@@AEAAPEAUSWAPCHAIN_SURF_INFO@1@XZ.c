/*
 * XREFs of ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C02AB0E8
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA7D0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *__fastcall DXGSWAPCHAIN::FindEmptySlot(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // edx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *result; // rax

  if ( this[2] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 2473LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_DWORD *)this + 12);
  v5 = 0;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    result = (struct _KTHREAD *)((char *)this[7] + 112 * v5);
    if ( !*((_DWORD *)result + 2) )
      break;
    if ( ++v5 >= v4 )
      return 0LL;
  }
  return result;
}
