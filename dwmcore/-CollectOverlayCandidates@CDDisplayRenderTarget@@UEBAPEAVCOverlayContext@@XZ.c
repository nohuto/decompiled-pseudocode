/*
 * XREFs of ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1801C0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180086974 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 */

struct COverlayContext *__fastcall CDDisplayRenderTarget::CollectOverlayCandidates(CDDisplayRenderTarget *this)
{
  CDesktopTree *v2; // rcx

  if ( !*((_QWORD *)this + 5) )
    return 0LL;
  v2 = (CDesktopTree *)*((_QWORD *)this + 4);
  if ( !v2 )
    return 0LL;
  CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(v2);
  return (CDDisplayRenderTarget *)((char *)this + 48);
}
