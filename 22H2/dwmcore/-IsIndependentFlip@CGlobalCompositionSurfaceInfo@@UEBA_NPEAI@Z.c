/*
 * XREFs of ?IsIndependentFlip@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z @ 0x1801F8940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsIndependentFlip(CGlobalCompositionSurfaceInfo *this, unsigned int *a2)
{
  if ( a2 )
  {
    if ( *((_BYTE *)this + 260) )
      *a2 = *((_DWORD *)this + 69);
    else
      *a2 = -1;
  }
  return *((_BYTE *)this + 260);
}
