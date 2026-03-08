/*
 * XREFs of ?Release@CManipulationContext@@UEAAKXZ @ 0x180129790
 * Callers:
 *     ?Release@CHolographicManager@@W7EAAKXZ @ 0x180117890 (-Release@CHolographicManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::Release(CManipulationContext *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 2);
}
