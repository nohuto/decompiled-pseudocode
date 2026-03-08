/*
 * XREFs of ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180258330
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025779C (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::PreventOverlay(CGlobalCompositionSurfaceInfo *this, char a2)
{
  struct CComposition *v4; // rax

  if ( a2 && !*((_BYTE *)this + 298) && *((_BYTE *)this + 302) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 104));
  if ( a2 != *((_BYTE *)this + 298) )
  {
    v4 = g_pComposition;
    *((_BYTE *)this + 298) = a2;
    *((_BYTE *)v4 + 1276) = 1;
  }
}
