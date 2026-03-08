/*
 * XREFs of ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180086940
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180086974 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 */

struct COverlayContext *__fastcall CLegacyRenderTarget::CollectOverlayCandidates(CLegacyRenderTarget *this)
{
  CDesktopTree *v2; // rcx

  if ( !*((_QWORD *)this + 5) )
    return 0LL;
  v2 = (CDesktopTree *)*((_QWORD *)this + 3);
  if ( !v2 )
    return 0LL;
  CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(v2);
  return (CLegacyRenderTarget *)((char *)this + 56);
}
