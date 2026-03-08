/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C001EDD8
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00D790C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00F4B00 (GrepSfmRemoveSurfaces.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C026B310 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C0268E48 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  SFMLOGICALSURFACE **v6; // rdx
  SFMLOGICALSURFACE **v7; // rax

  *((_DWORD *)this + 61) &= ~8u;
  DEC_SHARE_REF_CNT(this);
  --*((_DWORD *)a3 + 14);
  v6 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 4);
  if ( v6[1] != (SFMLOGICALSURFACE *)((char *)this + 32)
    || (v7 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 5), *v7 != (SFMLOGICALSURFACE *)((char *)this + 32)) )
  {
    __fastfail(3u);
  }
  *v7 = (SFMLOGICALSURFACE *)v6;
  v6[1] = (SFMLOGICALSURFACE *)v7;
  if ( (*((_DWORD *)this + 61) & 0x80u) != 0 )
  {
    if ( a2 || (a2 = (HDEV)*((_QWORD *)this + 3)) != 0LL )
      SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 0);
    *((_DWORD *)this + 61) &= ~0x80u;
  }
  return 0LL;
}
