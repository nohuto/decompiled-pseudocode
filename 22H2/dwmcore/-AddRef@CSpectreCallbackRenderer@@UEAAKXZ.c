/*
 * XREFs of ?AddRef@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801FDBA0
 * Callers:
 *     ?AddRef@CSpectreCallbackRenderer@@W7EAAKXZ @ 0x18011DA80 (-AddRef@CSpectreCallbackRenderer@@W7EAAKXZ.c)
 *     ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180121A20 (-AddRef@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpectreCallbackRenderer::AddRef(CSpectreCallbackRenderer *this)
{
  return CMILRefCountImpl::AddReference((CSpectreCallbackRenderer *)((char *)this + 16));
}
