/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0016DB8
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C0015168 (GreSfmCloseCompositorRef.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0015944 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BE198 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C012E910 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0133770 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C026E3EC (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  HDEV v4; // rsi
  SFMLOGICALSURFACE **v6; // rdx
  SFMLOGICALSURFACE **v7; // rax
  int v8; // eax

  *((_DWORD *)this + 61) &= ~8u;
  v4 = a2;
  DEC_SHARE_REF_CNT(this, a2);
  --*((_DWORD *)a3 + 14);
  v6 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 4);
  if ( v6[1] != (SFMLOGICALSURFACE *)((char *)this + 32)
    || (v7 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 5), *v7 != (SFMLOGICALSURFACE *)((char *)this + 32)) )
  {
    __fastfail(3u);
  }
  *v7 = (SFMLOGICALSURFACE *)v6;
  v6[1] = (SFMLOGICALSURFACE *)v7;
  v8 = *((_DWORD *)this + 61);
  if ( (v8 & 0x80u) != 0 )
  {
    if ( v4 || (v4 = (HDEV)*((_QWORD *)this + 3)) != 0LL )
    {
      SpNotifyLSurfaceTracking(v4, *(HLSURF *)this, 0);
      v8 = *((_DWORD *)this + 61);
    }
    *((_DWORD *)this + 61) = v8 & 0xFFFFFF7F;
  }
  return 0LL;
}
