/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A8790
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802A5D6C (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802A5F4C (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802A8E08 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(
        CHolographicExclusiveView *this,
        CAnimationLoggingManager **a2)
{
  void *v4; // rcx
  CHolographicInteropTaskQueue **v5; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 8);
  if ( v5 )
  {
    CHolographicManager::ReleaseExclusivePresentData(v5, *((_DWORD *)this + 18));
    CHolographicManager::RemoveExclusiveView(*((CHolographicManager **)this + 8), (struct IUnknown *)this);
  }
  CResource::DetachFromChannel(this, a2);
}
