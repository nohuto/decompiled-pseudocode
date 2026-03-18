/*
 * XREFs of ?AddRef@CManipulationContext@@UEAAKXZ @ 0x18012D7F0
 * Callers:
 *     ?AddRef@CHolographicManager@@W7EAAKXZ @ 0x18011BA20 (-AddRef@CHolographicManager@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@W7EAAKXZ @ 0x180121900 (-AddRef@CHolographicFrameProcessor@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x180121920 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x180121940 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::AddRef(CManipulationContext *this)
{
  return CMILRefCountImpl::AddReference((CManipulationContext *)((char *)this + 16));
}
