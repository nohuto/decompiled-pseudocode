/*
 * XREFs of ?IsOverlayAssigned@CGlobalCompositionSurfaceInfo@@UEBA_NPEAI@Z @ 0x1801F8970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsOverlayAssigned(CGlobalCompositionSurfaceInfo *this, unsigned int *a2)
{
  unsigned int v2; // eax

  if ( a2 )
  {
    if ( *((_BYTE *)this + 265) )
      v2 = *((_DWORD *)this + 67);
    else
      v2 = -1;
    *a2 = v2;
  }
  return *((_BYTE *)this + 265);
}
