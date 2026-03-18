/*
 * XREFs of ?Release@CManipulationContext@@UEAAKXZ @ 0x18012D940
 * Callers:
 *     ?Release@CHolographicManager@@W7EAAKXZ @ 0x18011BA40 (-Release@CHolographicManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::Release(CManipulationContext *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 2);
}
