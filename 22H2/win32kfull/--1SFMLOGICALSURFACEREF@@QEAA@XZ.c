/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C0079C9C (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C007B044 (GreSfmOpenCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00B2A18 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00BD0D0 (GrepSfmRemoveSurfaces.c)
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0133EB8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0134444 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C02672A0 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0079E0C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  __int64 v1; // rax
  Gre::Base *v3; // rcx
  int v4; // eax
  struct Gre::Base::SESSION_GLOBALS *v5; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v3 = (Gre::Base *)*((_QWORD *)this + 4);
      v4 = *((_DWORD *)v3 + 61);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v4 & 0xFFFFFFEF;
        v5 = Gre::Base::Globals(v3);
        SFMLOGICALSURFACE::StopSfmStateTracking(*((SFMLOGICALSURFACE **)this + 4), 0LL, *((struct SfmState **)v5 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject(*((struct SFMLOGICALSURFACE **)this + 4), 1);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
