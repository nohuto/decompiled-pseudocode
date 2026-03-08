/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E61D0
 * Callers:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0269B54 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C0268E48 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct SfmState **v6; // r8
  struct SfmState *v7; // rcx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // eax

  INC_SHARE_REF_CNT(this);
  v6 = (struct SfmState **)*((_QWORD *)a3 + 6);
  v7 = (SFMLOGICALSURFACE *)((char *)this + 32);
  if ( *v6 != (struct SfmState *)((char *)a3 + 40) )
    __fastfail(3u);
  *(_QWORD *)v7 = (char *)a3 + 40;
  *((_QWORD *)this + 5) = v6;
  *v6 = v7;
  *((_QWORD *)a3 + 6) = v7;
  ++*((_DWORD *)a3 + 14);
  v8 = 0;
  v9 = *((_DWORD *)this + 61) | 0x18;
  *((_DWORD *)this + 61) = v9;
  if ( *((_QWORD *)this + 3) )
  {
    if ( (int)SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 1) >= 0 )
      v8 = 128;
    v10 = v8 | *((_DWORD *)this + 61) & 0xFFFFFF7F;
  }
  else
  {
    v10 = v9 & 0xFFFFFF7F;
  }
  *((_DWORD *)this + 61) = v10;
}
