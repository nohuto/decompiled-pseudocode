/*
 * XREFs of ?GetRealizationCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x180107A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetRealizationCount(CGlobalCompositionSurfaceInfo *this)
{
  return (__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 3;
}
