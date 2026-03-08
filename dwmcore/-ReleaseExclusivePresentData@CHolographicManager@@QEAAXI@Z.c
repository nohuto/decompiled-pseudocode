/*
 * XREFs of ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802A25EC
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A5010 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1802A5540 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseExclusivePresentData(CHolographicInteropTaskQueue **this, unsigned int a2)
{
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(this[6], 0x17u, 0LL, (void *)a2, 0LL, 0LL, 0LL);
  }
}
