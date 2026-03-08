/*
 * XREFs of ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802A5614
 * Callers:
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802A22B8 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1802A5540 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802A1774 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::PublishPresentData(CHolographicExclusiveView *this)
{
  struct IUnknown *v1; // r8
  char v2; // al
  __int64 v4; // rdx
  CHolographicInteropTaskQueue *v5; // rcx

  v1 = (struct IUnknown *)*((_QWORD *)this + 15);
  v2 = 0;
  if ( !v1 || *((_BYTE *)this + 84) )
  {
    if ( *((_QWORD *)this + 11) )
      CHolographicManager::AttachExclusiveSwapChain(
        *((CHolographicInteropTaskQueue ***)this + 8),
        (struct IUnknown *)this);
  }
  else
  {
    v4 = *((_QWORD *)this + 8);
    v5 = *(CHolographicInteropTaskQueue **)(v4 + 48);
    if ( v5 )
    {
      if ( *(_BYTE *)(v4 + 240) )
      {
        CHolographicInteropTaskQueue::PostMessageW(v5, 0x16u, v1, 0LL, 0LL, 0LL, 0LL);
        v2 = 1;
      }
    }
    *((_BYTE *)this + 84) = v2;
  }
}
