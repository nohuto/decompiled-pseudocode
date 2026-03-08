/*
 * XREFs of ?AreResourcesPinned@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180257500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::AreResourcesPinned(CGlobalCompositionSurfaceInfo *this)
{
  return (__int64)(*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) >> 3 != 0;
}
