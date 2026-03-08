/*
 * XREFs of ?GetPresentDurationTolerance@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z @ 0x1801302A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::GetPresentDurationTolerance(
        CGlobalCompositionSurfaceInfo *this,
        unsigned int *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 26);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 104LL))(v2, a2);
  *a2 = 0;
  return 0;
}
