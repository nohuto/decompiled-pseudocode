/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802A4FCC
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802A96C0 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA568 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA7E0 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802A99A4 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 80) || *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 0;
  }
  else
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, this);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
