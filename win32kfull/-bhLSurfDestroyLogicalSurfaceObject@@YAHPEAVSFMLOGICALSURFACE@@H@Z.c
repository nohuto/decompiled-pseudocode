/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00272F4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00286CC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00D790C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00F4B00 (GrepSfmRemoveSurfaces.c)
 *     CleanupHLSURF @ 0x1C00F5FA0 (CleanupHLSURF.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C026B310 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C00D7A20 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(HLSURF *a1, int a2)
{
  HLSURF v2; // rsi
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  char v7; // [rsp+20h] [rbp-18h]

  v2 = *a1;
  v3 = 0;
  v5 = (SFMLOGICALSURFACE *)a1;
  if ( *a1 )
  {
    v7 = 18;
    v5 = (SFMLOGICALSURFACE *)HmgRemoveObject(v2, 0LL, 0LL, 1LL, v7, 0LL);
  }
  if ( v5 )
  {
    SFMLOGICALSURFACE::DeInitialize(v5, v2);
    FreeObject(v5, 18LL);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v2, 0LL);
    return 1;
  }
  return v3;
}
