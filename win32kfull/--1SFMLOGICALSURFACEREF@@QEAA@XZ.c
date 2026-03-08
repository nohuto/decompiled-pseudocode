/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404
 * Callers:
 *     GreSfmOpenCompositorRef @ 0x1C001E854 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C001F308 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00284DC (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00F2FEC (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00F4B00 (GrepSfmRemoveSurfaces.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C012834C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C0269D30 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C001EDD8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACE **this)
{
  SFMLOGICALSURFACE *v2; // rcx
  int v3; // eax
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  if ( *this )
  {
    _InterlockedDecrement((volatile signed __int32 *)*this + 3);
    if ( *((_DWORD *)this + 2) == 1 )
    {
      v2 = *this;
      v3 = *((_DWORD *)v2 + 61);
      if ( (v3 & 0x80u) != 0 && (v3 & 8) != 0 && (v3 & 0x10) != 0 )
      {
        *((_DWORD *)v2 + 61) = v3 & 0xFFFFFFEF;
        v4 = Gre::Base::Globals(v2);
        SFMLOGICALSURFACE::StopSfmStateTracking(*this, 0LL, *((struct SfmState **)v4 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject(*this, 1);
    }
  }
}
