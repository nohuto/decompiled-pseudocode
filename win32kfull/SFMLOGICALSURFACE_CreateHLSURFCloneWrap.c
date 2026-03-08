/*
 * XREFs of SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C026B380
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00272F4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE_CreateHLSURFCloneWrap(
        HDEV a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  return SFMLOGICALSURFACE::CreateHLSURFClone(a1, a2, a3, a4, a5);
}
