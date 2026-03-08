/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002D794
 * Callers:
 *     GreSfmOpenCompositorRef @ 0x1C001E854 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C001F308 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00284DC (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00F2FEC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00F4B00 (GrepSfmRemoveSurfaces.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0128568 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C0269D30 (CheckAndProcessSurfaceComplete.c)
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
    *(_QWORD *)this = HmgLock(v3, a2);
  }
}
