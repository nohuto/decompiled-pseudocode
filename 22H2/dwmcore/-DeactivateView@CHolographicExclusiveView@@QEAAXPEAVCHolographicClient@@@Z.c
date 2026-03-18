/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802A874C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802ACE40 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802ADCE8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802ADF60 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802AD124 (-OnExclusiveViewDeactivate@CHolographicClient@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
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
