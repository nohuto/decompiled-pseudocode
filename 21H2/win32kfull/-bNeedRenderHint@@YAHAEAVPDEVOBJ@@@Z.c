/*
 * XREFs of ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00843F8
 * Callers:
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C0080944 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C0084014 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00840D8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C026C164 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026C2D4 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bNeedRenderHint(struct PDEVOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 3408LL)
    && (*(_DWORD *)(*(_QWORD *)a1 + 2096LL) & 0x400) != 0
    && (!g_pDwmState || !(unsigned int)UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
