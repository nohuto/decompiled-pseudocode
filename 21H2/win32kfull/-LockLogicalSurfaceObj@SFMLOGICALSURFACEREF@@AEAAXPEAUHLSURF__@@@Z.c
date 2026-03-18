/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0020C74
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020C2C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0084420 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreSfmCloseCompositorRef @ 0x1C0089AE4 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0089F6C (GreSfmOpenCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0109CF0 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01208C0 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026CC10 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  HLSURF v3; // rcx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 18;
    *((_QWORD *)this + 4) = HmgLock(v3, a2);
  }
}
