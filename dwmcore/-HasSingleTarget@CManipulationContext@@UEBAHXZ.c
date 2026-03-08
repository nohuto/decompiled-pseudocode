/*
 * XREFs of ?HasSingleTarget@CManipulationContext@@UEBAHXZ @ 0x1801047B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::HasSingleTarget(CManipulationContext *this)
{
  return (*((unsigned __int8 *)this + 28) >> 3) & 1;
}
