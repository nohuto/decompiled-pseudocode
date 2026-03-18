/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020C2C
 * Callers:
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C01547D8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0020C74 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

SFMLOGICALSURFACEREF *__fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this, HLSURF *a2)
{
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 1;
  if ( a2 )
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(this, *a2);
  return this;
}
