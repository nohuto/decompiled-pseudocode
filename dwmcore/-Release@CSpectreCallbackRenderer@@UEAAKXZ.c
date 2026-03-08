/*
 * XREFs of ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801D3A80
 * Callers:
 *     ?Release@CSpectreCallbackRenderer@@W7EAAKXZ @ 0x1801198F0 (-Release@CSpectreCallbackRenderer@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpectreCallbackRenderer::Release(CSpectreCallbackRenderer *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 2);
}
