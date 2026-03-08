/*
 * XREFs of ?HasApprovedCustomDuration@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180257F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::HasApprovedCustomDuration(CGlobalCompositionSurfaceInfo *this)
{
  return *((_DWORD *)this + 82) != 0;
}
