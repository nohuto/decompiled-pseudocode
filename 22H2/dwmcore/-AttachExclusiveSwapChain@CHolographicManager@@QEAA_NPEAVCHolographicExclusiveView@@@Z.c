/*
 * XREFs of ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802A4EF4
 * Callers:
 *     ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1802A85B8 (-AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A8D94 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802AC48C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AttachExclusiveSwapChain(CHolographicInteropTaskQueue **this, struct IUnknown *a2)
{
  bool result; // al

  result = 0;
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      return CHolographicInteropTaskQueue::PostMessageW(this[6], 0xEu, a2, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
