/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C0079C9C (GreSfmCloseCompositorRef.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0079F18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007CCDC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00BD0D0 (GrepSfmRemoveSurfaces.c)
 *     CleanupHLSURF @ 0x1C00BE3E0 (CleanupHLSURF.c)
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C02689F0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x1C007B470 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(HLSURF *this, int a2)
{
  HLSURF v2; // rsi
  unsigned int v3; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  char v7; // [rsp+20h] [rbp-18h]

  v2 = *this;
  v3 = 0;
  v5 = (SFMLOGICALSURFACE *)this;
  if ( *this )
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
