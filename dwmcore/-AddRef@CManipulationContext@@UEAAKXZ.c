/*
 * XREFs of ?AddRef@CManipulationContext@@UEAAKXZ @ 0x180129640
 * Callers:
 *     ?AddRef@CHolographicManager@@W7EAAKXZ @ 0x180117870 (-AddRef@CHolographicManager@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@W7EAAKXZ @ 0x18011D750 (-AddRef@CHolographicFrameProcessor@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x18011D770 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x18011D790 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::AddRef(CManipulationContext *this)
{
  return CMILRefCountImpl::AddReference((CManipulationContext *)((char *)this + 16));
}
