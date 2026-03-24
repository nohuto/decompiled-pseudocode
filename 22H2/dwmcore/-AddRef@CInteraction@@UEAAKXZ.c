/*
 * XREFs of ?AddRef@CInteraction@@UEAAKXZ @ 0x1800C4430
 * Callers:
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800F5FA0 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1800F7DD0 (-AddRef@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1800F7DE0 (-AddRef@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::AddRef(CInteraction *this)
{
  return CMILCOMBase::InternalAddRef((CInteraction *)((char *)this + 8));
}
